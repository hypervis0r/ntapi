#include "ntapi.h"

int main(void) {
	PROCESS_BASIC_INFORMATION* pbi = new PROCESS_BASIC_INFORMATION();
	DWORD returnLength = 0;
	ntResult = NtQueryInformationProcess(GetCurrentProcess(), ProcessBasicInformation, pbi, sizeof(PROCESS_BASIC_INFORMATION), &returnLength);
	return 0;
}