#include<bits/stdc++.h>
#define ll long long int
#define fi(n) for(ll i=0; i<n; i++)
#define fan vector<ll> a(n); for(ll i = 0;i<n;i++){cin >> a[i];}
#define nn ll n; cin >> n;
#define nk ll n,k; cin >> n>>k ;

using namespace std;
const int m = 1e5;


signed main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    nk;
    bitset<m> can;
    can[0] = 1;
    fi(n){
        int x;
        cin >> x ;
        can |= can<<x;
    }
    if(can[k])cout << "YES";
    else{cout << "NO";}
    
    return 0;
}

