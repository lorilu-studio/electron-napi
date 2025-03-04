
#include <Windows.h>
#include <string>

int AddFunc(int a, int b);
std::string StrAddFunc(std::string a, std::string b);

BOOL WINAPI DllMain(
	HANDLE hinstDLL,
	DWORD dwReason,
	LPVOID lpvReserved
) {
	return TRUE;
}

int AddFunc(int a, int b) {
	return a + b;
}

std::string StrAddFunc(std::string a, std::string b) {
	return a + b;
}
