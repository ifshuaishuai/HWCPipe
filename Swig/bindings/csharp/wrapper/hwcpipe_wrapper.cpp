/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.0
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */


#ifndef SWIGCSHARP
#define SWIGCSHARP
#endif



#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/* Support for throwing C# exceptions from C/C++. There are two types: 
 * Exceptions that take a message and ArgumentExceptions that take a message and a parameter name. */
typedef enum {
  SWIG_CSharpApplicationException,
  SWIG_CSharpArithmeticException,
  SWIG_CSharpDivideByZeroException,
  SWIG_CSharpIndexOutOfRangeException,
  SWIG_CSharpInvalidCastException,
  SWIG_CSharpInvalidOperationException,
  SWIG_CSharpIOException,
  SWIG_CSharpNullReferenceException,
  SWIG_CSharpOutOfMemoryException,
  SWIG_CSharpOverflowException,
  SWIG_CSharpSystemException
} SWIG_CSharpExceptionCodes;

typedef enum {
  SWIG_CSharpArgumentException,
  SWIG_CSharpArgumentNullException,
  SWIG_CSharpArgumentOutOfRangeException
} SWIG_CSharpExceptionArgumentCodes;

typedef void (SWIGSTDCALL* SWIG_CSharpExceptionCallback_t)(const char *);
typedef void (SWIGSTDCALL* SWIG_CSharpExceptionArgumentCallback_t)(const char *, const char *);

typedef struct {
  SWIG_CSharpExceptionCodes code;
  SWIG_CSharpExceptionCallback_t callback;
} SWIG_CSharpException_t;

typedef struct {
  SWIG_CSharpExceptionArgumentCodes code;
  SWIG_CSharpExceptionArgumentCallback_t callback;
} SWIG_CSharpExceptionArgument_t;

static SWIG_CSharpException_t SWIG_csharp_exceptions[] = {
  { SWIG_CSharpApplicationException, NULL },
  { SWIG_CSharpArithmeticException, NULL },
  { SWIG_CSharpDivideByZeroException, NULL },
  { SWIG_CSharpIndexOutOfRangeException, NULL },
  { SWIG_CSharpInvalidCastException, NULL },
  { SWIG_CSharpInvalidOperationException, NULL },
  { SWIG_CSharpIOException, NULL },
  { SWIG_CSharpNullReferenceException, NULL },
  { SWIG_CSharpOutOfMemoryException, NULL },
  { SWIG_CSharpOverflowException, NULL },
  { SWIG_CSharpSystemException, NULL }
};

static SWIG_CSharpExceptionArgument_t SWIG_csharp_exceptions_argument[] = {
  { SWIG_CSharpArgumentException, NULL },
  { SWIG_CSharpArgumentNullException, NULL },
  { SWIG_CSharpArgumentOutOfRangeException, NULL }
};

static void SWIGUNUSED SWIG_CSharpSetPendingException(SWIG_CSharpExceptionCodes code, const char *msg) {
  SWIG_CSharpExceptionCallback_t callback = SWIG_csharp_exceptions[SWIG_CSharpApplicationException].callback;
  if ((size_t)code < sizeof(SWIG_csharp_exceptions)/sizeof(SWIG_CSharpException_t)) {
    callback = SWIG_csharp_exceptions[code].callback;
  }
  callback(msg);
}

static void SWIGUNUSED SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpExceptionArgumentCodes code, const char *msg, const char *param_name) {
  SWIG_CSharpExceptionArgumentCallback_t callback = SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentException].callback;
  if ((size_t)code < sizeof(SWIG_csharp_exceptions_argument)/sizeof(SWIG_CSharpExceptionArgument_t)) {
    callback = SWIG_csharp_exceptions_argument[code].callback;
  }
  callback(msg, param_name);
}


#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterExceptionCallbacks_HWCPipeAndroid(
                                                SWIG_CSharpExceptionCallback_t applicationCallback,
                                                SWIG_CSharpExceptionCallback_t arithmeticCallback,
                                                SWIG_CSharpExceptionCallback_t divideByZeroCallback, 
                                                SWIG_CSharpExceptionCallback_t indexOutOfRangeCallback, 
                                                SWIG_CSharpExceptionCallback_t invalidCastCallback,
                                                SWIG_CSharpExceptionCallback_t invalidOperationCallback,
                                                SWIG_CSharpExceptionCallback_t ioCallback,
                                                SWIG_CSharpExceptionCallback_t nullReferenceCallback,
                                                SWIG_CSharpExceptionCallback_t outOfMemoryCallback, 
                                                SWIG_CSharpExceptionCallback_t overflowCallback, 
                                                SWIG_CSharpExceptionCallback_t systemCallback) {
  SWIG_csharp_exceptions[SWIG_CSharpApplicationException].callback = applicationCallback;
  SWIG_csharp_exceptions[SWIG_CSharpArithmeticException].callback = arithmeticCallback;
  SWIG_csharp_exceptions[SWIG_CSharpDivideByZeroException].callback = divideByZeroCallback;
  SWIG_csharp_exceptions[SWIG_CSharpIndexOutOfRangeException].callback = indexOutOfRangeCallback;
  SWIG_csharp_exceptions[SWIG_CSharpInvalidCastException].callback = invalidCastCallback;
  SWIG_csharp_exceptions[SWIG_CSharpInvalidOperationException].callback = invalidOperationCallback;
  SWIG_csharp_exceptions[SWIG_CSharpIOException].callback = ioCallback;
  SWIG_csharp_exceptions[SWIG_CSharpNullReferenceException].callback = nullReferenceCallback;
  SWIG_csharp_exceptions[SWIG_CSharpOutOfMemoryException].callback = outOfMemoryCallback;
  SWIG_csharp_exceptions[SWIG_CSharpOverflowException].callback = overflowCallback;
  SWIG_csharp_exceptions[SWIG_CSharpSystemException].callback = systemCallback;
}

#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterExceptionArgumentCallbacks_HWCPipeAndroid(
                                                SWIG_CSharpExceptionArgumentCallback_t argumentCallback,
                                                SWIG_CSharpExceptionArgumentCallback_t argumentNullCallback,
                                                SWIG_CSharpExceptionArgumentCallback_t argumentOutOfRangeCallback) {
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentException].callback = argumentCallback;
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentNullException].callback = argumentNullCallback;
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentOutOfRangeException].callback = argumentOutOfRangeCallback;
}


/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
static SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback = NULL;


#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterStringCallback_HWCPipeAndroid(SWIG_CSharpStringHelperCallback callback) {
  SWIG_csharp_string_callback = callback;
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, msg, ""); return nullreturn; } else


#include "hwcpipe.h"
using namespace hwcpipe;


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_Measurements_cpu_set(void * jarg1, void * jarg2) {
  hwcpipe::Measurements *arg1 = (hwcpipe::Measurements *) 0 ;
  CpuMeasurements *arg2 = (CpuMeasurements *) 0 ;
  
  arg1 = (hwcpipe::Measurements *)jarg1; 
  arg2 = (CpuMeasurements *)jarg2; 
  if (arg1) (arg1)->cpu = (CpuMeasurements const *)arg2;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_Measurements_cpu_get(void * jarg1) {
  void * jresult ;
  hwcpipe::Measurements *arg1 = (hwcpipe::Measurements *) 0 ;
  CpuMeasurements *result = 0 ;
  
  arg1 = (hwcpipe::Measurements *)jarg1; 
  result = (CpuMeasurements *) ((arg1)->cpu);
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_Measurements_gpu_set(void * jarg1, void * jarg2) {
  hwcpipe::Measurements *arg1 = (hwcpipe::Measurements *) 0 ;
  GpuMeasurements *arg2 = (GpuMeasurements *) 0 ;
  
  arg1 = (hwcpipe::Measurements *)jarg1; 
  arg2 = (GpuMeasurements *)jarg2; 
  if (arg1) (arg1)->gpu = (GpuMeasurements const *)arg2;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_Measurements_gpu_get(void * jarg1) {
  void * jresult ;
  hwcpipe::Measurements *arg1 = (hwcpipe::Measurements *) 0 ;
  GpuMeasurements *result = 0 ;
  
  arg1 = (hwcpipe::Measurements *)jarg1; 
  result = (GpuMeasurements *) ((arg1)->gpu);
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_new_Measurements() {
  void * jresult ;
  hwcpipe::Measurements *result = 0 ;
  
  result = (hwcpipe::Measurements *)new hwcpipe::Measurements();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_delete_Measurements(void * jarg1) {
  hwcpipe::Measurements *arg1 = (hwcpipe::Measurements *) 0 ;
  
  arg1 = (hwcpipe::Measurements *)jarg1; 
  delete arg1;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_new_HWCPipe__SWIG_0(char * jarg1) {
  void * jresult ;
  char *arg1 = (char *) 0 ;
  hwcpipe::HWCPipe *result = 0 ;
  
  arg1 = (char *)jarg1; 
  result = (hwcpipe::HWCPipe *)new hwcpipe::HWCPipe((char const *)arg1);
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_new_HWCPipe__SWIG_1(void * jarg1, void * jarg2) {
  void * jresult ;
  CpuCounterSet arg1 ;
  GpuCounterSet arg2 ;
  CpuCounterSet *argp1 ;
  GpuCounterSet *argp2 ;
  hwcpipe::HWCPipe *result = 0 ;
  
  argp1 = (CpuCounterSet *)jarg1; 
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null CpuCounterSet", 0);
    return 0;
  }
  arg1 = *argp1; 
  argp2 = (GpuCounterSet *)jarg2; 
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null GpuCounterSet", 0);
    return 0;
  }
  arg2 = *argp2; 
  result = (hwcpipe::HWCPipe *)new hwcpipe::HWCPipe(arg1,arg2);
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_new_HWCPipe__SWIG_2() {
  void * jresult ;
  hwcpipe::HWCPipe *result = 0 ;
  
  result = (hwcpipe::HWCPipe *)new hwcpipe::HWCPipe();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_HWCPipe_set_enabled_cpu_counters(void * jarg1, void * jarg2) {
  hwcpipe::HWCPipe *arg1 = (hwcpipe::HWCPipe *) 0 ;
  CpuCounterSet arg2 ;
  CpuCounterSet *argp2 ;
  
  arg1 = (hwcpipe::HWCPipe *)jarg1; 
  argp2 = (CpuCounterSet *)jarg2; 
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null CpuCounterSet", 0);
    return ;
  }
  arg2 = *argp2; 
  (arg1)->set_enabled_cpu_counters(arg2);
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_HWCPipe_set_enabled_gpu_counters(void * jarg1, void * jarg2) {
  hwcpipe::HWCPipe *arg1 = (hwcpipe::HWCPipe *) 0 ;
  GpuCounterSet arg2 ;
  GpuCounterSet *argp2 ;
  
  arg1 = (hwcpipe::HWCPipe *)jarg1; 
  argp2 = (GpuCounterSet *)jarg2; 
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null GpuCounterSet", 0);
    return ;
  }
  arg2 = *argp2; 
  (arg1)->set_enabled_gpu_counters(arg2);
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_HWCPipe_run(void * jarg1) {
  hwcpipe::HWCPipe *arg1 = (hwcpipe::HWCPipe *) 0 ;
  
  arg1 = (hwcpipe::HWCPipe *)jarg1; 
  (arg1)->run();
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_HWCPipe_sample(void * jarg1) {
  void * jresult ;
  hwcpipe::HWCPipe *arg1 = (hwcpipe::HWCPipe *) 0 ;
  hwcpipe::Measurements result;
  
  arg1 = (hwcpipe::HWCPipe *)jarg1; 
  result = (arg1)->sample();
  jresult = new hwcpipe::Measurements((const hwcpipe::Measurements &)result); 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_HWCPipe_stop(void * jarg1) {
  hwcpipe::HWCPipe *arg1 = (hwcpipe::HWCPipe *) 0 ;
  
  arg1 = (hwcpipe::HWCPipe *)jarg1; 
  (arg1)->stop();
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_HWCPipe_cpu_profiler(void * jarg1) {
  void * jresult ;
  hwcpipe::HWCPipe *arg1 = (hwcpipe::HWCPipe *) 0 ;
  CpuProfiler *result = 0 ;
  
  arg1 = (hwcpipe::HWCPipe *)jarg1; 
  result = (CpuProfiler *)(arg1)->cpu_profiler();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_HWCPipe_gpu_profiler(void * jarg1) {
  void * jresult ;
  hwcpipe::HWCPipe *arg1 = (hwcpipe::HWCPipe *) 0 ;
  GpuProfiler *result = 0 ;
  
  arg1 = (hwcpipe::HWCPipe *)jarg1; 
  result = (GpuProfiler *)(arg1)->gpu_profiler();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_delete_HWCPipe(void * jarg1) {
  hwcpipe::HWCPipe *arg1 = (hwcpipe::HWCPipe *) 0 ;
  
  arg1 = (hwcpipe::HWCPipe *)jarg1; 
  delete arg1;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_cpu_counter_names_get() {
  void * jresult ;
  std::unordered_map< std::string,hwcpipe::CpuCounter > result;
  
  result = (std::unordered_map< std::string,hwcpipe::CpuCounter >)hwcpipe::cpu_counter_names;
  jresult = new std::unordered_map< std::string,hwcpipe::CpuCounter >((const std::unordered_map< std::string,hwcpipe::CpuCounter > &)result); 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_new_CpuCounterHash() {
  void * jresult ;
  hwcpipe::CpuCounterHash *result = 0 ;
  
  result = (hwcpipe::CpuCounterHash *)new hwcpipe::CpuCounterHash();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_delete_CpuCounterHash(void * jarg1) {
  hwcpipe::CpuCounterHash *arg1 = (hwcpipe::CpuCounterHash *) 0 ;
  
  arg1 = (hwcpipe::CpuCounterHash *)jarg1; 
  delete arg1;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_CpuCounterInfo_desc_set(void * jarg1, void * jarg2) {
  hwcpipe::CpuCounterInfo *arg1 = (hwcpipe::CpuCounterInfo *) 0 ;
  std::string arg2 ;
  std::string *argp2 ;
  
  arg1 = (hwcpipe::CpuCounterInfo *)jarg1; 
  argp2 = (std::string *)jarg2; 
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null std::string", 0);
    return ;
  }
  arg2 = *argp2; 
  if (arg1) (arg1)->desc = arg2;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_CpuCounterInfo_desc_get(void * jarg1) {
  void * jresult ;
  hwcpipe::CpuCounterInfo *arg1 = (hwcpipe::CpuCounterInfo *) 0 ;
  std::string result;
  
  arg1 = (hwcpipe::CpuCounterInfo *)jarg1; 
  result =  ((arg1)->desc);
  jresult = new std::string((const std::string &)result); 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_CpuCounterInfo_unit_set(void * jarg1, void * jarg2) {
  hwcpipe::CpuCounterInfo *arg1 = (hwcpipe::CpuCounterInfo *) 0 ;
  std::string arg2 ;
  std::string *argp2 ;
  
  arg1 = (hwcpipe::CpuCounterInfo *)jarg1; 
  argp2 = (std::string *)jarg2; 
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null std::string", 0);
    return ;
  }
  arg2 = *argp2; 
  if (arg1) (arg1)->unit = arg2;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_CpuCounterInfo_unit_get(void * jarg1) {
  void * jresult ;
  hwcpipe::CpuCounterInfo *arg1 = (hwcpipe::CpuCounterInfo *) 0 ;
  std::string result;
  
  arg1 = (hwcpipe::CpuCounterInfo *)jarg1; 
  result =  ((arg1)->unit);
  jresult = new std::string((const std::string &)result); 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_new_CpuCounterInfo() {
  void * jresult ;
  hwcpipe::CpuCounterInfo *result = 0 ;
  
  result = (hwcpipe::CpuCounterInfo *)new hwcpipe::CpuCounterInfo();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_delete_CpuCounterInfo(void * jarg1) {
  hwcpipe::CpuCounterInfo *arg1 = (hwcpipe::CpuCounterInfo *) 0 ;
  
  arg1 = (hwcpipe::CpuCounterInfo *)jarg1; 
  delete arg1;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_cpu_counter_info_get() {
  void * jresult ;
  std::unordered_map< hwcpipe::CpuCounter,hwcpipe::CpuCounterInfo,hwcpipe::CpuCounterHash > *result = 0 ;
  
  result = (std::unordered_map< hwcpipe::CpuCounter,hwcpipe::CpuCounterInfo,hwcpipe::CpuCounterHash > *)&hwcpipe::cpu_counter_info;
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_delete_CpuProfiler(void * jarg1) {
  hwcpipe::CpuProfiler *arg1 = (hwcpipe::CpuProfiler *) 0 ;
  
  arg1 = (hwcpipe::CpuProfiler *)jarg1; 
  delete arg1;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_CpuProfiler_enabled_counters(void * jarg1) {
  void * jresult ;
  hwcpipe::CpuProfiler *arg1 = (hwcpipe::CpuProfiler *) 0 ;
  hwcpipe::CpuCounterSet *result = 0 ;
  
  arg1 = (hwcpipe::CpuProfiler *)jarg1; 
  result = (hwcpipe::CpuCounterSet *) &((hwcpipe::CpuProfiler const *)arg1)->enabled_counters();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_CpuProfiler_supported_counters(void * jarg1) {
  void * jresult ;
  hwcpipe::CpuProfiler *arg1 = (hwcpipe::CpuProfiler *) 0 ;
  hwcpipe::CpuCounterSet *result = 0 ;
  
  arg1 = (hwcpipe::CpuProfiler *)jarg1; 
  result = (hwcpipe::CpuCounterSet *) &((hwcpipe::CpuProfiler const *)arg1)->supported_counters();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_CpuProfiler_set_enabled_counters(void * jarg1, void * jarg2) {
  hwcpipe::CpuProfiler *arg1 = (hwcpipe::CpuProfiler *) 0 ;
  SwigValueWrapper< std::unordered_set< enum hwcpipe::CpuCounter,hwcpipe::CpuCounterHash > > arg2 ;
  hwcpipe::CpuCounterSet *argp2 ;
  
  arg1 = (hwcpipe::CpuProfiler *)jarg1; 
  argp2 = (hwcpipe::CpuCounterSet *)jarg2; 
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null hwcpipe::CpuCounterSet", 0);
    return ;
  }
  arg2 = *argp2; 
  (arg1)->set_enabled_counters(arg2);
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_CpuProfiler_run(void * jarg1) {
  hwcpipe::CpuProfiler *arg1 = (hwcpipe::CpuProfiler *) 0 ;
  
  arg1 = (hwcpipe::CpuProfiler *)jarg1; 
  (arg1)->run();
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_CpuProfiler_sample(void * jarg1) {
  void * jresult ;
  hwcpipe::CpuProfiler *arg1 = (hwcpipe::CpuProfiler *) 0 ;
  hwcpipe::CpuMeasurements *result = 0 ;
  
  arg1 = (hwcpipe::CpuProfiler *)jarg1; 
  result = (hwcpipe::CpuMeasurements *) &(arg1)->sample();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_CpuProfiler_stop(void * jarg1) {
  hwcpipe::CpuProfiler *arg1 = (hwcpipe::CpuProfiler *) 0 ;
  
  arg1 = (hwcpipe::CpuProfiler *)jarg1; 
  (arg1)->stop();
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_gpu_counter_names_get() {
  void * jresult ;
  std::unordered_map< std::string,hwcpipe::GpuCounter > result;
  
  result = (std::unordered_map< std::string,hwcpipe::GpuCounter >)hwcpipe::gpu_counter_names;
  jresult = new std::unordered_map< std::string,hwcpipe::GpuCounter >((const std::unordered_map< std::string,hwcpipe::GpuCounter > &)result); 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_new_GpuCounterHash() {
  void * jresult ;
  hwcpipe::GpuCounterHash *result = 0 ;
  
  result = (hwcpipe::GpuCounterHash *)new hwcpipe::GpuCounterHash();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_delete_GpuCounterHash(void * jarg1) {
  hwcpipe::GpuCounterHash *arg1 = (hwcpipe::GpuCounterHash *) 0 ;
  
  arg1 = (hwcpipe::GpuCounterHash *)jarg1; 
  delete arg1;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_GpuCounterInfo_desc_set(void * jarg1, void * jarg2) {
  hwcpipe::GpuCounterInfo *arg1 = (hwcpipe::GpuCounterInfo *) 0 ;
  std::string arg2 ;
  std::string *argp2 ;
  
  arg1 = (hwcpipe::GpuCounterInfo *)jarg1; 
  argp2 = (std::string *)jarg2; 
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null std::string", 0);
    return ;
  }
  arg2 = *argp2; 
  if (arg1) (arg1)->desc = arg2;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_GpuCounterInfo_desc_get(void * jarg1) {
  void * jresult ;
  hwcpipe::GpuCounterInfo *arg1 = (hwcpipe::GpuCounterInfo *) 0 ;
  std::string result;
  
  arg1 = (hwcpipe::GpuCounterInfo *)jarg1; 
  result =  ((arg1)->desc);
  jresult = new std::string((const std::string &)result); 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_GpuCounterInfo_unit_set(void * jarg1, void * jarg2) {
  hwcpipe::GpuCounterInfo *arg1 = (hwcpipe::GpuCounterInfo *) 0 ;
  std::string arg2 ;
  std::string *argp2 ;
  
  arg1 = (hwcpipe::GpuCounterInfo *)jarg1; 
  argp2 = (std::string *)jarg2; 
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null std::string", 0);
    return ;
  }
  arg2 = *argp2; 
  if (arg1) (arg1)->unit = arg2;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_GpuCounterInfo_unit_get(void * jarg1) {
  void * jresult ;
  hwcpipe::GpuCounterInfo *arg1 = (hwcpipe::GpuCounterInfo *) 0 ;
  std::string result;
  
  arg1 = (hwcpipe::GpuCounterInfo *)jarg1; 
  result =  ((arg1)->unit);
  jresult = new std::string((const std::string &)result); 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_new_GpuCounterInfo() {
  void * jresult ;
  hwcpipe::GpuCounterInfo *result = 0 ;
  
  result = (hwcpipe::GpuCounterInfo *)new hwcpipe::GpuCounterInfo();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_delete_GpuCounterInfo(void * jarg1) {
  hwcpipe::GpuCounterInfo *arg1 = (hwcpipe::GpuCounterInfo *) 0 ;
  
  arg1 = (hwcpipe::GpuCounterInfo *)jarg1; 
  delete arg1;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_gpu_counter_info_get() {
  void * jresult ;
  std::unordered_map< hwcpipe::GpuCounter,hwcpipe::GpuCounterInfo,hwcpipe::GpuCounterHash > *result = 0 ;
  
  result = (std::unordered_map< hwcpipe::GpuCounter,hwcpipe::GpuCounterInfo,hwcpipe::GpuCounterHash > *)&hwcpipe::gpu_counter_info;
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_delete_GpuProfiler(void * jarg1) {
  hwcpipe::GpuProfiler *arg1 = (hwcpipe::GpuProfiler *) 0 ;
  
  arg1 = (hwcpipe::GpuProfiler *)jarg1; 
  delete arg1;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_GpuProfiler_enabled_counters(void * jarg1) {
  void * jresult ;
  hwcpipe::GpuProfiler *arg1 = (hwcpipe::GpuProfiler *) 0 ;
  hwcpipe::GpuCounterSet *result = 0 ;
  
  arg1 = (hwcpipe::GpuProfiler *)jarg1; 
  result = (hwcpipe::GpuCounterSet *) &((hwcpipe::GpuProfiler const *)arg1)->enabled_counters();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_GpuProfiler_supported_counters(void * jarg1) {
  void * jresult ;
  hwcpipe::GpuProfiler *arg1 = (hwcpipe::GpuProfiler *) 0 ;
  hwcpipe::GpuCounterSet *result = 0 ;
  
  arg1 = (hwcpipe::GpuProfiler *)jarg1; 
  result = (hwcpipe::GpuCounterSet *) &((hwcpipe::GpuProfiler const *)arg1)->supported_counters();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_GpuProfiler_set_enabled_counters(void * jarg1, void * jarg2) {
  hwcpipe::GpuProfiler *arg1 = (hwcpipe::GpuProfiler *) 0 ;
  SwigValueWrapper< std::unordered_set< enum hwcpipe::GpuCounter,hwcpipe::GpuCounterHash > > arg2 ;
  hwcpipe::GpuCounterSet *argp2 ;
  
  arg1 = (hwcpipe::GpuProfiler *)jarg1; 
  argp2 = (hwcpipe::GpuCounterSet *)jarg2; 
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null hwcpipe::GpuCounterSet", 0);
    return ;
  }
  arg2 = *argp2; 
  (arg1)->set_enabled_counters(arg2);
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_GpuProfiler_run(void * jarg1) {
  hwcpipe::GpuProfiler *arg1 = (hwcpipe::GpuProfiler *) 0 ;
  
  arg1 = (hwcpipe::GpuProfiler *)jarg1; 
  (arg1)->run();
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_GpuProfiler_sample(void * jarg1) {
  void * jresult ;
  hwcpipe::GpuProfiler *arg1 = (hwcpipe::GpuProfiler *) 0 ;
  hwcpipe::GpuMeasurements *result = 0 ;
  
  arg1 = (hwcpipe::GpuProfiler *)jarg1; 
  result = (hwcpipe::GpuMeasurements *) &(arg1)->sample();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_GpuProfiler_stop(void * jarg1) {
  hwcpipe::GpuProfiler *arg1 = (hwcpipe::GpuProfiler *) 0 ;
  
  arg1 = (hwcpipe::GpuProfiler *)jarg1; 
  (arg1)->stop();
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_new_Value__SWIG_0() {
  void * jresult ;
  hwcpipe::Value *result = 0 ;
  
  result = (hwcpipe::Value *)new hwcpipe::Value();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_new_Value__SWIG_1(long long jarg1) {
  void * jresult ;
  long long arg1 ;
  hwcpipe::Value *result = 0 ;
  
  arg1 = (long long)jarg1; 
  result = (hwcpipe::Value *)new hwcpipe::Value(arg1);
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_HWCPipe_new_Value__SWIG_2(double jarg1) {
  void * jresult ;
  double arg1 ;
  hwcpipe::Value *result = 0 ;
  
  arg1 = (double)jarg1; 
  result = (hwcpipe::Value *)new hwcpipe::Value(arg1);
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_Value_set__SWIG_0(void * jarg1, long long jarg2) {
  hwcpipe::Value *arg1 = (hwcpipe::Value *) 0 ;
  long long arg2 ;
  
  arg1 = (hwcpipe::Value *)jarg1; 
  arg2 = (long long)jarg2; 
  (arg1)->set(arg2);
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_Value_set__SWIG_1(void * jarg1, double jarg2) {
  hwcpipe::Value *arg1 = (hwcpipe::Value *) 0 ;
  double arg2 ;
  
  arg1 = (hwcpipe::Value *)jarg1; 
  arg2 = (double)jarg2; 
  (arg1)->set(arg2);
}


SWIGEXPORT void SWIGSTDCALL CSharp_HWCPipe_delete_Value(void * jarg1) {
  hwcpipe::Value *arg1 = (hwcpipe::Value *) 0 ;
  
  arg1 = (hwcpipe::Value *)jarg1; 
  delete arg1;
}


#ifdef __cplusplus
}
#endif
