#pragma once
#include <windows.h>
#include <iostream>

namespace GameSystem {

#ifdef _WIN32
    #ifdef _DEBUG
        inline void AllocateConsole()
        {
            AllocConsole();
            FILE* fp;
            freopen_s(&fp, "CONOUT$", "w", stdout);
        }
        #define ALLOCATE_CONSOLE() AllocateConsole()
    #endif
#endif
}
