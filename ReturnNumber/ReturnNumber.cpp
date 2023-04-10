// ReturnNumber.cpp : Defines the exported functions for the DLL.
//

// --- define WINDOWS
#undef WINDOWS
#ifdef _WIN32
#define WINDOWS
#endif
#ifdef __WIN32__
#define WINDOWS
#endif

////  ---- following section modified for release 5.1.008.  ////               //(5.1.008)
////
// --- define EXH (MS Windows exception handling)
#undef MINGW       // indicates if MinGW compiler used
#undef EXH         // indicates if exception handling included
#ifdef WINDOWS
#ifndef MINGW
#define EXH
#endif
#endif

#include "pch.h"
#include "framework.h"
#include "ReturnNumber.h"


extern "C" {
    // This is an example of an exported variable
    int DLLEXPORT nReturnNumber = 0;


    // This is an example of an exported function.
    int DLLEXPORT fnReturnZero(void)
    {
        return 0;
    }

    int DLLEXPORT fnReturnNumber(int pNum)
    {
        return pNum;
    }

    int DLLEXPORT fnDoubleNumber(int pNum)
    {
        return pNum * 2;
    }
}
