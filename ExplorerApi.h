#pragma once
#ifndef EXPLORER_API_H
#define EXPLORER_API_H

#include "windows.h"
#include <string>

class ExplorerApi {

public:
	ExplorerApi();
	~ExplorerApi();

	bool Return = false;

	int MinAllWindows();
	int ShowAllWindows();

	bool HideTaskBar();
	bool ShowTaskBar();

	bool HideTaskBarTabs();
	bool ShowTaskBarTabs();

	bool HideDesktopShell();
	bool ShowDesktopShell();

private:
	LPCWSTR ProgmanWndClass = L"Progman";
	HWND ProgmanWnd;

	LPCWSTR DesktopShellWndClass = L"SHELLDLL_DefView";
	HWND DesktopShellWnd;

	LPCWSTR TrayWndClass = L"Shell_TrayWnd";
	HWND TrayWnd;

	LPCWSTR TrayTabsWndClass = L"ReBarWindow32";
	HWND TrayTabsWnd;

	enum TRAY {
		MIN_ALL = 419,
		MIN_ALL_UNDO = 416,
	};

};

#endif
