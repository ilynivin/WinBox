#include <windows.h>

int main(void){

    MessageBoxW(
        NULL,
        L"Hai",
        L"Hello World",
        MB_YESNO | MB_ICONEXCLAMATION
    );
    return EXIT_SUCCESS;

}