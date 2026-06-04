#include <windows.h>

DWORD WINAPI Enable(LPVOID lpParam) {

    system("REG ADD hkcu\\Software\\Microsoft\\Windows\\CurrentVersion\\policies\\system /v DisableTaskMgr /t reg_dword /d 0 /f");

    return 1;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {

	if (MessageBoxW(NULL, L"This Enables the Task Manager run?", L"Enable-TaskManager.exe", MB_YESNO | MB_ICONASTERISK) == IDNO)
	{
		ExitProcess(0);
	}
	else
	{
		if (MessageBoxW(NULL, L"This program is not malware this actually does it", L"Enable-TaskManager.exe", MB_YESNO | MB_ICONASTERISK) == IDNO)
		{
			ExitProcess(0);
		}
		else
		{

	CreateThread(0, 0, Enable, 0, 0, 0);

	("system TaskMgr");


		}
	}
}