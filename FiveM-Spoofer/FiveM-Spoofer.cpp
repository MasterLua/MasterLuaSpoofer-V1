#include <iostream>
#include <Windows.h>
#include "auth.h"
#include "auth-gui.h"
#include "spoofer-gui.h"

int main()
{
    SetConsoleTitleA("MasterLua | Spoofer FiveM");
    system("color 0");
    auth();
    clear();
    guispoofer();
}