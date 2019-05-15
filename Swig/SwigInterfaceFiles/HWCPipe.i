%module HWCPipeAndroid

%{
#include "hwcpipe.h"
using namespace hwcpipe;
%}

%include "hwcpipe.h"
%include "cpu_profiler.h"
%include "gpu_profiler.h"
%include "value.h"
