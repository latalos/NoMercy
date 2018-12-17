#include "NM_Index.h"
#include "NM_Main.h"
#include "DynamicWinapi.h"

void CDynamicWinapi::BindAPIs_3()
{
	g_winapiApiTable->OpenThreadToken = (lpOpenThreadToken)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hAdvapi32, xorstr("OpenThreadToken").crypt_get());
	g_winapiApiTable->GetModuleFileNameW = (lpGetModuleFileNameW)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("GetModuleFileNameW").crypt_get());
	g_winapiApiTable->GetDeviceDriverFileNameA = (lpGetDeviceDriverFileNameA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hPsapi, xorstr("GetDeviceDriverFileNameA").crypt_get());
	g_winapiApiTable->OpenSCManagerA = (lpOpenSCManagerA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hAdvapi32, xorstr("OpenSCManagerA").crypt_get());
	g_winapiApiTable->EnumServicesStatusA = (lpEnumServicesStatusA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hAdvapi32, xorstr("EnumServicesStatusA").crypt_get());
	g_winapiApiTable->CloseServiceHandle = (lpCloseServiceHandle)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hAdvapi32, xorstr("CloseServiceHandle").crypt_get());
	g_winapiApiTable->Toolhelp32ReadProcessMemory = (lpToolhelp32ReadProcessMemory)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("Toolhelp32ReadProcessMemory").crypt_get());
	g_winapiApiTable->OpenEventA = (lpOpenEventA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("OpenEventA").crypt_get());
	g_winapiApiTable->LocalFree = (lpLocalFree)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("LocalFree").crypt_get());
	g_winapiApiTable->SetEntriesInAclA = (lpSetEntriesInAclA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hAdvapi32, xorstr("SetEntriesInAclA").crypt_get());
	g_winapiApiTable->SetPriorityClass = (lpSetPriorityClass)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("SetPriorityClass").crypt_get());
	g_winapiApiTable->BuildExplicitAccessWithNameA = (lpBuildExplicitAccessWithNameA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hAdvapi32, xorstr("BuildExplicitAccessWithNameA").crypt_get());
	g_winapiApiTable->SetKernelObjectSecurity = (lpSetKernelObjectSecurity)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hAdvapi32, xorstr("SetKernelObjectSecurity").crypt_get());
	g_winapiApiTable->ConvertStringSecurityDescriptorToSecurityDescriptorA = (lpConvertStringSecurityDescriptorToSecurityDescriptorA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hAdvapi32, xorstr("ConvertStringSecurityDescriptorToSecurityDescriptorA").crypt_get());
	g_winapiApiTable->CoInitialize = (lpCoInitialize)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hOle32, xorstr("CoInitialize").crypt_get());
	g_winapiApiTable->CoUninitialize = (lpCoUninitialize)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hOle32, xorstr("CoUninitialize").crypt_get());
	g_winapiApiTable->InternetOpenA = (lpInternetOpenA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hWininet, xorstr("InternetOpenA").crypt_get());
	g_winapiApiTable->InternetOpenUrlA = (lpInternetOpenUrlA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hWininet, xorstr("InternetOpenUrlA").crypt_get());
	g_winapiApiTable->HttpQueryInfoA = (lpHttpQueryInfoA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hWininet, xorstr("HttpQueryInfoA").crypt_get());
	g_winapiApiTable->InternetCloseHandle = (lpInternetCloseHandle)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hWininet, xorstr("InternetCloseHandle").crypt_get());
	g_winapiApiTable->InternetReadFile = (lpInternetReadFile)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hWininet, xorstr("InternetReadFile").crypt_get());
	g_winapiApiTable->WSAStartup = (lpWSAStartup)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hWs2_32, xorstr("WSAStartup").crypt_get());
	g_winapiApiTable->gethostbyname = (lpgethostbyname)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hWs2_32, xorstr("gethostbyname").crypt_get());
	g_winapiApiTable->WSACleanup = (lpWSACleanup)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hWs2_32, xorstr("WSACleanup").crypt_get());
	g_winapiApiTable->WSAGetLastError = (lpWSAGetLastError)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hWs2_32, xorstr("WSAGetLastError").crypt_get());
	g_winapiApiTable->inet_ntoa = (lpinet_ntoa)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hWs2_32, xorstr("inet_ntoa").crypt_get());
	g_winapiApiTable->GetFileTime = (lpGetFileTime)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("GetFileTime").crypt_get());
	g_winapiApiTable->SetHandleInformation = (lpSetHandleInformation)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("SetHandleInformation").crypt_get());
	g_winapiApiTable->CreateMutexA = (lpCreateMutexA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("CreateMutexA").crypt_get());
	g_winapiApiTable->SetErrorMode = (lpSetErrorMode)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("SetErrorMode").crypt_get());
	g_winapiApiTable->GetWindowRect = (lpGetWindowRect)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hUser32, xorstr("GetWindowRect").crypt_get());
	g_winapiApiTable->GetDesktopWindow = (lpGetDesktopWindow)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hUser32, xorstr("GetDesktopWindow").crypt_get());
	g_winapiApiTable->GetDC = (lpGetDC)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hUser32, xorstr("GetDC").crypt_get());
	g_winapiApiTable->CreateCompatibleDC = (lpCreateCompatibleDC)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hGdi32, xorstr("CreateCompatibleDC").crypt_get());
	g_winapiApiTable->BitBlt = (lpBitBlt)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hGdi32, xorstr("BitBlt").crypt_get());
	g_winapiApiTable->CreateCompatibleBitmap = (lpCreateCompatibleBitmap)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hGdi32, xorstr("CreateCompatibleBitmap").crypt_get());
	g_winapiApiTable->SelectObject = (lpSelectObject)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hGdi32, xorstr("SelectObject").crypt_get());
	g_winapiApiTable->IsWow64Process = (lpIsWow64Process)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("IsWow64Process").crypt_get());
	g_winapiApiTable->CheckTokenMembership = (lpCheckTokenMembership)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hAdvapi32, xorstr("CheckTokenMembership").crypt_get());
	g_winapiApiTable->GetTempFileNameA = (lpGetTempFileNameA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("GetTempFileNameA").crypt_get());
	g_winapiApiTable->GetTempPathA = (lpGetTempPathA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("GetTempPathA").crypt_get());
	g_winapiApiTable->QueryWorkingSet = (lpQueryWorkingSet)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hPsapi, xorstr("QueryWorkingSet").crypt_get());
	g_winapiApiTable->RtlImageNtHeader = (lpRtlImageNtHeader)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("RtlImageNtHeader").crypt_get());
	g_winapiApiTable->ZwOpenDirectoryObject = (lpZwOpenDirectoryObject)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("ZwOpenDirectoryObject").crypt_get());
	g_winapiApiTable->ZwClose = (lpZwClose)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("ZwClose").crypt_get());
	g_winapiApiTable->ZwQueryDirectoryObject = (lpZwQueryDirectoryObject)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("ZwQueryDirectoryObject").crypt_get());
	g_winapiApiTable->RtlInitUnicodeString = (lpRtlInitUnicodeString)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("RtlInitUnicodeString").crypt_get());
	g_winapiApiTable->DeviceIoControl = (lpDeviceIoControl)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("DeviceIoControl").crypt_get());
	g_winapiApiTable->GetThreadPriority = (lpGetThreadPriority)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("GetThreadPriority").crypt_get());
	g_winapiApiTable->SetThreadPriority = (lpSetThreadPriority)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("SetThreadPriority").crypt_get());
	g_winapiApiTable->InternetConnectA = (lpInternetConnectA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hWininet, xorstr("InternetConnectA").crypt_get());
	g_winapiApiTable->HttpOpenRequestA = (lpHttpOpenRequestA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hWininet, xorstr("HttpOpenRequestA").crypt_get());
	g_winapiApiTable->HttpAddRequestHeadersA = (lpHttpAddRequestHeadersA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hWininet, xorstr("HttpAddRequestHeadersA").crypt_get());
	g_winapiApiTable->HttpSendRequestExA = (lpHttpSendRequestExA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hWininet, xorstr("HttpSendRequestExA").crypt_get());
	g_winapiApiTable->InternetWriteFile = (lpInternetWriteFile)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hWininet, xorstr("InternetWriteFile").crypt_get());
	g_winapiApiTable->HttpEndRequestA = (lpHttpEndRequestA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hWininet, xorstr("HttpEndRequestA").crypt_get());
	g_winapiApiTable->NtProtectVirtualMemory = (lpNtProtectVirtualMemory)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("NtProtectVirtualMemory").crypt_get());
	g_winapiApiTable->VirtualProtectEx = (lpVirtualProtectEx)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("VirtualProtectEx").crypt_get());
	g_winapiApiTable->CoInitializeEx = (lpCoInitializeEx)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hOle32, xorstr("CoInitializeEx").crypt_get());
	g_winapiApiTable->CoInitializeSecurity = (lpCoInitializeSecurity)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hOle32, xorstr("CoInitializeSecurity").crypt_get());
	g_winapiApiTable->CoCreateInstance = (lpCoCreateInstance)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hOle32, xorstr("CoCreateInstance").crypt_get());
	g_winapiApiTable->CoSetProxyBlanket = (lpCoSetProxyBlanket)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hOle32, xorstr("CoSetProxyBlanket").crypt_get());
	g_winapiApiTable->SetTimer = (lpSetTimer)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hUser32, xorstr("SetTimer").crypt_get());
	g_winapiApiTable->KillTimer = (lpKillTimer)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hUser32, xorstr("KillTimer").crypt_get());
	g_winapiApiTable->RtlComputeCrc32 = (lpRtlComputeCrc32)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("RtlComputeCrc32").crypt_get());
	g_winapiApiTable->NtRaiseHardError = (lpNtRaiseHardError)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("NtRaiseHardError").crypt_get());
	g_winapiApiTable->GetWindowInfo = (lpGetWindowInfo)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hUser32, xorstr("GetWindowInfo").crypt_get());
	g_winapiApiTable->CommandLineToArgvW = (lpCommandLineToArgvW)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hShell32, xorstr("CommandLineToArgvW").crypt_get());
	g_winapiApiTable->GetCommandLineW = (lpGetCommandLineW)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("GetCommandLineW").crypt_get());
	g_winapiApiTable->RegOpenKeyExA = (lpRegOpenKeyExA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hAdvapi32, xorstr("RegOpenKeyExA").crypt_get());
	g_winapiApiTable->RegQueryValueExA = (lpRegQueryValueExA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hAdvapi32, xorstr("RegQueryValueExA").crypt_get());
	g_winapiApiTable->RegCloseKey = (lpRegCloseKey)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hAdvapi32, xorstr("RegCloseKey").crypt_get());
	g_winapiApiTable->NtSuspendProcess = (lpNtSuspendProcess)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("NtSuspendProcess").crypt_get());
	g_winapiApiTable->NtResumeThread = (lpNtResumeThread)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("NtResumeThread").crypt_get());
	g_winapiApiTable->NtGetContextThread = (lpNtGetContextThread)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("NtGetContextThread").crypt_get());
	g_winapiApiTable->NtSetContextThread = (lpNtSetContextThread)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("NtSetContextThread").crypt_get());
	g_winapiApiTable->NtReadVirtualMemory = (lpNtReadVirtualMemory)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("NtReadVirtualMemory").crypt_get());
	g_winapiApiTable->NtWaitForSingleObject = (lpNtWaitForSingleObject)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("NtWaitForSingleObject").crypt_get());
	g_winapiApiTable->VirtualAllocEx = (lpVirtualAllocEx)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("VirtualAllocEx").crypt_get());
	g_winapiApiTable->ShowWindow = (lpShowWindow)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hUser32, xorstr("ShowWindow").crypt_get());
	g_winapiApiTable->GetConsoleWindow = (lpGetConsoleWindow)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("GetConsoleWindow").crypt_get());
	g_winapiApiTable->NtAdjustPrivilegesToken = (lpNtAdjustPrivilegesToken)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("NtAdjustPrivilegesToken").crypt_get());
	g_winapiApiTable->NtOpenProcessToken = (lpNtOpenProcessToken)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("NtOpenProcessToken").crypt_get());
	g_winapiApiTable->OpenMutexA = (lpOpenMutexA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("OpenMutexA").crypt_get());
	g_winapiApiTable->InternetCheckConnectionA = (lpInternetCheckConnectionA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hWininet, xorstr("InternetCheckConnectionA").crypt_get());
	g_winapiApiTable->FtpPutFileA = (lpFtpPutFileA)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hWininet, xorstr("FtpPutFileA").crypt_get());
	g_winapiApiTable->GetNativeSystemInfo = (lpGetNativeSystemInfo)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("GetNativeSystemInfo").crypt_get());
	g_winapiApiTable->GetWindow = (lpGetWindow)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hUser32, xorstr("GetWindow").crypt_get());
	g_winapiApiTable->GlobalFree = (lpGlobalFree)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("GlobalFree").crypt_get());
	g_winapiApiTable->RtlAllocateHeap = (lpRtlAllocateHeap)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("RtlAllocateHeap").crypt_get());
	g_winapiApiTable->RtlFreeHeap = (lpRtlFreeHeap)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("RtlFreeHeap").crypt_get());
	g_winapiApiTable->CreateRemoteThread = (lpCreateRemoteThread)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("CreateRemoteThread").crypt_get());
	g_winapiApiTable->LdrLoadDll = (lpLdrLoadDll)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("LdrLoadDll").crypt_get());
	g_winapiApiTable->VirtualQueryEx = (lpVirtualQueryEx)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hKernel32, xorstr("VirtualQueryEx").crypt_get());
	g_winapiApiTable->NtCreateDebugObject = (lpNtCreateDebugObject)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("NtCreateDebugObject").crypt_get());
	g_winapiApiTable->NtDebugActiveProcess = (lpNtDebugActiveProcess)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("NtDebugActiveProcess").crypt_get());
	g_winapiApiTable->RtlAddAccessDeniedAce = (lpRtlAddAccessDeniedAce)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("RtlAddAccessDeniedAce").crypt_get());
	g_winapiApiTable->RtlAddAccessAllowedAce = (lpRtlAddAccessAllowedAce)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("RtlAddAccessAllowedAce").crypt_get());
	g_winapiApiTable->RtlImageDirectoryEntryToData = (lpRtlImageDirectoryEntryToData)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("RtlImageDirectoryEntryToData").crypt_get());
	g_winapiApiTable->RtlCreateQueryDebugBuffer = (lpRtlCreateQueryDebugBuffer)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("RtlCreateQueryDebugBuffer").crypt_get());
	g_winapiApiTable->RtlDestroyQueryDebugBuffer = (lpRtlDestroyQueryDebugBuffer)g_winapiApiTable->GetProcAddress(g_winapiModuleTable->hNtdll, xorstr("RtlDestroyQueryDebugBuffer").crypt_get());
}
