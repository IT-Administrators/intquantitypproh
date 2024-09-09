/*
This header file contains the function/method declarations for the
intquantitypproh module.
*/

// Conditional pre processor directive.
// Include guard to prevent importing headerfile more than once.
#ifndef INTQUANTITYPPROH_H
#define INTQUANTITYPPROH_H

#include <vector>

/* Created a namespace to use it in larger projects. 
The class and its methods can be accessed in two ways: 
- Direct call:
    IntQuantityPpRoH::IntQuantityPp::Methodname(){}

Using the direct call, only the specified class/method inside that namespace is called.

- Using directive:
    using namespace IntQuantityPpRoH;
    IntQuantityPp::Methodname(){}

The using directive imports the complete namespace, even the parts that might be
unnessary. */

namespace IntQuantityPpRoH
{
    class IntQuantityPp {
        public:
            // Default constructor.
            IntQuantityPp();

            // Add element to qunatity.
            void Add(int el);

            // Remove element from quantity.
            void Remove(int el);

            // Check if element is member of quantity.
            [[nodiscard]] bool IsMember(int el) const;
            
            // Get size of quantity.
            [[nodiscard]] int Size() const;

            // Print quantity to stdout.
            void Print() const;

            // Clear quantity. Remove all elements.
            void Clear();

            // Get max element in quantity.
            [[nodiscard]] int GetMax() const;

            // Get min element in quantity.          
            [[nodiscard]] int GetMin() const;          
        
        private:
            // Position counter.
            int poscount{0};

            // Quantity vector.
            std::vector<int> vec;

            // Find element in quantity.
            [[nodiscard]] int Find(int el) const;
    };
} 
#endif