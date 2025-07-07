#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

ostream & symbol(ostream & output)
{
    return output << "Rs";
}

int main()
{
    int q;
    typedef int* int_ptr;

    int* p = int_ptr(q);

    cout << "size of char is: " << sizeof(char) << endl;
    cout << "size of int is: " << sizeof(int) << endl;
    cout << "Hello world" << endl;
    cout << "New first line" << endl;
    cout << "New second line" << endl;

    return 0;
}