/*Author:02-06-2022
Created On:10:38 A.M
*/
By Sasi024, contest: Codeforces Round #794 (Div. 2), problem: (C) Circular Local MiniMax, Accepted.
#include<bits/stdc++.h>
using namespace std;

#define pb push_back

#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")

typedef long double ld;
typedef long long int ll;
typedef vector<ll> vl;

const ll inf = 1e9;
const ll M = 1e9;
const ld pi = atan2(0, -1);
const ld eps = 1e-4;

void solve(){
	ll n,t=0,l=0,k=0;
	cin>>n;
	vl a(n),b(n),c(n);
	for(auto &it:a) cin>>it;
	sort(a.begin(),a.end());
	for(int i=0;i<a.size();i++){
		if(i<(a.size()/2)+a.size()%2){
			b[t]=a[i];
			t++;
		}
		else{
			c[l]=a[i];
			l++;
		}
	}
	t=0;
	l=0;
	for(int i=0;i<a.size();i++){
		if(i%2==0){
			a[i]=b[t];
			t++;
		}
		else{
			a[i]=c[l];
			l++;
		}
	}
	for(int i=0;i<a.size();i++){
	    if(i==0){
	        if(a[0]>a[n-1]&a[0]>a[1]||a[0]<a[n-1]&a[0]<a[1])
	        k++;
	    }
	    else if(i==n-1){
	        if(a[n-1]>a[0]&a[n-1]>a[n-2]||a[n-1]<a[0]&a[n-1]<a[n-2])
	        k++;
	    }
		else{
		    if(a[i]>a[i-1]&a[i]>a[i+1]||a[i]<a[i-1]&a[i]<a[i+1]){
			k++;
		    }
		}
	}
	if(k==n){
		cout<<"YES"<<endl;
		for(auto &it:a) cout<<it<<" ";
	}
	else cout<<"NO";
}

bool tc=true;

signed main(){
	int tt=1;
	if(tc){
		cin>>tt;
	}
	while(tt--){
		solve();
		cout<<endl;
	}
	return 0;
}
