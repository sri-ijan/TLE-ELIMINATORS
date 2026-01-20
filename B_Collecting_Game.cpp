#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back({x, i});
    }
    vll pref(n);
    sort(all(a));
    pref[0] = a[0].first;
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + a[i].first;
    }
    vll ans(n);
    for (int i = 0; i < n; i++)
    {
        int j = i;
        int found = i;
        while (j < n)
        {
            pair<ll, ll> temp = {pref[j] + 1, INT_MIN};
            ll idx = lower_bound(a.begin(), a.end(), temp) - a.begin();
            idx--;
            if (idx == j)
            {
                break;
            }
            found += idx - j;
            j = idx;
        }
        ans[a[i].second] = found;
    }
    for (int i = 0; i < n; i++)
    { 
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}