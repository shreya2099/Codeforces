#include <bits/stdc++.h>
#define SZ(x) ((int)(x).size())
typedef long long ll;
typedef long double ld;
using namespace std;


vector<int> v[100000+100];

 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); cout.setf(ios::fixed); cout.precision(20);

for(int i=1;i<=50000;i++)
{
   for(int j=2;i*j<=100000;j++)
   {v[i*j].push_back(i);}
}

ll t;
cin >> t;
while(t--)
{
    ll n;
    cin >> n;
    vector<ll> a(n+1);
    for(ll i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++)
    {arr[i]=1;}
    for(ll i=2;i<=n;i++)
    {
        for(ll j=0;j<v[i].size();j++)
        {
            if(a[v[i][j]]<a[i])
            {
                arr[i]=max(arr[i],arr[v[i][j]]+1);
            }
        }
        
    }
    int mx=arr[1];
    for(ll i=1;i<=n;i++)
    {mx=max(mx,arr[i]);}
    
    cout << mx << endl;
    
    
    
}

}