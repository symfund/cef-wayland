// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "libcef/browser/chrome/chrome_browser_main_extra_parts_cef.h"

#include "libcef/browser/chrome/chrome_context_menu_handler.h"
#include "libcef/browser/context.h"
#include "libcef/browser/file_dialog_runner.h"
#include "libcef/browser/net/chrome_scheme_handler.h"
#include "libcef/browser/permission_prompt.h"

#include "base/task/thread_pool.h"
#include "chrome/browser/profiles/profile.h"

ChromeBrowserMainExtraPartsCef::ChromeBrowserMainExtraPartsCef() = default;

ChromeBrowserMainExtraPartsCef::~ChromeBrowserMainExtraPartsCef() = default;

void ChromeBrowserMainExtraPartsCef::PostProfileInit(Profile* profile,
                                                     bool is_initial_profile) {
  if (!is_initial_profile) {
    return;
  }

  CefRequestContextSettings settings;
  CefContext::Get()->PopulateGlobalRequestContextSettings(&settings);

  // Use the existing path for the initial profile.
  CefString(&settings.cache_path) = profile->GetPath().value();

  // Create the global RequestContext.
  global_request_context_ =
      CefRequestContextImpl::CreateGlobalRequestContext(settings);
}

void ChromeBrowserMainExtraPartsCef::PreMainMessageLoopRun() {
  background_task_runner_ = base::ThreadPool::CreateSingleThreadTaskRunner(
      {base::TaskPriority::BEST_EFFORT,
       base::TaskShutdownBehavior::BLOCK_SHUTDOWN, base::MayBlock()});
  user_visible_task_runner_ = base::ThreadPool::CreateSingleThreadTaskRunner(
      {base::TaskPriority::USER_VISIBLE,
       base::TaskShutdownBehavior::BLOCK_SHUTDOWN, base::MayBlock()});
  user_blocking_task_runner_ = base::ThreadPool::CreateSingleThreadTaskRunner(
      {base::TaskPriority::USER_BLOCKING,
       base::TaskShutdownBehavior::BLOCK_SHUTDOWN, base::MayBlock()});

  scheme::RegisterWebUIControllerFactory();
  context_menu::RegisterMenuCreatedCallback();
  file_dialog_runner::RegisterFactory();
  permission_prompt::RegisterCreateCallback();
}
