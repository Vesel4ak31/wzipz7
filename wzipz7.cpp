#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <windows.h>
#include <thread>
#include <chrono>
#include <cstdlib>
using namespace std;

//GITHUB - https://github.com/Vesel4ak31/wzipz7
//AUTHOR - @Vesel4ak31
//FOR LEGAL USAGE

const string RESET = "\033[0m"; //SET ASCII COLOR CODES
const string GREEN = "\033[1;32m";//SET ASCII COLOR CODES
const string BLUE = "\033[1;34m"; //SET ASCII COLOR CODES
const string RED = "\033[1;31m"; //SET ASCII COLOR CODES

int main(int argc, char* argv[]) { //MAIN FUNCTION

    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);  //SET ASCII COLOR CODES
    DWORD dwMode = 0; //SET ASCII COLOR CODES
    GetConsoleMode(hOut, &dwMode); //SET ASCII COLOR CODES
    SetConsoleMode(hOut, dwMode | ENABLE_VIRTUAL_TERMINAL_PROCESSING); //SET ASCII COLOR CODES

    if (argc < 4) { //Check agrs

        cout << "[" << BLUE << "INF" << RESET << "] " << "Usage: wzipz7 <archive.7z> -w <wordlist.txt>" << endl;
        return 1;
    }

    string archive = argv[1]; //Get archive name
    string wordlist = argv[3]; //Get wordlist path
    string command;
    string currentPassword;

    int counter = 0; //Set attempts counter 
    int exitCode;

    ifstream file(wordlist); //Open wordlist
    vector <string> passwords; //Set passwords list


    if (!file.is_open()) { //Check if file didnt open

        cout << "[" << RED << "ERR" << RESET << "]" << " The specified wordlist could not be opened" << endl;
        return 1;

    }

    while (getline(file, currentPassword)) { //LOAD PASSWORDS CYCLE

        passwords.push_back(currentPassword);

    }

    cout << "[" << BLUE << "INF" << RESET << "] " << size(passwords) << " passwords was loaded";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "[" << BLUE << "INF" << RESET << "] " << "Starting wzipz7 for archive: " << GREEN << archive << RESET << endl;


    for (const string& password : passwords) { //MAIN CYCLE

        counter++;
        command = "7z t " + archive + " -p" + password;
        exitCode = system(command.c_str());

        cout << "[" << BLUE << counter << RESET << "] " << "Trying password: " << password << endl;

        if (exitCode == 0) {

            cout << "[" << GREEN << "SUC" << RESET << "] " << "Passowrd found: " << GREEN << password << RESET << endl;
            break;

        }


    }








    return 0;

}