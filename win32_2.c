#include<windows.h>
#include<stdio.h>
int main(void)
{
//     BOOL CreateProcessA(
//   [in, optional]      LPCSTR                lpApplicationName,
//   [in, out, optional] LPSTR                 lpCommandLine,
//   [in, optional]      LPSECURITY_ATTRIBUTES lpProcessAttributes,
//   [in, optional]      LPSECURITY_ATTRIBUTES lpThreadAttributes,
//   [in]                BOOL                  bInheritHandles,
//   [in]                DWORD                 dwCreationFlags,
//   [in, optional]      LPVOID                lpEnvironment,
//   [in, optional]      LPCSTR                lpCurrentDirectory,
//   [in]                LPSTARTUPINFOA        lpStartupInfo,
//   [out]               LPPROCESS_INFORMATION lpProcessInformation
// );   
    
 STARTUPINFO si = {0};
 PROCESS_INFORMATION pi = {0};   
    if (!CreateProcessW(
        L"C:\\windows\\System32\\notepad.exe",
        NULL,
        NULL,
        NULL,
        FALSE,
        BELOW_NORMAL_PRIORITY_CLASS,
        NULL,
        NULL,
        &si,
        &pi
         


 
    )){
        printf("(-) failed to create process, error: %ld",GetLastError);
        return EXIT_FAILURE;
    }
    printf("(+) process started! pid: %ld",pi.dwProcessId);
    return EXIT_FAILURE;





}