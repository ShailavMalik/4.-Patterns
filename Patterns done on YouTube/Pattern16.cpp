/*

A 
B C 
D E F 
G H I J 

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int count = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(count) << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}