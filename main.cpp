#include <iostream>
using namespace std;

int main()
{
    int n, m;
    char letter;
    // TODO: ask user for input
    cin >> n;
    letter = 65;
    m = letter;
    

    
    // TODO: outer loop for each row
    for (int i = 0; i <= n - 1; i++){
        for (int j = n - 1 - i; j <= n -1; j++){
        
            cout << letter << " "; 
            for (int k=0; k<=n; k++){
                letter = m + 1;
            }
    
        }

        cout << endl; 
    }

        // TODO: inner loop to print letters for this row

            // TODO: print the letter for this column

        // TODO: print newline after each row


    return 0;
}
