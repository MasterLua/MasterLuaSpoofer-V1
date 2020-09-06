#pragma once
#include <Windows.h>
#include "auth.h"

string hostofhost = "https://pastebin.com/raw/YCd59X1C";
string hostofhoststring = a_DownloadURL(hostofhost);

void auth()
{
	string hwid = a_gethid();
	string forhost = "spoofer?chingchong=";
	string result = a_DownloadURL(hostofhoststring + forhost + hwid);
	if (result == "P6RdBml8SzgltZYZ") {
		std::cout << R"(
       .-""""-.        .-""""-.
      /        \      /        \
     /_        _\    /_        _\
    // \      / \\  // \      / \\
    |\__\    /__/|  |\__\    /__/|
     \    ||    /    \    ||    /
      \        /      \        /
       \  __  /        \  __  / 
        '.__.'          '.__.'
         |  |            |  |
         |  |    JUL     |  | 
)" << '\n';
		std::cout << "auth success | HWID : " + hwid;
		std::cout << "\n\n\n©Copyright By MasterLua 2019-2020";

		Sleep(4000);
	}
	else {
		std::cout << R"(
 _____    
/  _/\\  
| / oo
\(   _\
 \  O/
 /   \
 ||  ||
 ||  ||      "Hmmmmmmmm... Im ZN SHOP i like dick to LokiModz"
 ||  || _____ /
 | \ ||(___  )
// / \|_)o (  )
\\ ///|)\_(    )
 ||   |\ )(    )
 ||   ) \/(____)_     ___
 ||   |\___/     `---' `.`.
 ||   | :   _       .'   ))
 ||   | `..' `~~~-.'   .'__ _
 \\  /           '.______  ( (
 ((___ooO                `._\_\
)" << '\n';
		std::cout << "auth failed | HWID : " + hwid;
		std::cout << "\n\n\n©Copyright By MasterLua 2019-2020";
		Sleep(9999999999999999);
	}
}