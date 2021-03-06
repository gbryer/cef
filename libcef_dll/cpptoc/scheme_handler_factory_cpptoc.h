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
// $hash=b119c6e375aee04bc83623c73f61b7eb39af16f5$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_SCHEME_HANDLER_FACTORY_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_SCHEME_HANDLER_FACTORY_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_scheme_capi.h"
#include "include/cef_scheme.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefSchemeHandlerFactoryCppToC
    : public CefCppToCRefCounted<CefSchemeHandlerFactoryCppToC,
                                 CefSchemeHandlerFactory,
                                 cef_scheme_handler_factory_t> {
 public:
  CefSchemeHandlerFactoryCppToC();
  virtual ~CefSchemeHandlerFactoryCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_SCHEME_HANDLER_FACTORY_CPPTOC_H_
