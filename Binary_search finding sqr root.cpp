#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<"Enter a number to find it's square root: "<<endl;
    double n;cin>>n;
    double l=0,r=n,m,ans;
    while(r-l>1e-8)
    {
        m=l+(r-l)/2;
        if(m*m>n) r=m;
        else l=m;
    }
    cout<<fixed<<setprecision(9);
    cout<<m<<endl;
}
