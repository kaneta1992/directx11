#include "Console.h"
#include <windows.h>
#include <iostream>

Console::Console()
{
    AllocConsole();
    freopen_s(&this->console, "CON", "w", stdout);
}

Console::~Console()
{
    fclose(this->console);
    FreeConsole();
}

void Console::write(string str)
{
    cout << str << endl;
}