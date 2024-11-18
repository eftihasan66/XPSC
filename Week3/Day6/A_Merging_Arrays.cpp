#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; 
    cin >> n >> m;
    vector<int> a(n), b(m), ans;
    
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    for(int i = 0; i < m; i++) 
        cin >> b[i];

    int l = 0, r = 0;

    while (l < n && r < m) 
    {
        if (a[l] < b[r]) 
        {
            ans.push_back(a[l]);
            l++;
        } 
        else 
        {
            ans.push_back(b[r]);
            r++;
        }
    }

    while (l < n) 
    {
        ans.push_back(a[l]);
        l++;
    }

    while (r < m) 
   {
        ans.push_back(b[r]);
        r++;
    }

  for(auto x : ans) cout <<x <<" ";

    return 0;
}