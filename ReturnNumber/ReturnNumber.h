// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the RETURNNUMBER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// RETURNNUMBER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.

// --- define WINDOWS

#undef WINDOWS
#ifdef _WIN32
#define WINDOWS
#endif
#ifdef __WIN32__
#define WINDOWS
#endif

// --- define DLLEXPORT

#ifdef WINDOWS
#define DLLEXPORT __declspec(dllexport) __stdcall
#else
#define DLLEXPORT
#endif

// --- use "C" linkage for C++ programs

extern "C" {
    int DLLEXPORT fnReturnZero(void);
    int DLLEXPORT fnReturnNumber(int pNum);
    int DLLEXPORT fnDoubleNumber(int pNum);
}
