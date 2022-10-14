#include <bits/stdc++.h>
using namespace std;

int main()
{
    // test cases
    int t;

    cin >> t;

    char answer = 'B';

    string each_row;

    while (t--)
    {
        // getchar();
        for (int i = 0; i < 8; i++)
        {
            cin >> each_row;
            if (each_row == "RRRRRRRR")
                answer = 'R';
        }
    }

    cout << answer << endl;

    return 0;
}