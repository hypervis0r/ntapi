#include "ntapi.h"

// Function Prototypes (NOTE: SYSCALLS ARE FOR WIN10 BUILD 2004)
EXTERN_C NTSTATUS NtUnmapViewOfSection(
    HANDLE              ProcessHandle,
    PVOID               BaseAddress
);
EXTERN_C NTSTATUS NtQueryInformationProcess(
    HANDLE              ProcessHandle,
    PROCESSINFOCLASS    ProcessInformationClass,
    PVOID               ProcessInformation,
    ULONG               ProcessInformationLength,
    PULONG              ReturnLength
);
EXTERN_C NTSTATUS NtSuspendProcess(
    HANDLE              ProcessHandle
);
EXTERN_C NTSTATUS NtReadVirtualMemory(
    HANDLE              ProcessHandle,
    PVOID               BaseAddress,
    PVOID               Buffer,
    ULONG               NumberOfBytesToRead,
    PULONG              NumberOfBytesReaded
);
EXTERN_C NTSTATUS NtWriteVirtualMemory(
    HANDLE              ProcessHandle,
    PVOID               BaseAddress,
    PVOID               Buffer,
    ULONG               NumberOfBytesToWrite,
    PULONG              NumberOfBytesWritten
);
EXTERN_C NTSTATUS NtAllocateVirtualMemory(
    HANDLE              ProcessHandle,
    PVOID* BaseAddress,
    ULONG_PTR           ZeroBits,
    PSIZE_T             RegionSize,
    ULONG               AllocationType,
    ULONG               Protect
);