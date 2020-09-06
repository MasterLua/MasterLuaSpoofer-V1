#pragma once
#include <Windows.h>
#include <string>
#include <random>

namespace {
	std::string const default_chars =
		"abcdefghijklmnaoqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
}

std::string random_string(size_t len = 15, std::string const& allowed_chars = default_chars) {
	std::mt19937_64 gen{ std::random_device()() };

	std::uniform_int_distribution<size_t> dist{ 0, allowed_chars.length() - 1 };

	std::string ret;

	std::generate_n(std::back_inserter(ret), len, [&] { return allowed_chars[dist(gen)]; });
	return ret;
}



void cleaner()
{
	std::cout << R"(
   _____ _      ______          _   _ ______ _____  
  / ____| |    |  ____|   /\   | \ | |  ____|  __ \ 
 | |    | |    | |__     /  \  |  \| | |__  | |__) |
 | |    | |    |  __|   / /\ \ | . ` |  __| |  _  / 
 | |____| |____| |____ / ____ \| |\  | |____| | \ \ 
  \_____|______|______/_/    \_\_| \_|______|_|  \_\
                                                    
                                                    
)" << '\n';
	std::cout << "[+] Clean in progress...\n";
	Sleep(2000);
	ShellExecuteA(0, "open", "cmd.exe", "/C rmdir /s /q \"C:\\Users\\%username%\\AppData\\Roaming\\CitizenFX", 0, SW_HIDE);
	ShellExecuteA(0, "open", "cmd.exe", "/C rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\FiveM\\cache\\game\\ros_profiles", 0, SW_HIDE);
	ShellExecuteA(0, "open", "cmd.exe", "/C rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\FiveM\\FiveM.app\\cache\\game\\ros_profiles", 0, SW_HIDE);
	ShellExecuteA(0, "open", "cmd.exe", "/C rmdir /s /q \"C:\\Users\\%username%\\AppData\\Local\\DigitalEntitlements", 0, SW_HIDE);
	ShellExecuteA(0, "open", "cmd.exe", "/C rmdir /s /q \"C:\\Users\\%username%\\AppData\\Local\\FiveM\\cache\\priv", 0, SW_HIDE);
	ShellExecuteA(0, "open", "cmd.exe", "/C del \"C:\\Users\\%username%\\AppData\\Local\\FiveM\\asi-five.dll", 0, SW_HIDE);
	ShellExecuteA(0, "open", "cmd.exe", "/C del \"C:\\Users\\%username%\\AppData\\Local\\FiveM\\CitizenFX.ini", 0, SW_HIDE);
	ShellExecuteA(0, "open", "cmd.exe", "/C rmdir /s /q \"C:\\Users\\%username%\\AppData\\Local\\FiveM\\FiveM.app\\cache\\priv", 0, SW_HIDE);
	ShellExecuteA(0, "open", "cmd.exe", "/C del \"C:\\Users\\%username%\\AppData\\Local\\FiveM\\FiveM.app\\asi-five.dll", 0, SW_HIDE);
	ShellExecuteA(0, "open", "cmd.exe", "/C cd C:\\Users\\%username%\\Saved Games\\ && rmdir /s /q .\\CitizenFX", 0, SW_HIDE);
	ShellExecuteA(0, "open", "cmd.exe", "/C rmdir /s /q C:\\Users\\%username%\\Saved Games\\CitizenFX", 0, SW_HIDE);
	ShellExecuteA(0, "open", "cmd.exe", "/C taskkill / F / IM Steam.exe", 0, SW_HIDE);
	std::cout << "[+] Clean finish :)";
	Sleep(2000);
}

void spoofer()
{
	std::cout << R"(
   _____                    __          
  / ____|                  / _|         
 | (___  _ __   ___   ___ | |_ ___ _ __ 
  \___ \| '_ \ / _ \ / _ \|  _/ _ \ '__|
  ____) | |_) | (_) | (_) | ||  __/ |   
 |_____/| .__/ \___/ \___/|_| \___|_|   
        | |                             
        |_|                             
)" << '\n';

	string HwGuildRandom = random_string(12, "abcdefghijklmnopqrstuvwxyz123456789");
	string FunctionCmd = "/C REG ADD \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\IDConfigDB\\Hardware Profiles\\0001\" /f /v HwProfileGuid /t REG_SZ /d {1b7803eb-da69-11ea-a112-";
	string LesDeux = FunctionCmd + HwGuildRandom + "}";
	ShellExecuteA(0, "open", "cmd.exe", LesDeux.c_str(), 0, SW_HIDE);
	std::cout << "[+] Spoof HWID finish ...\n";
	Sleep(2000);
	//----------------------//
	//	    Fonction2   	//
	//----------------------//
	string MachineRandom = random_string(12, "abcdefghijklmnopqrstuvwxyz123456789");
	string MachineFonction = "/C REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Cryptography /f /v MachineGuid /t REG_SZ /d ValeurTest"; // Maybe it's work with 16 bit idk
	string FonctionContribue = MachineFonction + MachineRandom;
	ShellExecuteA(0, "open", "cmd.exe", FonctionContribue.c_str(), 0, SW_HIDE); // Execute fonction invalid and it's work
	std::cout << "[+] Spoof MAC finish ...\n";
	Sleep(2000);
	//----------------------//
	//	    Fonction3   	//
	//----------------------//
	string macrandom = random_string(12, "abcdefghijklmnopqrstuvwxyz123456789");
	string macfonction = "/C REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Class\\{4d36e972-e325-11ce-bfc1-08002be10318}\\0001 /f /v MachineGuid /t REG_SZ /d ValeurTest"; // Maybe it's work with 16 bit idk
	string DoubleFonction = MachineFonction + MachineRandom;
	ShellExecuteA(0, "open", "cmd.exe", FonctionContribue.c_str(), 0, SW_HIDE); // Execute fonction for change mac but i dont if work with 16 byte bcs on 16 byte mac change evertime
	std::cout << "[+] Spoof MG finish ...\n";
	Sleep(2000);
	std::cout << "[+] Spoof Finish , Enjoy ...";
	Sleep(2000);
}

void xboxunlink()
{
	std::cout << R"(
  _    _ _   _ _      _____ _   _ _  __ __   ______   ______   __
 | |  | | \ | | |    |_   _| \ | | |/ / \ \ / /  _ \ / __ \ \ / /
 | |  | |  \| | |      | | |  \| | ' /   \ V /| |_) | |  | \ V / 
 | |  | | . ` | |      | | | . ` |  <     > < |  _ <| |  | |> <  
 | |__| | |\  | |____ _| |_| |\  | . \   / . \| |_) | |__| / . \ 
  \____/|_| \_|______|_____|_| \_|_|\_\ /_/ \_\____/ \____/_/ \_\
                                                                 
                                                                 
)" << '\n';
	std::cout << "[+] Unlink Xbox ...";
	system("echo 127.0.0.1 xboxlive.com >> %windir%\\System32\\drivers\\etc\\hosts");
	system("echo 127.0.0.1 user.auth.xboxlive.com >> %windir%\\System32\\drivers\\etc\\hosts");
	system("echo 127.0.0.1 presence-heartbeat.xboxlive.com >> %windir%\\System32\\drivers\\etc\\hosts");
	Sleep(2000);
	std::cout << "[+] Unlink Xbox Finish";
}

void discordunlink()
{
	std::cout << R"(
  _    _ _   _ _      _____ _   _ _  __  _____ _____  _____  _____ ____  _____  _____  
 | |  | | \ | | |    |_   _| \ | | |/ / |  __ \_   _|/ ____|/ ____/ __ \|  __ \|  __ \ 
 | |  | |  \| | |      | | |  \| | ' /  | |  | || | | (___ | |   | |  | | |__) | |  | |
 | |  | | . ` | |      | | | . ` |  <   | |  | || |  \___ \| |   | |  | |  _  /| |  | |
 | |__| | |\  | |____ _| |_| |\  | . \  | |__| || |_ ____) | |___| |__| | | \ \| |__| |
  \____/|_| \_|______|_____|_| \_|_|\_\ |_____/_____|_____/ \_____\____/|_|  \_\_____/ 
                                                                                       
                                                                                       
)" << '\n';
	std::cout << "[+] Close Discord ...\n";
	Sleep(1000);
	ShellExecuteA(0, "open", "cmd.exe", "/C taskkill /IM Discord.exe /F", 0, SW_HIDE);
	std::cout << "[+] Unlink Discord ...\n";
	ShellExecuteA(0, "open", "cmd.exe", "/C rmdir /s /q \"C:\\Users\\%username%\\AppData\\Roaming\\discord\\0.0.307\\modules\\discord_rpc", 0, SW_HIDE);
	Sleep(2000);
	std::cout << "[+] Unlink Discord Finish\n";
	Sleep(3000);
}
