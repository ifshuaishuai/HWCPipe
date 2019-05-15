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

public class Measurements : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal Measurements(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(Measurements obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  ~Measurements() {
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
          HWCPipeAndroidPINVOKE.delete_Measurements(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

  public SWIGTYPE_p_CpuMeasurements cpu {
    set {
      HWCPipeAndroidPINVOKE.Measurements_cpu_set(swigCPtr, SWIGTYPE_p_CpuMeasurements.getCPtr(value));
    } 
    get {
      global::System.IntPtr cPtr = HWCPipeAndroidPINVOKE.Measurements_cpu_get(swigCPtr);
      SWIGTYPE_p_CpuMeasurements ret = (cPtr == global::System.IntPtr.Zero) ? null : new SWIGTYPE_p_CpuMeasurements(cPtr, false);
      return ret;
    } 
  }

  public SWIGTYPE_p_GpuMeasurements gpu {
    set {
      HWCPipeAndroidPINVOKE.Measurements_gpu_set(swigCPtr, SWIGTYPE_p_GpuMeasurements.getCPtr(value));
    } 
    get {
      global::System.IntPtr cPtr = HWCPipeAndroidPINVOKE.Measurements_gpu_get(swigCPtr);
      SWIGTYPE_p_GpuMeasurements ret = (cPtr == global::System.IntPtr.Zero) ? null : new SWIGTYPE_p_GpuMeasurements(cPtr, false);
      return ret;
    } 
  }

  public Measurements() : this(HWCPipeAndroidPINVOKE.new_Measurements(), true) {
  }

}

}
