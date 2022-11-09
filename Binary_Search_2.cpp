#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<"Enter array size: "<<endl;
    int n; cin>>n;
    int a[n];cout<<"Enter a rotated array after sorting: "<<endl;
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0,r=n-1,mid,ans;
    while(l<r)
    {
        mid=l+(r-l)/2;
        if(a[mid]>a[r]) l=mid+1;
        else r=mid-1;
        ans=mid;
        //cout<<l<<" "<<r<<endl;
    }
    cout<<a[ans]<<endl;
    return 0;
}
