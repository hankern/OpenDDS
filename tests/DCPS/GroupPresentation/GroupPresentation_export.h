
// -*- C++ -*-
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl GroupPresentation
// ------------------------------
#ifndef GROUPPRESENTATION_EXPORT_H
#define GROUPPRESENTATION_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (GROUPPRESENTATION_HAS_DLL)
#  define GROUPPRESENTATION_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && GROUPPRESENTATION_HAS_DLL */

#if !defined (GROUPPRESENTATION_HAS_DLL)
#  define GROUPPRESENTATION_HAS_DLL 1
#endif /* ! GROUPPRESENTATION_HAS_DLL */

#if defined (GROUPPRESENTATION_HAS_DLL) && (GROUPPRESENTATION_HAS_DLL == 1)
#  if defined (GROUPPRESENTATION_BUILD_DLL)
#    define GroupPresentation_Export ACE_Proper_Export_Flag
#    define GROUPPRESENTATION_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define GROUPPRESENTATION_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* GROUPPRESENTATION_BUILD_DLL */
#    define GroupPresentation_Export ACE_Proper_Import_Flag
#    define GROUPPRESENTATION_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define GROUPPRESENTATION_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* GROUPPRESENTATION_BUILD_DLL */
#else /* GROUPPRESENTATION_HAS_DLL == 1 */
#  define GroupPresentation_Export
#  define GROUPPRESENTATION_SINGLETON_DECLARATION(T)
#  define GROUPPRESENTATION_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* GROUPPRESENTATION_HAS_DLL == 1 */

// Set GROUPPRESENTATION_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (GROUPPRESENTATION_NTRACE)
#  if (ACE_NTRACE == 1)
#    define GROUPPRESENTATION_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define GROUPPRESENTATION_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !GROUPPRESENTATION_NTRACE */

#if (GROUPPRESENTATION_NTRACE == 1)
#  define GROUPPRESENTATION_TRACE(X)
#else /* (GROUPPRESENTATION_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define GROUPPRESENTATION_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (GROUPPRESENTATION_NTRACE == 1) */

#endif /* GROUPPRESENTATION_EXPORT_H */

// End of auto generated file.