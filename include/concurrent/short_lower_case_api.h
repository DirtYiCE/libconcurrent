/* -*- Mode: c; tab-width: 4; c-basic-offset: 4; indent-tabs-mode: nil; -*- */
/*
  libconcurrent
  Copyright (C) 2010-2011 MIURA Shirow (sharow)
*/

#ifndef INCLUDED_SHORT_LOWER_CASE_API_H
#define INCLUDED_SHORT_LOWER_CASE_API_H

#include "concurrent.h"

#define concurrent_init Concurrent_Initialize
#define concurrent_fin Concurrent_Finalize
#define concurrent_get_status_str Concurrent_GetStatusString
#define concurrent_get_module_info Concurrent_GetModuleInfo
#define ctx_sizeof ConcurrentContext_SizeOf
#define ctx_construct ConcurrentContext_Construct
#define ctx_destruct ConcurrentContext_Destruct
#define ctx_resume ConcurrentContext_Resume
#define ctx_reset ConcurrentContext_Reset

#define gen_value ConcurrentContext_Generate
#define gen_int ConcurrentContext_GenerateInt
#define gen_uint ConcurrentContext_GenerateUInt
#define gen_long ConcurrentContext_GenerateLong
#define gen_ulong ConcurrentContext_GenerateULong

#ifdef CONCURRENT_HAS_LONGLONG
#define gen_longlong ConcurrentContext_GenerateLongLong
#define gen_ulonglong ConcurrentContext_GenerateULongLong
#endif

#define gen_voidptr_safe ConcurrentContext_GenerateVoidPtrSafe
#define gen_voidptr ConcurrentContext_GenerateVoidPtr
#define gen_str_safe ConcurrentContext_GenerateConstStringSafe
#define gen_str ConcurrentContext_GenerateConstString

#define ctx_get_int_safe ConcurrentContext_GetGeneratedIntSafe
#define ctx_get_int ConcurrentContext_GetGeneratedInt
#define ctx_get_uint_safe ConcurrentContext_GetGeneratedUIntSafe
#define ctx_get_uint ConcurrentContext_GetGeneratedUInt
#define ctx_get_long_safe ConcurrentContext_GetGeneratedLongSafe
#define ctx_get_long ConcurrentContext_GetGeneratedLong
#define ctx_get_ulong_safe ConcurrentContext_GetGeneratedULongSafe
#define ctx_get_ulong ConcurrentContext_GetGeneratedULong

#ifdef CONCURRENT_HAS_LONGLONG
#define ctx_get_longlong_safe ConcurrentContext_GetGeneratedLongLongSafe
#define ctx_get_longlong ConcurrentContext_GetGeneratedLongLong
#define ctx_get_ulonglong_safe ConcurrentContext_GetGeneratedULongLongSafe
#define ctx_get_ulonglong ConcurrentContext_GetGeneratedULongLong
#endif

#define ctx_get_voidptr_safe ConcurrentContext_GetGeneratedVoidPtrSafe
#define ctx_get_voidptr ConcurrentContext_GetGeneratedVoidPtr
#define ctx_get_str_safe ConcurrentContext_GetGeneratedConstStringSafe
#define ctx_get_str ConcurrentContext_GetGeneratedConstString

#define yield ConcurrentContext_Yield
#define yield_void ConcurrentContext_YieldVoid
#define yield_int ConcurrentContext_YieldInt
#define yield_uint ConcurrentContext_YieldUInt
#define yield_long ConcurrentContext_YieldLong
#define yield_ulong ConcurrentContext_YieldULong

#ifdef CONCURRENT_HAS_LONGLONG
#define yield_longlong ConcurrentContext_YieldLongLong
#define yield_ulonglong ConcurrentContext_YieldULongLong
#endif

#define yield_voidptr ConcurrentContext_YieldVoidPtr
#define yield_str ConcurrentContext_YieldConstString

#define ctx_get_generated_type ConcurrentContext_GetGeneratedType
#define ctx_get_userptr ConcurrentContext_GetUserPtr
#define ctx_is_done ConcurrentContext_IsDone
#define ctx_get_stack_used ConcurrentContext_GetStackSizeUsed


#endif
