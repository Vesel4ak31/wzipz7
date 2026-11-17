# wzipz7
wzipz7 is a simple brute-force tool for 7z archives on Windows (x64/x86 architectures) that relies on system calls and a dictionary-based approach.

# Installation

<img width="1090" height="326" alt="изображение" src="https://github.com/user-attachments/assets/5a217e25-631f-4f60-9dd1-4f44f7634906" />


Open PowerShell and enter the following commands. This example demonstrates how to compile a file using the `g++` compiler; please install it if you haven't already. The example also shows how to clone the repository using `git`—if you don't have `git` installed, please install it as well:

```
git clone https://github.com/Vesel4ak31/wzipz7.git
g++ -std=c++17 -Wall wzipz7.cpp -o wzipz7.exe
```

# Usage Example

As you may have gathered, this project is a simple brute-force tool for 7z archives. To use it effectively, you must have it installed and be able to execute it via the command line (such as `cmd` or PowerShell). The tool will not function otherwise.

<img width="636" height="209" alt="изображение" src="https://github.com/user-attachments/assets/01bc679a-1338-4924-8d22-f3ee45d6a4d9" />

To run the program, you only need a password-protected 7z archive and a wordlist (a file containing a list of potential passwords, with one entry per line). For testing purposes, you can use the archive and wordlist already provided in the repository to verify that it works.
