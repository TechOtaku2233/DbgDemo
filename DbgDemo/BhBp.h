#pragma once
#include <windows.h>
class CBhBp
{
public:
	CBhBp();
	~CBhBp();
	BOOL SetBhExecBreakPoint(DWORD dwThreadId, DWORD dwAddr);
	BOOL SetBhRwBreakPoint(DWORD dwThreadId, DWORD dwAddr, DWORD dwType, DWORD dwLen);
	VOID ReSetAllBhRwBreakPoint(DWORD dwThreadId);
	BOOL CheckDr6ForBhRwBreakPoint(DWORD dwThreadId);
};

