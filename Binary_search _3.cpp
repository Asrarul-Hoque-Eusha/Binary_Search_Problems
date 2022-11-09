#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<"Enter array size: "<<endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter Array elements 1st portion in increasing order & 2nd portion in decreasing: "<<endl;
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0,r=n-1,mid,ans=0;
    while(l<r)
    {
        mid=l+(r-l)/2;
        if(a[mid]>a[mid-1])   l=mid+1;
        else    r=mid-1;
        if(a[ans]<a[mid])   ans=mid;
        else    break;
    }
    cout<<a[ans]<<"\n";
    return 0;
}
