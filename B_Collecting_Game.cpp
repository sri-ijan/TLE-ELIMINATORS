#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<ll>;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

void solve() {
    int n;
    cin>>n;
    vi a(n);
    for(auto &it :a) cin>>it;
    vi score;
    for(int i=0;i<n;i++){
        int start = a[i];
        int cnt=0;
        vi b =a;
        for(int j=0;j<b.size();i++){
            if(i ==0 && b[0]>b[1]){
                 cnt++;
                 start+= b[1];

            }
        }
    }

}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}