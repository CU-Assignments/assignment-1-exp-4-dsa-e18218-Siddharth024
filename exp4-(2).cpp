#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {  
    if (needle.empty()) 
        return 0;
    
    for (int i = 0; i <= haystack.size() - needle.size(); i++) { 
        if (haystack.substr(i, needle.size()) == needle) { 
            return i; 
        } 
    }
    return -1; 
}

int main() { 
    string haystack, needle;  

    cout << "Enter the haystack string: ";
    cin >> haystack;   

    cout << "Enter the needle string: ";
    cin >> needle; 

    int index = strStr(haystack, needle); 
    
    if (index != -1) { 
        cout << "The first occurrence of \"" << needle << "\" in \"" << haystack 
             << "\" is at index: " << index << endl; 
    } else { 
        cou
