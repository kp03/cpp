// Pointer is a variable 
// whose value is the address
// of another variable.
#include<iostream>
using namespace std;

int main(){
    int var = 5;
    // datatype pointername*;
    int *ip;
    ip = &var;
    cout << "variable address: " << &var << endl;
    cout << "variable value: " << var << endl;
    cout << "adress being stored in pointer: " << ip << endl;
    // This is where the pointer is pointing to
    cout << "value being stored pointer: " << *ip << endl;
    cout << "address of the pointer " << &ip << endl;

    return 0;
}