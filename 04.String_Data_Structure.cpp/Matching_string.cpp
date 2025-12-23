#include <iostream>
#include <string>
using namespace std;

int main() {
    int j;
    string text, pattern;

    cout << "Enter Text: ";
    getline(cin, text);

    cout << "Enter Pattern: ";
    getline(cin, pattern);

    int n = text.length();
    int m = pattern.length();
    bool found = false;

    for (int i = 0; i <= n - m; i++) {
        
        for (int j = 0; j < m; j++) {
            if (text[i + j] != pattern[j])
                break;
        }
        if ( j== m) {
            cout << "Pattern found at index " << i << endl;
            found = true;
        }
    }

    if (!found)
        cout << "Pattern not found" << endl;


}
