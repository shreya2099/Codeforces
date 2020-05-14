#include <bits/stdc++.h>
#define SZ(x) ((int)(x).size())
typedef long long ll;
typedef long double ld;
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); cout.setf(ios::fixed); cout.precision(20);

ll t;
cin >> t;
while(t--)
{
    
 ll n,k,i;
 cin >> n >> k;
 for(i=2;i<=n;i++)
 {if(n%i==0)
     break;
 }
    
  n=n+i;
  if(k==1)
  cout << n << endl;
  else
  {cout << n+(k-1)*2 << endl;}
    
}

}