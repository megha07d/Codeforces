
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n;

    // testcases
    cin >> t;

    // output array
    string ans[t];

    // output array index
    int count = 0;

    while (count < t)
    {
        // array size
        cin >> n;

        // array
        int arr[n];

        // input
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // sort
        sort(arr, arr + n);

        // default initialize
        ans[count] = "Yes";

        // search - if - adj - same - return
        for (int k = 1; k < n; k++)
        {

            if (arr[k - 1] == arr[k])
            {
                ans[count] = "No";
                continue;
            }
        }
        count++;
    }

    for(int i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
    }

    return 0;
}