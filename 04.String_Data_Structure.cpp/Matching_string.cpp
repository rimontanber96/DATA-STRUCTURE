#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, pattern;

    cout << "Enter Text: ";
    getline(cin, text);

    cout << "Enter Pattern: ";
    getline(cin, pattern);

    int n = text.length();
    int m = pattern.length();
    bool found = false;

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
//         Text:     h e l l o
// Pattern:  l l
// i = 0
// text[i+j]  pattern[j]
// text[0+0]=h pattern[0]=l → mismatch → break


        if (j == m) {
            cout << "Pattern found at index " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Pattern not found";
    }

    return 0;
}
