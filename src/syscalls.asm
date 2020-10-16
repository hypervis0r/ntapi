;; These syscalls are all for Windows 10 build 2004, subject to change.
.code 
	NtUnmapViewOfSection proc
		mov r10, rcx
		mov eax, 2Ah
		syscall
		ret
	NtUnmapViewOfSection endp
	
	NtQueryInformationProcess proc
		mov r10, rcx
		mov eax, 19h
		syscall
		ret
	NtQueryInformationProcess endp

	NtSuspendProcess proc
		mov r10, rcx
		mov eax, 1BBh
		syscall
		ret
	NtSuspendProcess endp

	NtReadVirtualMemory proc
		mov r10, rcx
		mov eax, 3Fh
		syscall
		ret
	NtReadVirtualMemory endp

	NtWriteVirtualMemory proc
		mov r10, rcx
		mov eax, 3Ah
		syscall
		ret
	NtWriteVirtualMemory endp

	NtAllocateVirtualMemory proc
		mov r10, rcx
		mov eax, 18h
		syscall
		ret
	NtAllocateVirtualMemory endp
end