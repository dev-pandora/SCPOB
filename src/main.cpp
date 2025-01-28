#include <iostream>
#include <windows.h>

int main()
{
	std::cout << "Hello World!" << std::endl;
	return 0;
}

int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow)
{
	return MessageBox(NULL, "hello, world", "caption", 0);
}