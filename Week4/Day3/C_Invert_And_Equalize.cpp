#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) 
    {
        int n; cin >> n; 
        string s; cin >> s;

        int cnt = 0;       
        for (int i = 0; i < n; i++) 
        {
            if (i == 0 || s[i] != s[i - 1]) 
            {
                cnt++; 
            }
        }
        cout << cnt / 2 << '\n';
    }

    return 0;
}
