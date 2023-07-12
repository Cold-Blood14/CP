#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll int s=0,d=0,i,n,j;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    ll int m=n;
    m--;
    n--;
    for(i=0,j=0; m>=j; i++)
    {
        if(i%2==0)
            s+=max(a[m],a[j]);
        else
            d+=max(a[m],a[j]);
        if(max(a[m],a[j])==a[j]) j++;
        else m--;
    }
    cout<<s<<" "<<d;
    return 0;
}
