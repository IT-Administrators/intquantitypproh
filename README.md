# intquantitypproh

_The intquantitypproh headerfile implements a class intquantitypp for handling integer quantities._

## Table of contents

1. [Introduction](#introduction)
2. [Getting started](#getting-started)
    1. [Prerequisites](#prerequisites)
    2. [Installation](#installation)
3. [How to use](#how-to-use)
    1. [Compile the programm](#compile-the-programm)
    1. [How to import](#how-to-import)
    2. [Using the header](#using-the-header)
4. [License](/LICENSE)

## Introduction

The overall project contains 3 files:
- The headerfile [intquantitypproh.hpp](/src/intquantitypproh.hpp)
- The implementation file for the header [intquantitypproh.cpp](/src/intquantitypproh.cpp)
- The main file which can be compiled to run the programm.

## Getting started

### Prerequisites

- A compiler like gcc or g++
- IDE like VSCode and the right extensions (cpp,..) if you want to make adjustments

### Installation

To use the headerfile inside your project type the following inside your terminal (requires git):

1. Using Powershell and git

```PS
# Powershell
# Creates a directory in your current directory
md intquantity
# Change location to the created directory
cd intquantity
# Pull necessary files
git pull https://github.com/IT-Administrators/intquantitypproh.git
```
2. Using Powershell without git

```PS
# Download zip archive using powershell
Invoke-WebRequest -Uri "https://github.com/IT-Administrators/intquantitypproh/archive/refs/heads/main.zip"
# Than expand archive
Expand-Archive -Path .\ArchiveName
```

After that you will find all project related files in the created directory. 

Than you can copy the headerfile and the implementation file to your project folder to use them. You don't need the main.cpp file.

Before using i would recommend compiling and testing the programm. You can find an instruction here: [Compile the programm](#compile-the-programm).

## How to use

### Compile the programm

I would recommend to compile the programm right after download, to see how it works. 
Depending on your chosen compiler the following snippet might look different.

You need to be in the src folder of the project to run the command otherwise you need to specify the full path name:
```
g++ main.cpp intquantitypproh.cpp -o iqroh
```
After that you will find an .exe file there, called iqroh.exe which you can run. 

### How to import

Using the headerfile in your project is quite easy. You can include it just like any other file. Depending on your project structure the include statement might look different.

In this example the headerfile is in the same directory as the main file.

```cpp 
// User defined header file.
#include "intquantitypproh.hpp"
```

### Using the header

To make the headerfile [intquantitypproh.hpp](/src/intquantitypproh.hpp) more flexible, i've created a namespace ```IntQuantityPpRoH``` which contains the class ```IntQuantityPp```. 

With this namespace, naming conflicts from other headerfiles are presumably rarer or will never occur.

Using the class inside your project works the following way ([main](/src/main.cpp)).

## License

[MIT](/LICENSE)