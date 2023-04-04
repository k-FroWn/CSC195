#include <iostream>

int main()
{
#pragma region variable inits
    int iVal1 = -1;
    short shVal2 = 0;
    int iVal2 = 42;
    float fVal = 34;
    char chVal = 'a';
    fVal = 3.14;
#pragma endregion

#pragma region printing vals
    std::cout << "iVal1 = " << iVal1 << ", address = " << &iVal1 << std::endl;
    std::cout << "shVal2 = " << shVal2 << ", address = " << &shVal2 << std::endl;

    std::cout << "*****\nSize of int = " << sizeof(iVal1) << std::endl;
    std::cout << "Size of short = " << sizeof(shVal2) << std::endl;
#pragma endregion

#pragma region pointer shenanigans
    /*
    pointer points to var
    pointer's value = pointed var's address
    dereferencing a pointer (*) gets value stored in address
    & before variable accesses that variable's address
    &iVal1 = iPtr
    iVa1 = *iPtr
    */

    int* iPtr = NULL; // init Ptr var
    iPtr = &iVal1; // set pointer to address of variable
    char* myCharPtr = (char*)iVal1;
    
    *iPtr = 18; // modifies value stored in address
    
    std::cout << "*****\nValue pointed to by iPtr = " << *iPtr << std::endl;
    std::cout << "New value of iVal1 = " << iVal1 << ", iVal1 address = " << &iVal1 << std::endl;
    std::cout << "Address of iPtr = " << &iPtr << std::endl;
    // std::cout << "*****\nSome value is: " << *(iPtr - 6) << std::endl; // gets value stored in iVal's address - 6
    // std::cout << "Strange stuff" << 
    
    //heap gaming
    char* cTemp = NULL;
    cTemp = (char*)malloc(20); // allocates 20 bytes of heap
    memset(cTemp, '\0', 20);
#pragma endregion
}