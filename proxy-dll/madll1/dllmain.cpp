#include "pch.h"
#include <windows.h>
#include <winsock2.h>
#include <iostream>
#pragma comment (lib, "user32.lib")


BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
        MessageBox(NULL, L"Hello from DLL!", L"DLL Message", MB_OK | MB_ICONINFORMATION);
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
    
