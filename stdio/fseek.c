#include <windows.h>
typedef int DWord;
typedef unsigned int UDWord;
int fseek(HANDLE hFile, LARGE_INTEGER moveDist, DWord seekMode)
{
    return SetFilePointerEx(hFile, moveDist, 0, seekMode - 1);
}
