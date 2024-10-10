#include <iostream>
using namespace std;

int main(){
    int *p;
    int a = 2, b = 3;
    cout << &a << endl << &b << endl << &p << endl;
    p = &a;
    cout << p << endl << &p << endl << *p << endl;
}