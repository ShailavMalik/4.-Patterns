/*

1 2 3 
4 5 6 
7 8 9 

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j + (n * (i - 1)) << " ";
        }
        cout << endl;
    }

    return 0;
}