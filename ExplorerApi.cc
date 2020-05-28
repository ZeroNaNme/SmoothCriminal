#include "ExplorerApi.h"

ExplorerApi::ExplorerApi() {
	TrayWnd = FindWindowW(TrayWndClass, NULL);
	TrayTabsWnd = FindWindowExW(TrayWnd, NULL, TrayTabsWndClass, NULL);
	ProgmanWnd = FindWindowW(ProgmanWndClass, NULL);
	DesktopShellWnd = FindWindowExW(ProgmanWnd, NULL, DesktopShellWndClass, NULL);
}

ExplorerApi::~ExplorerApi() {
	if (Return) {
		ShowTaskBar();
		ShowTaskBarTabs();
		ShowDesktopShell();
		ShowAllWindows();
	}
}


int ExplorerApi::MinAllWindows() {
	SendMessageW(TrayWnd, WM_COMMAND, TRAY::MIN_ALL, 0);
	return GetLastError();
}

int ExplorerApi::ShowAllWindows() {
	SendMessageW(TrayWnd, WM_COMMAND, TRAY::MIN_ALL_UNDO, 0);
	return GetLastError();
}


bool ExplorerApi::HideTaskBar() {
	return ShowWindow(TrayWnd, SW_HIDE);
}

bool ExplorerApi::ShowTaskBar() {
	return ShowWindow(TrayWnd, SW_SHOW);
}


bool ExplorerApi::HideTaskBarTabs() {
	return ShowWindow(TrayTabsWnd, SW_HIDE);
}

bool ExplorerApi::ShowTaskBarTabs() {
	return ShowWindow(TrayTabsWnd, SW_SHOW);
}


bool ExplorerApi::HideDesktopShell() {
	return ShowWindow(DesktopShellWnd, SW_HIDE);
}

bool ExplorerApi::ShowDesktopShell() {
	return ShowWindow(DesktopShellWnd, SW_SHOW);
}
