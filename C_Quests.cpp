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
    int n;
    cin >> n;
    // int k;
    int k;
    cin >> k;
    vi a(n);
    for (auto &it : a)
        cin >> it;
    vi b(n);
    // int maxb=0;
    for (auto &it : b)
    {
        cin >> it;
        // maxb = max(maxb,it);
    }
    int maxi = 0; // Variable to store the maximum experience points for subsequent completions
		int sum = 0; // Variable to store the cumulative experience points
		int ans = 0; 

		
		for (int i = 0; i < min(n, k); i++) {
			sum += a[i]; 
			maxi = max(maxi, b[i]); 
			ans = max(ans, sum + (k - (i + 1)) * maxi); 
		}

		cout << ans << endl;
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