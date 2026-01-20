#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<=3)
        {
            cout<<n<<endl;
            continue;
        }
        int num=n/2;
        if(n%2!=0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}