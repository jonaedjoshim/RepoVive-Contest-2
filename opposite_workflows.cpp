#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long sumA = 0,
                  sumB = 0,
                  mxA = 0,
                  mxB = 0;

        for (int i = 0; i < n; i++)
        {
            long long a;
            char s;

            cin >> a >> s;

            if (s == 'A')
            {
                sumA += a;
                mxA = max(mxA, a);
            }
            else
            {
                sumB += a;
                mxB = max(mxB, a);
            }
        }

        long long total = sumA + sumB;

        long long extra = max(0LL, mxA - sumB);
        extra = max(extra, mxB - sumA);

        cout << total + extra << endl;
    }

    return 0;
}