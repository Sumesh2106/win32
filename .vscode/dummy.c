#include<windows.h>
int main()
{
    MessageBoxW(
        NULL,
        L"My first message box",
        L"Hello world",
        MB_YESNOCANCEL
    );
    //printf("hello world !!");
    return EXIT_SUCCESS;
    
}