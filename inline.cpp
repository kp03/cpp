// If a function is inline
// the compiler places a copy of the code
// of that function at each point where
// the function is called at compiled time

// Any change to an inline function
// could require the function to be recompiled
// because compiler would need
// to replace all the code once again
// otherwise it will continue with old functionality

#include<iostream>
using namespace std;

//Inline
inline int add(int a, int b){
    return (a+b);
}

//Default parameter function
// variable must be defaulted from right to left
int sum(int a, int b, int c= 0, int d = 5){
    return (a+b+c+d);
}

int main(){
    cout << "Sum of 4, 5: " << add(4,5) << endl;
    cout << "Sum of 1,2,0,5: " << sum(1,2) << endl;
    cout << "Sum of 1,2,3,4: " << sum(1,2,3,4) << endl;
    return 0;
}