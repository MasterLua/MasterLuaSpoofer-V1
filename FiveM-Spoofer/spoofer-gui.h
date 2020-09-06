#pragma once
#include <Windows.h>
#include <string>
#include <iostream>
#include "color.h"
#include "spoofer.h";

void clear() {
    COORD topLeft = { 0, 0 };
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen;
    DWORD written;

    GetConsoleScreenBufferInfo(console, &screen);
    FillConsoleOutputCharacterA(
        console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    FillConsoleOutputAttribute(
        console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
        screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    SetConsoleCursorPosition(console, topLeft);
}

void guispoofer()
{
    std::cout << R"(
  __  __           _            _                 
 |  \/  |         | |          | |                
 | \  / | __ _ ___| |_ ___ _ __| |    _   _  __ _ 
 | |\/| |/ _` / __| __/ _ \ '__| |   | | | |/ _` |
 | |  | | (_| \__ \ ||  __/ |  | |___| |_| | (_| |
 |_|  |_|\__,_|___/\__\___|_|  |______\__,_|\__,_|
                                                  
                                                  
)" << '\n';
	std::cout << red << "[1] Cleaner\n" << green << "[2] Spoofer\n" << yellow << "[3] Unlink Xbox Live\n" << blue << "[4] Unlink Discord RPC\n\n" << white << "Your choice : ";
   
    string input;
    cin >> input;
    if (input == "1")
    {
        clear();
        cleaner();
        clear();
        guispoofer();
    }
    if (input == "2")
    {
        clear();
        spoofer();
        clear();
        guispoofer();
    }
    if (input == "3")
    {
        clear();
        xboxunlink();
        clear();
        guispoofer();
    }
    if (input == "4")
    {
        clear();
        discordunlink();
        clear();
        guispoofer();
    }
    else {
        cout << red << "\nInvalid choice !";
        Sleep(3000);
        clear();
        guispoofer();
    }
}