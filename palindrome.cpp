
/*
 * Check an input is palindrom or not
 * 121 is palindrome
 * 212 is palindrome
 * 123 is not palindrome
*/

#include<iostream>
using namespace std;

bool isPalindrome(int);

int main(){

    cout << "Enter a number: ";
    int n;
    cin >> n;
    bool res = isPalindrome(n);
    if (res == true) cout << n << " is palindrome!" << endl;
    else cout << n << " is not palindrome";
}

bool isPalindrome(int n){
    int digit, rev = 0;
    int flag = n;
    while (n != 0){
        digit = n % 10;
        rev = (rev * 10) + digit;
        n = n/10;
    }
    if (flag == rev) return true;
    return false;
}