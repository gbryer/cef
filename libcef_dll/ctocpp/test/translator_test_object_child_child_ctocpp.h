// Copyright (c) 2015 The Chromium Embedded Framework Authors. All rights
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

#ifndef CEF_LIBCEF_DLL_CTOCPP_TEST_TRANSLATOR_TEST_OBJECT_CHILD_CHILD_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_TEST_TRANSLATOR_TEST_OBJECT_CHILD_CHILD_CTOCPP_H_
#pragma once

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else  // USING_CEF_SHARED

#include "include/test/cef_translator_test.h"
#include "include/capi/test/cef_translator_test_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefTranslatorTestObjectChildChildCToCpp
    : public CefCToCpp<CefTranslatorTestObjectChildChildCToCpp,
        CefTranslatorTestObjectChildChild,
        cef_translator_test_object_child_child_t> {
 public:
  CefTranslatorTestObjectChildChildCToCpp();

  // CefTranslatorTestObjectChildChild methods.
  int GetOtherOtherValue() OVERRIDE;
  void SetOtherOtherValue(int value) OVERRIDE;

  // CefTranslatorTestObjectChild methods.
  int GetOtherValue() OVERRIDE;
  void SetOtherValue(int value) OVERRIDE;

  // CefTranslatorTestObject methods.
  int GetValue() OVERRIDE;
  void SetValue(int value) OVERRIDE;
};

#endif  // USING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_TEST_TRANSLATOR_TEST_OBJECT_CHILD_CHILD_CTOCPP_H_