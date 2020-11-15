#include <windows.h>
typedef void* Handle;
typedef int DWord;
typedef unsigned int UDWord;
int fseek(Handle hFile, LARGE_INTEGER moveDist, DWord seekMode)
{
    return SetFilePointerEx(hFile, moveDist, 0, seekMode - 1);
}
