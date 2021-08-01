#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll n;
string s;

ll solve();
ll str_to_int(string s);

int main()
{
    cout<<solve()<<'\n';
    return 0;
}
ll solve()
{
    cin >> s;
    if(s == "f")
    {
        ll x = solve();
        return x * 2 - 3;
    }
    else if(s == "g")
    {
        ll x = solve();
        ll y = solve();
        return x * 2 + y - 7;
    }
    else if(s == "h")
    {
        ll x = solve();
        ll y = solve();
        ll z = solve();
        return 3 * x - 2 * y + z;
    }
    else
        return str_to_int(s);
}
ll str_to_int(string s)
{
    int integer = std::stoi(s);
    return integer;
}
