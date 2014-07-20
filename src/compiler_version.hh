// compiler_version.h for Fluxbox Window manager
// Copyright (c) 2004 Henrik Kinnunen (fluxgen at users.sourceforge.net)
//                and Simon Bowden (rathnor at users.sourceforge.net)
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.

#if defined(__clang__)
# define __fluxbox_compiler "Clang/LLVM"
# define __fluxbox_compiler_version __VERSION__
#elif defined(__ICC) || defined(__INTEL_COMPILER)
# define __fluxbox_compiler "ICC/ICPC"
# define __fluxbox_compiler_version __VERSION__
#elif defined(__GNUC__) || defined(__GNUG__) && !(defined(__clang__) || defined(__INTEL_COMPILER))
# define __fluxbox_compiler "GCC"
# define __fluxbox_compiler_version __VERSION__
#elif defined(__HP_aCC)
# define __fluxbox_compiler "Hewlett-Packard C"
# define __fluxbox_compiler_version __HP_aCC
#elif defined(__IBMCPP__)
# define __fluxbox_compiler "IBM XL C++"
# define __fluxbox_compiler_version __IBMCPP__
#elif defined(_MSC_VER)
# define __fluxbox_compiler "Microsoft Visual Studio"
# define __fluxbox_compiler_version _MSC_FULL_VER
#elif defined(__PGI)
# define __fluxbox_compiler "Portland Group PGCC/PGCPP"
# define __fluxbox_compiler_version __PGIC__
#elif defined(__SUNPRO_CC)
# define __fluxbox_compiler "Oracle Solaris Studio"
# define __fluxbox_compiler_version __SUNPRO_CC
#elif defined(__MWERKS__)
# define __fluxbox_compiler "Metrowerks CodeWarrior"
# define __fluxbox_compiler_version __MWERKS__
#elif defined(__COMO__) && defined(__COMO_VERSION__)
# define __fluxbox_compiler "Comeau C/C++"
# define __fluxbox_compiler_version __COMO_VERSION__
#elif defined(_CRAYC) && defined(_REVISION)
# define __fluxbox_compiler "GRAYC"
# define __fluxbox_compiler_version _REVISION
#elif defined(__DECCXX) && defined(__DECCXX)
# define __fluxbox_compiler "DECCXX"
# define __fluxbox_compiler_version __DECCXX
#elif defined(__DCC__)
# define __fluxbox_compiler "Derivative Code Compiler"
# define __fluxbox_compiler_version __VERSION_NUMBER__
#endif

#ifndef __fluxbox_compiler_version
# define __fluxbox_compiler_version "Unknown"
#endif
#ifndef __fluxbox_compiler
# define __fluxbox_compiler "Unknown"
#endif
