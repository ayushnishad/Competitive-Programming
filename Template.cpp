// author : ayush_nishad
// Road to Expert since : 30 Aug 2020 - Achieved on 12 Oct 2020
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define in insert
#define F first
#define S second
#define mod 1000000007
#define endl '\n'
#define all(x)  x.begin(),x.end()
#define w(x) int x;cin>>x; while(x-->0)
#define memset(a,b) memset(a,b,sizeof(a))
#define debug(x) cout << "[ " << #x  << " : " << x << " ]" << endl;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
/*
think fast
think simple
*/
void mysol()
{
    //ceil(n / 1.0);
}

int32_t main()
{
    fast();
    w(t)
    {
        mysol();
    }
    //cerr << sizeof(dp)*(1e-6) << " megabytes\n";
    return 0;
}
/*
imp stuff:
-make what you acess is valid if(m > 0)curr = a[0]; <-RuntimeError
-look for n == 0?
*/