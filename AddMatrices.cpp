#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define ep 1e-6
#define nep -1e-6
#define MOD 1000000007
#define loop(i,s,e) for(ll i=s;i<=e;i++)
#define loopr(i,s,e) for(ll i=s;i>=e;i--)
using namespace std;
ll n,d,counti=1;
ll mini(ll a,ll b)
{
  if(a<b)
    return a;
  else
    return b;
}
ll maxi(ll a,ll b)
{
  if(a>b)
    return a;
  else
    return b;
}
void fast(){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
ll gcd(ll a,ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

int main(){
	ll m,n;
	cin >> n >> m;
	ll a[n][m],b[n][m],c[n][m];
	loop(i,0,n-1)
	{
		loop(j,0,m-1)
		{
			cin >> a[i][j];
		}
	}
	loop(i,0,n-1)
	{
		loop(j,0,m-1)
		{
			cin >> b[i][j];
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}

