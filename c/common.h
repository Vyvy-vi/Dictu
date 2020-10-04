#ifndef dictu_common_h
#define dictu_common_h

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define NAN_TAGGING
#define DEBUG_PRINT_CODE
#define DEBUG_TRACE_EXECUTION
#define DEBUG_TRACE_GC
#define DEBUG_TRACE_MEM

#ifndef _MSC_VER
#define COMPUTED_GOTO
#endif

#undef DEBUG_PRINT_CODE
#undef DEBUG_TRACE_EXECUTION
#undef DEBUG_TRACE_GC
#undef DEBUG_TRACE_MEM

// #define DEBUG_STRESS_GC
// #define DEBUG_FINAL_MEM

#define UINT8_COUNT (UINT8_MAX + 1)

// MSVC does not support VLAs in C99 but also doesn't define __STDC_NO_VLA__. As such we must check _MSC_VER separately.
#if (defined(__STDC__) && !defined(__STDC_VERSION__)) || defined(__STDC_NO_VLA__) || defined(_MSC_VER)
#define NO_VLA
#endif

typedef struct _vm VM;

#endif
