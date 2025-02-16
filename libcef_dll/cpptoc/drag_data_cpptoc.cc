// Copyright (c) 2023 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=dc5d0e68bdc9b8ec86dbc9b4fa0ddce6e4597006$
//

#include "libcef_dll/cpptoc/drag_data_cpptoc.h"
#include "libcef_dll/cpptoc/image_cpptoc.h"
#include "libcef_dll/cpptoc/stream_writer_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/transfer_util.h"

// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_drag_data_t* cef_drag_data_create() {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefDragData> _retval = CefDragData::Create();

  // Return type: refptr_same
  return CefDragDataCppToC::Wrap(_retval);
}

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

struct _cef_drag_data_t* CEF_CALLBACK
drag_data_clone(struct _cef_drag_data_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefDragData> _retval = CefDragDataCppToC::Get(self)->Clone();

  // Return type: refptr_same
  return CefDragDataCppToC::Wrap(_retval);
}

int CEF_CALLBACK drag_data_is_read_only(struct _cef_drag_data_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefDragDataCppToC::Get(self)->IsReadOnly();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK drag_data_is_link(struct _cef_drag_data_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefDragDataCppToC::Get(self)->IsLink();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK drag_data_is_fragment(struct _cef_drag_data_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefDragDataCppToC::Get(self)->IsFragment();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK drag_data_is_file(struct _cef_drag_data_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefDragDataCppToC::Get(self)->IsFile();

  // Return type: bool
  return _retval;
}

cef_string_userfree_t CEF_CALLBACK
drag_data_get_link_url(struct _cef_drag_data_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefString _retval = CefDragDataCppToC::Get(self)->GetLinkURL();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK
drag_data_get_link_title(struct _cef_drag_data_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefString _retval = CefDragDataCppToC::Get(self)->GetLinkTitle();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK
drag_data_get_link_metadata(struct _cef_drag_data_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefString _retval = CefDragDataCppToC::Get(self)->GetLinkMetadata();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK
drag_data_get_fragment_text(struct _cef_drag_data_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefString _retval = CefDragDataCppToC::Get(self)->GetFragmentText();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK
drag_data_get_fragment_html(struct _cef_drag_data_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefString _retval = CefDragDataCppToC::Get(self)->GetFragmentHtml();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK
drag_data_get_fragment_base_url(struct _cef_drag_data_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefString _retval = CefDragDataCppToC::Get(self)->GetFragmentBaseURL();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK
drag_data_get_file_name(struct _cef_drag_data_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefString _retval = CefDragDataCppToC::Get(self)->GetFileName();

  // Return type: string
  return _retval.DetachToUserFree();
}

size_t CEF_CALLBACK
drag_data_get_file_contents(struct _cef_drag_data_t* self,
                            struct _cef_stream_writer_t* writer) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Unverified params: writer

  // Execute
  size_t _retval = CefDragDataCppToC::Get(self)->GetFileContents(
      CefStreamWriterCppToC::Unwrap(writer));

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK drag_data_get_file_names(struct _cef_drag_data_t* self,
                                          cef_string_list_t names) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: names; type: string_vec_byref
  DCHECK(names);
  if (!names) {
    return 0;
  }

  // Translate param: names; type: string_vec_byref
  std::vector<CefString> namesList;
  transfer_string_list_contents(names, namesList);

  // Execute
  bool _retval = CefDragDataCppToC::Get(self)->GetFileNames(namesList);

  // Restore param: names; type: string_vec_byref
  cef_string_list_clear(names);
  transfer_string_list_contents(namesList, names);

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK drag_data_set_link_url(struct _cef_drag_data_t* self,
                                         const cef_string_t* url) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Unverified params: url

  // Execute
  CefDragDataCppToC::Get(self)->SetLinkURL(CefString(url));
}

void CEF_CALLBACK drag_data_set_link_title(struct _cef_drag_data_t* self,
                                           const cef_string_t* title) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Unverified params: title

  // Execute
  CefDragDataCppToC::Get(self)->SetLinkTitle(CefString(title));
}

void CEF_CALLBACK drag_data_set_link_metadata(struct _cef_drag_data_t* self,
                                              const cef_string_t* data) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Unverified params: data

  // Execute
  CefDragDataCppToC::Get(self)->SetLinkMetadata(CefString(data));
}

void CEF_CALLBACK drag_data_set_fragment_text(struct _cef_drag_data_t* self,
                                              const cef_string_t* text) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Unverified params: text

  // Execute
  CefDragDataCppToC::Get(self)->SetFragmentText(CefString(text));
}

void CEF_CALLBACK drag_data_set_fragment_html(struct _cef_drag_data_t* self,
                                              const cef_string_t* html) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Unverified params: html

  // Execute
  CefDragDataCppToC::Get(self)->SetFragmentHtml(CefString(html));
}

void CEF_CALLBACK
drag_data_set_fragment_base_url(struct _cef_drag_data_t* self,
                                const cef_string_t* base_url) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Unverified params: base_url

  // Execute
  CefDragDataCppToC::Get(self)->SetFragmentBaseURL(CefString(base_url));
}

void CEF_CALLBACK drag_data_reset_file_contents(struct _cef_drag_data_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefDragDataCppToC::Get(self)->ResetFileContents();
}

void CEF_CALLBACK drag_data_add_file(struct _cef_drag_data_t* self,
                                     const cef_string_t* path,
                                     const cef_string_t* display_name) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: path; type: string_byref_const
  DCHECK(path);
  if (!path) {
    return;
  }
  // Unverified params: display_name

  // Execute
  CefDragDataCppToC::Get(self)->AddFile(CefString(path),
                                        CefString(display_name));
}

void CEF_CALLBACK drag_data_clear_filenames(struct _cef_drag_data_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefDragDataCppToC::Get(self)->ClearFilenames();
}

struct _cef_image_t* CEF_CALLBACK
drag_data_get_image(struct _cef_drag_data_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefImage> _retval = CefDragDataCppToC::Get(self)->GetImage();

  // Return type: refptr_same
  return CefImageCppToC::Wrap(_retval);
}

cef_point_t CEF_CALLBACK
drag_data_get_image_hotspot(struct _cef_drag_data_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefPoint();
  }

  // Execute
  cef_point_t _retval = CefDragDataCppToC::Get(self)->GetImageHotspot();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK drag_data_has_image(struct _cef_drag_data_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefDragDataCppToC::Get(self)->HasImage();

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefDragDataCppToC::CefDragDataCppToC() {
  GetStruct()->clone = drag_data_clone;
  GetStruct()->is_read_only = drag_data_is_read_only;
  GetStruct()->is_link = drag_data_is_link;
  GetStruct()->is_fragment = drag_data_is_fragment;
  GetStruct()->is_file = drag_data_is_file;
  GetStruct()->get_link_url = drag_data_get_link_url;
  GetStruct()->get_link_title = drag_data_get_link_title;
  GetStruct()->get_link_metadata = drag_data_get_link_metadata;
  GetStruct()->get_fragment_text = drag_data_get_fragment_text;
  GetStruct()->get_fragment_html = drag_data_get_fragment_html;
  GetStruct()->get_fragment_base_url = drag_data_get_fragment_base_url;
  GetStruct()->get_file_name = drag_data_get_file_name;
  GetStruct()->get_file_contents = drag_data_get_file_contents;
  GetStruct()->get_file_names = drag_data_get_file_names;
  GetStruct()->set_link_url = drag_data_set_link_url;
  GetStruct()->set_link_title = drag_data_set_link_title;
  GetStruct()->set_link_metadata = drag_data_set_link_metadata;
  GetStruct()->set_fragment_text = drag_data_set_fragment_text;
  GetStruct()->set_fragment_html = drag_data_set_fragment_html;
  GetStruct()->set_fragment_base_url = drag_data_set_fragment_base_url;
  GetStruct()->reset_file_contents = drag_data_reset_file_contents;
  GetStruct()->add_file = drag_data_add_file;
  GetStruct()->clear_filenames = drag_data_clear_filenames;
  GetStruct()->get_image = drag_data_get_image;
  GetStruct()->get_image_hotspot = drag_data_get_image_hotspot;
  GetStruct()->has_image = drag_data_has_image;
}

// DESTRUCTOR - Do not edit by hand.

CefDragDataCppToC::~CefDragDataCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefDragData>
CefCppToCRefCounted<CefDragDataCppToC, CefDragData, cef_drag_data_t>::
    UnwrapDerived(CefWrapperType type, cef_drag_data_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefDragDataCppToC,
                                   CefDragData,
                                   cef_drag_data_t>::kWrapperType =
    WT_DRAG_DATA;
