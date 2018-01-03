// Copyright (c) 2018 The Chromium Embedded Framework Authors. All rights
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
// $hash=4ac16685c58362697a07a6f3b46e31e517b6bc00$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_URLREQUEST_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_URLREQUEST_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_urlrequest_capi.h"
#include "include/cef_urlrequest.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefURLRequestCppToC : public CefCppToCRefCounted<CefURLRequestCppToC,
                                                       CefURLRequest,
                                                       cef_urlrequest_t> {
 public:
  CefURLRequestCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_URLREQUEST_CPPTOC_H_
