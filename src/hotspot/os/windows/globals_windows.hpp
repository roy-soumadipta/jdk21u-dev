/*
 * Copyright (c) 2005, 2020, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 *
 */

#ifndef OS_WINDOWS_GLOBALS_WINDOWS_HPP
#define OS_WINDOWS_GLOBALS_WINDOWS_HPP

//
// Declare Windows specific flags. They are not available on other platforms.
//
#define RUNTIME_OS_FLAGS(develop,                                         \
                         develop_pd,                                      \
                         product,                                         \
                         product_pd,                                      \
                         notproduct,                                      \
                         range,                                           \
                         constraint)                                      \
                                                                          \
product(bool, UseAllWindowsProcessorGroups, false,                        \
        "Use all processor groups on supported Windows versions")         \
                                                                          \
product(bool, EnableAllLargePageSizesForWindows, false,                   \
        "Enable support for multiple large page sizes on "                \
        "Windows Server")                                                 \
                                                                          \
product(bool, UseOSErrorReporting, false,                                 \
        "Let VM fatal error propagate to the OS (ie. WER on Windows)")

// end of RUNTIME_OS_FLAGS

//
// Defines Windows-specific default values. The flags are available on all
// platforms, but they may have different default values on other platforms.
//
define_pd_global(size_t, PreTouchParallelChunkSize, 1 * G);
define_pd_global(bool, UseLargePages, false);
define_pd_global(bool, UseLargePagesIndividualAllocation, true);
define_pd_global(bool, UseThreadPriorities, true) ;

#endif // OS_WINDOWS_GLOBALS_WINDOWS_HPP
