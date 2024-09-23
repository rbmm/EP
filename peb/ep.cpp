#include "stdafx.h"

_NT_BEGIN

void WINAPI ep(PEB* peb)
{
	ExitProcess(MessageBoxW(0, 
		peb->ProcessParameters->ImagePathName.Buffer,
		peb->ProcessParameters->CommandLine.Buffer, // this is not full correct, unicode string can be not 0 terminated
		MB_ICONINFORMATION));
}

_NT_END