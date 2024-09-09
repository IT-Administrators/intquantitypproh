/*
This file is the driver file to illustrate the implementation of 
intquantitypproh.hpp.

Compile with (from src):
g++ main.cpp intquantitypproh.cpp -o iqroh.exe
*/

#include "intquantitypproh.hpp"

#include <iostream>

int main()
{
    IntQuantityPpRoH::IntQuantityPp quant;
    std::cout << "Adding integers from (5,-3)." << std::endl;
    for (int i = 5; i > -3; i--)
    {
        quant.Add(i);
    }
    quant.Print();
    // Adding single number to quantity.
    std::cout << "Adding single number to quantity." << std::endl;
    quant.Add(-3);
    quant.Print();
    std::cout << "Size of current quantity is" << " " << quant.Size() << std::endl;
    std::cout << "4 is member of quantity" << " " << quant.IsMember(4) << std::endl;
    std::cout << "-11 is member of quantity" << " " << quant.IsMember(-11) << std::endl;
    std::cout << "Smallest element is:" << " " << quant.GetMin() << std::endl;
    std::cout << "Highest element is:" << " " << quant.GetMax() << std::endl;
    quant.Print();
    std::cout << "Removing element." << std::endl;
    quant.Remove(5);
    quant.Print();
    
    // Remove all elements from quantity.
    quant.Clear();
    std::cout << "Quantity is empty." << std::endl;
    quant.Print();
}