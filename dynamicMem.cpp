// DMA allows you to
// Set array size dynamically
// during run time
// rather than at compile time
// This helps when the program
// doesn't know in advance
// about the number of items 
// to be stored.


#include<iostream>
using namespace std;

int main(){
    // create a variable size;
    int size;
    int *ptr;

    cout << "Input a size: ";
    cin >> size;
    ptr = new int[size];

    for (int i = 0; i < size; i++){
        cin >> ptr[i];
    }
    for (int i = 0; i < size; i++){
        cout << ptr[i] << " ";
    }

    return 0;
}