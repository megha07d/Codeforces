// You are given three integers a, b, and c. Determine if one of them is the sum of the other two.

#include <iostream>
using namespace std;

int main()
{
    int t;

    int a, b, c;

    cin >> t;

    while (t--)
    {
        // input 3 numbers
        cin >> a >> b >> c;

        if ((a + b == c) || (a + c == b) || (b + c == a))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}