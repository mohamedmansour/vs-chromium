// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#include <string>

class RE2WrapperImpl;

class RE2Wrapper {
 public:
  RE2Wrapper();
  ~RE2Wrapper();

  virtual void Compile(const char *pattern, int patternLen, std::string* error);
  virtual void Match();

 private:
  const char *pattern_;
  int patternLen_;
  RE2WrapperImpl* impl_;
};