#include <bits/stdc++.h> ///AC
#define ll long long
ll z, price = 0;
ll n[3] = {0}, p[3] = {0}, x[3] = {0};
int b = 0, s = 0, c = 0;
using namespace std;
ll solve(ll m)
{
    x[0] = b * m - n[0];
    x[1] = s * m - n[1];
    x[2] = c * m - n[2];
    if (x[0] < 0)
        x[0] = 0;
    if (x[1] < 0)
        x[1] = 0;
    if (x[2] < 0)
        x[2] = 0;
    price = p[0] * x[0] + p[1] * x[1] + p[2] * x[2];
    return price;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin >> a;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == 'B')
            b++;
        else if (a[i] == 'C')
            c++;
        else
            s++;
    }
    cin >> n[0] >> n[1] >> n[2];
    cin >> p[0] >> p[1] >> p[2];
    cin >> z;
    ll l = 0, r = 1e13, m, ans = 0, temp, f = 0;
    while (l <= r)
    {
        m = l + floor((r - l) / 2);
        ll q = solve(m);
        /// cout << l << " " << r << " " << q << endl;
        if (q < z)
            l = m;
        else
            r = m;
        ans = m;
        if (q == temp)
            f++;
        if (q == z || f > 10)
            break;
        temp = q;
    }
    cout << ans << endl;
    return 0;
}
