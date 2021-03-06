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
// $hash=387ecb28b55d3ece3eb4fcf0e119918fd5e36fd7$
//

#include "libcef_dll/ctocpp/web_plugin_info_visitor_ctocpp.h"
#include "libcef_dll/cpptoc/web_plugin_info_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
bool CefWebPluginInfoVisitorCToCpp::Visit(CefRefPtr<CefWebPluginInfo> info,
                                          int count,
                                          int total) {
  shutdown_checker::AssertNotShutdown();

  cef_web_plugin_info_visitor_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, visit))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: info; type: refptr_diff
  DCHECK(info.get());
  if (!info.get())
    return false;

  // Execute
  int _retval =
      _struct->visit(_struct, CefWebPluginInfoCppToC::Wrap(info), count, total);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefWebPluginInfoVisitorCToCpp::CefWebPluginInfoVisitorCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefWebPluginInfoVisitorCToCpp::~CefWebPluginInfoVisitorCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_web_plugin_info_visitor_t* CefCToCppRefCounted<
    CefWebPluginInfoVisitorCToCpp,
    CefWebPluginInfoVisitor,
    cef_web_plugin_info_visitor_t>::UnwrapDerived(CefWrapperType type,
                                                  CefWebPluginInfoVisitor* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCToCppRefCounted<CefWebPluginInfoVisitorCToCpp,
                        CefWebPluginInfoVisitor,
                        cef_web_plugin_info_visitor_t>::kWrapperType =
        WT_WEB_PLUGIN_INFO_VISITOR;
