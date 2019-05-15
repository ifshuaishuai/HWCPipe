@echo off

set rootDir="D:\Projects\3rd_party\HWCPipe"

set swigCommand="swig.exe"
set sourceDir=%rootDir%

set swigIncludes=-I%sourceDir% -I"SwigInterfaceFiles"
set namespace=HWCPipe
set swigDefines=
set outputDirectory=bindings\csharp\interfaces
set outputWrapperFilename=bindings\csharp\wrapper\hwcpipe_wrapper.cpp

del /F /Q %outputDirectory%\*

%swigCommand% -c++ -csharp -namespace %namespace% %swigIncludes% %swigDefines% -outdir %outputDirectory% -o %outputWrapperFilename% SwigInterfaceFiles\HWCPipe.i