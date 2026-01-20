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
    string s;
    cin>>s;
    vector<bool>ch(26,false);
    ll ans=0;
    for(int i=0;i<s.length();i++){
        char st = s[i]-'a';
        if(ch[st] == false){
            ans+= n-i;
            ch[st] = true;
        }
        
    }
    cout<<ans<<endl;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}