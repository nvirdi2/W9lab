// Name: Navdeep Virdi
// Seneca email: nvirdi2@myseneca.ca
// Student ID: 166485193
// Date: Feb 18th, 2021

//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#ifndef SDDS_SEARCHNLIST_H_
#define SDDS_SEARCHNLIST_H_

#include "Employee.h"
#include "Collection.h"
#include "ReadWrite.h"
#include "Car.h"
#include "Student.h"

#include <iostream>

namespace sdds 
{

//    --Search template and bool--     

    template<typename T, typename U>

    bool search(Collection<T>& Object, T array[], int S, U Key)
    {
        int x;
        bool finished = false;

        for (x = 0; x < S; x++)
        {
            if(array[x] == Key)
            {
                finished = true;
                Object.add(array[x]);
            }
        }
        return finished;
    }

//    --listArrayElements template and void--   

    template<typename T>

    void listArrayElements(const char* name, const T array[], int S)
    {
        int x;

        std::cout << name << std::endl;

        for(x = 0; x < S; x++)
        {
            std::cout << x+1 << ": " << array[x] << std::endl;
        }
    }
}
#endif //!SDDS_SEARCHNLIST_H_
