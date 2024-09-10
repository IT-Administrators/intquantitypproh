// Implementation file for the intquantitypproh module.
// Import necessary libraries.
#include <cassert>
#include <iostream>

// Import userdefined header file.
#include "intquantitypproh.hpp"

IntQuantityPpRoH::IntQuantityPp::IntQuantityPp()
{
}

void IntQuantityPpRoH::IntQuantityPp::Add(int el)
{
    if (IntQuantityPpRoH::IntQuantityPp::poscount < std::size(vec))
    {
        vec[IntQuantityPpRoH::IntQuantityPp::poscount] = el;
    }
    else
    {
        // Add element to vector. 
        vec.push_back(el);
    }
    // Position counter for quantity.
    ++IntQuantityPpRoH::IntQuantityPp::poscount;
}

void IntQuantityPpRoH::IntQuantityPp::AddUnique(int el)
{
    // Calling IsMember directly without the need to reference "this".
    // Only run when element is not member of quantity.
    if (!IsMember(el))
    {
        if (IntQuantityPpRoH::IntQuantityPp::poscount < std::size(vec))
        {
            vec[IntQuantityPpRoH::IntQuantityPp::poscount] = el;
        }
        else
        {
            // Add element to vector. 
            vec.push_back(el);
        }
        // Position counter for quantity.
        ++IntQuantityPpRoH::IntQuantityPp::poscount;
    }
}

void IntQuantityPpRoH::IntQuantityPp::Remove(int el)
{
    // Save position of element.
    int pos = Find(el);
    // Always true if quantity is not empty.
    if (pos > -1)
    {
        vec[pos] = vec[--IntQuantityPpRoH::IntQuantityPp::poscount];
    }
}

bool IntQuantityPpRoH::IntQuantityPp::IsMember(int el) const
{
    return Find(el) > -1;
}

int IntQuantityPpRoH::IntQuantityPp::Size() const
{
    return IntQuantityPpRoH::IntQuantityPp::poscount;
}

void IntQuantityPpRoH::IntQuantityPp::Print() const
{
    for (int i = 0; i < IntQuantityPpRoH::IntQuantityPp::poscount; i++)
    {
        std::cout << vec[i] << "  ";
    }
    std::cout << std::endl;
}

void IntQuantityPpRoH::IntQuantityPp::Clear()
{
    IntQuantityPpRoH::IntQuantityPp::poscount = 0;
}

int IntQuantityPpRoH::IntQuantityPp::GetMax() const
{
    // Check if quantity contains elements.
    assert(IntQuantityPpRoH::IntQuantityPp::poscount > 0);
    // Save first element.
    int res = vec[0];
    for (int i = 1; i < IntQuantityPpRoH::IntQuantityPp::poscount; i++)
    {
        // Check if element is higher than current highest. Overwrite if yes.
        if (vec[i] > res)
        {
            res = vec[i];
        }
    }
    return res;
}

int IntQuantityPpRoH::IntQuantityPp::GetMin() const
{
    // Check if quantity contains elements.
    assert(IntQuantityPpRoH::IntQuantityPp::poscount > 0);
    // Save first element.
    int res = vec[0];
    for (int i = 1; i < IntQuantityPpRoH::IntQuantityPp::poscount; i++)
    {
        // Check if element is smaller than current smallest. Overwrite if yes.
        if (vec[i] < res)
        {
            res = vec[i];
        }
    }
    return res;
}

int IntQuantityPpRoH::IntQuantityPp::Find(int el) const
{
    for (int i = 0; i < IntQuantityPpRoH::IntQuantityPp::poscount; i++)
    {
        if (vec[i] == el)
        {
            return i;
        }
    }
    // Not found.
    return -1;
}