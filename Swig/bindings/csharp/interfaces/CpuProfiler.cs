//------------------------------------------------------------------------------
// <auto-generated />
//
// This file was automatically generated by SWIG (http://www.swig.org).
// Version 4.0.0
//
// Do not make changes to this file unless you know what you are doing--modify
// the SWIG interface file instead.
//------------------------------------------------------------------------------

namespace HWCPipe {

public class CpuProfiler : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal CpuProfiler(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(CpuProfiler obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  ~CpuProfiler() {
    Dispose(false);
  }

  public void Dispose() {
    Dispose(true);
    global::System.GC.SuppressFinalize(this);
  }

  protected virtual void Dispose(bool disposing) {
    lock(this) {
      if (swigCPtr.Handle != global::System.IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          HWCPipeAndroidPINVOKE.delete_CpuProfiler(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

  public virtual SWIGTYPE_p_std__unordered_setT_hwcpipe__CpuCounter_hwcpipe__CpuCounterHash_t enabled_counters() {
    SWIGTYPE_p_std__unordered_setT_hwcpipe__CpuCounter_hwcpipe__CpuCounterHash_t ret = new SWIGTYPE_p_std__unordered_setT_hwcpipe__CpuCounter_hwcpipe__CpuCounterHash_t(HWCPipeAndroidPINVOKE.CpuProfiler_enabled_counters(swigCPtr), false);
    return ret;
  }

  public virtual SWIGTYPE_p_std__unordered_setT_hwcpipe__CpuCounter_hwcpipe__CpuCounterHash_t supported_counters() {
    SWIGTYPE_p_std__unordered_setT_hwcpipe__CpuCounter_hwcpipe__CpuCounterHash_t ret = new SWIGTYPE_p_std__unordered_setT_hwcpipe__CpuCounter_hwcpipe__CpuCounterHash_t(HWCPipeAndroidPINVOKE.CpuProfiler_supported_counters(swigCPtr), false);
    return ret;
  }

  public virtual void set_enabled_counters(SWIGTYPE_p_std__unordered_setT_hwcpipe__CpuCounter_hwcpipe__CpuCounterHash_t counters) {
    HWCPipeAndroidPINVOKE.CpuProfiler_set_enabled_counters(swigCPtr, SWIGTYPE_p_std__unordered_setT_hwcpipe__CpuCounter_hwcpipe__CpuCounterHash_t.getCPtr(counters));
    if (HWCPipeAndroidPINVOKE.SWIGPendingException.Pending) throw HWCPipeAndroidPINVOKE.SWIGPendingException.Retrieve();
  }

  public virtual void run() {
    HWCPipeAndroidPINVOKE.CpuProfiler_run(swigCPtr);
  }

  public virtual SWIGTYPE_p_std__unordered_mapT_hwcpipe__CpuCounter_Value_hwcpipe__CpuCounterHash_t sample() {
    SWIGTYPE_p_std__unordered_mapT_hwcpipe__CpuCounter_Value_hwcpipe__CpuCounterHash_t ret = new SWIGTYPE_p_std__unordered_mapT_hwcpipe__CpuCounter_Value_hwcpipe__CpuCounterHash_t(HWCPipeAndroidPINVOKE.CpuProfiler_sample(swigCPtr), false);
    return ret;
  }

  public virtual void stop() {
    HWCPipeAndroidPINVOKE.CpuProfiler_stop(swigCPtr);
  }

}

}