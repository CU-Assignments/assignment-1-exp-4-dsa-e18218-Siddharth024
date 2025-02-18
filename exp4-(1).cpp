#include <iostream>
#include <string>
using namespace std;

bool rotateString(string s, string goal) {
    if (s.length() != goal.length())
        return false;
    s += s;
    return s.find(goal) != string::npos;
}

int main() {
    string s, goal;
    
    cout << "Enter the first string (s): ";
    cin >> s;
    
    cout << "Enter the second string (goal): ";
    cin >> goal;
    
    if (rotateString(s, goal)) {
        cout << "Yes, the string s can be rotated to become the string goal." << endl;
    } else {
        cout << "No, the string s cannot be rotated to become the string goal." << endl;
    }

    return 0;
}
