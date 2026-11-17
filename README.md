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
To run a test and verify that the program works with an encrypted archive and a wordlist, enter the following command in your terminal:

<img width="982" height="252" alt="изображение" src="https://github.com/user-attachments/assets/a3c322de-8aca-4c67-bfe4-c03c15bfd07d" />


```
.\wzipz7.exe test.7z -w wordlist.txt
```

After a few attempts, the program will identify the correct password (admin123).



# Future Improvements

<img width="1316" height="422" alt="изображение" src="https://github.com/user-attachments/assets/5adb9a2b-dedc-437e-b098-138ce9214707" />


In its current state, this project is absolute garbage. It is single-threaded, memory-intensive, Windows-only, and slow at cracking passwords. Naturally, future iterations will include more flags, multi-threading, timeout settings, and so on. It will become cross-platform, supporting both Linux and macOS. The password-cracking algorithm itself will be significantly improved—moving away from relying on system commands toward a robust, native archive-cracking process implemented via C libraries. C++ makes all of this quite feasible, so a new version shouldn't be long in coming. We might also rename the tool from `wzipz7` to `zipz7`.

# Comments

<img width="685" height="258" alt="изображение" src="https://github.com/user-attachments/assets/9261c3d1-8d43-4ff9-8441-42afddd56d90" />


All key sections of the code are documented with comments. Feel free to examine the code and make your own modifications.

# License

To save you the trouble of checking the `LICENSE` file, I’ve included its contents here:

```
MIT License

Copyright (c) 2026 Vesel4ak31

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```

# Legal Disclaimer

This program is designed for the legitimate security testing of 7z archives. The author assumes no responsibility for the use of this tool to crack archive passwords. This software is not intended to be used as an archive-cracking tool.
