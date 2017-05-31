/*
 * Copyright 2015 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "fiddle_main.h"

// create_grcontext for when neither Mesa nor EGL are available.
sk_sp<GrContext> create_grcontext() {
    return nullptr;
}