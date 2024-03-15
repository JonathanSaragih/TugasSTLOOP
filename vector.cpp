// Fig. 21.31: fig21_31.cpp
// Standard library search and sort algorithms.
#include <iostream>
using std::cout;
using std::endl;
#include <algorithm>       // algorithm definitions
#include <vector>          // vector class-template detinition
bool greater10(int value); // prototype
int main()
{
    const int SIZE = 10;
    int array[SIZE] = {10, 2, 17, 5, 16, 8, 13, 11, 20, 7};
    std::vector<int> integers;

    cout << "The initial size of integers is: "
         << integers.size()
         << "\nThe initial capacity of integers is: "
         << integers.capacity();

    // function push_back is in every sequence collection
    integers.push_back(2);
    integers.push_back(3);
    integers.push_back(4);
    cout << "\nThe size of integers is: " << integers.size()
         << "\nThe capacity of integers is: "
         << integers.capacity();
    cout << "\n\nOutput array using pointer notation: ";

    for (int *ptr = array; ptr != array + SIZE; ++ptr)
        cout << *ptr << ' ';
    cout << "\nOutput vector using iterator notation: ";
    printVector(integers);
    cout << "\nReversed contents of vector integers: ";

    std::vector<int>::reverse_iterator reverseIterator;
    for (reverseIterator = integers.rbegin();
         reverseIterator != integers.rend();
         ++reverseIterator)
        cout << *reverseIterator << ' ';
    cout << endl;
    return 0;
} // end main
// function template for outputting vector gtements
template <class T>
void printVector(const std::vector<T> sintegers2)
{
    std: :vector< T >: :const_iterator constIterator;
    for (constIterator = integers2.begin();
         constIterator != integers2.end();
         const Iterator++)
        cout << constIterator << !;
    end function printVector
}