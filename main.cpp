#include <iostream>
using namespace std;

int main()
{
    int n, m;
    char letter;
    // TODO: ask user for input
    cin >> n;
    m = n;

    // TODO: outer loop for each row
    for (int i = 0; i <= n - 1; i++){
        for (int j = n - 1 - i; j <= n -1; j++){
            letter = 65;
            if (m == n){
                for (int k = n; k <= n; k++){
                letter = 65 + 1 ;
                }
            }
            cout << letter << " ";
        }
        cout << endl; 
    }

        // TODO: inner loop to print letters for this row

            // TODO: print the letter for this column

        // TODO: print newline after each row


    return 0;
}
