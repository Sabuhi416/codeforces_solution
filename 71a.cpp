#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--) {
        string word;
        cin >> word;
        
        // If word length is <= 10, print as is
        if(word.length() <= 10) {
            cout << word << endl;
        }
        // Otherwise, abbreviate: first + count + last
        else {
            cout << word[0] << (word.length() - 2) << word[word.length() - 1] << endl;
        }
    }
    
    return 0;
}
