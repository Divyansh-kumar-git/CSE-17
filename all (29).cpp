#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    if (s1 == s2) {
        cout << s1 << " " << s2;
    }
    else if (s1.length() > s2.length()) {   
        for (char ch : s1) {
            cout << ch << " ";             
        }
    }
    else {
        cout << s2.length();              
    }

    return 0;
}

