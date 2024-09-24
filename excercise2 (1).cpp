#include <iostream>
#include <cassert>
#include <string>

void inputnumbers (int ptr) {

    std::cout << "enter numbers\n";

}


int main () {

    std::cout << "enter a size";

    int size;

    std::cin >> size;

    int *ptr = new int[size];                   // alocate new memenory for array

    void inputnumbers (int ptr);                // to get elements

    delete [] ptr;                              // deallocate array

}

