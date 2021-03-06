// Copyright (c) 2022 The Chromium Embedded Framework Authors. All rights
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
// $hash=42ed9f3aa6aef7580eabb0a94981f1b7b5760d16$
//

#include "libcef_dll/cpptoc/web_plugin_unstable_callback_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK web_plugin_unstable_callback_is_unstable(
    struct _cef_web_plugin_unstable_callback_t* self,
    const cef_string_t* path,
    int unstable) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: path; type: string_byref_const
  DCHECK(path);
  if (!path)
    return;

  // Execute
  CefWebPluginUnstableCallbackCppToC::Get(self)->IsUnstable(
      CefString(path), unstable ? true : false);
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefWebPluginUnstableCallbackCppToC::CefWebPluginUnstableCallbackCppToC() {
  GetStruct()->is_unstable = web_plugin_unstable_callback_is_unstable;
}

// DESTRUCTOR - Do not edit by hand.

CefWebPluginUnstableCallbackCppToC::~CefWebPluginUnstableCallbackCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefWebPluginUnstableCallback>
CefCppToCRefCounted<CefWebPluginUnstableCallbackCppToC,
                    CefWebPluginUnstableCallback,
                    cef_web_plugin_unstable_callback_t>::
    UnwrapDerived(CefWrapperType type, cef_web_plugin_unstable_callback_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCppToCRefCounted<CefWebPluginUnstableCallbackCppToC,
                        CefWebPluginUnstableCallback,
                        cef_web_plugin_unstable_callback_t>::kWrapperType =
        WT_WEB_PLUGIN_UNSTABLE_CALLBACK;
