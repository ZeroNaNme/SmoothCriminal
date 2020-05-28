#include <windows.h>
#include "resource.h"
#include "timings.h"
#include "ExplorerApi.h"

int main() {
	ShowWindow(GetConsoleWindow(), SW_MINIMIZE); // SW_HIDE

	ExplorerApi* api = new ExplorerApi();
	api->Return = true;

	PlaySoundW((LPCWSTR)RES_SMOOTHCRIMINAL, GetModuleHandleW(NULL), SND_RESOURCE | SND_ASYNC);

	Sleep(TIME_YOUVE_BBEN_HIT_BY_1);
	api->MinAllWindows();

	Sleep(TIME_YOUVE_BBEN_HIT_BY_2_1);
	api->HideTaskBarTabs();

	Sleep(TIME_YOUVE_BBEN_HIT_BY_2_2);
	api->HideTaskBar();

	Sleep(TIME_SMOOTH_CRIMINAL);
	api->HideDesktopShell();

	Sleep(TIME_REMAIN);
	
	delete api;
	return 0;
}
