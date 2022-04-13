//created by gravitorious
#include <bits/stdc++.h>
using namespace std;

#ifdef XOX
#include "/home/nikos/gravitons/debug.h"
#else
#define debug(...) 42
#endif


using ll = long long;
using db = long double;

using vi = vector<int>;
using pi = pair<int,int>;
using pl = pair<ll,ll>;
using pd = pair<db,db>;
template<class T> using pq = priority_queue<T>;
template<class T> using pqg = priority_queue<T, vector<T>, greater<T>>;
 

#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend() 
#define sor(x) sort(all(x)) 
#define rsz resize
#define ins insert 
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()
#define lb lower_bound
#define ub upper_bound

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5;
const ll BIG = 1e18; 
const db PI = acos((db)-1);
const db error = 1e-9;

#define each(a,x) for (auto& a: x)

ll cdiv(ll a, ll b) { return a/b+((a^b)>0&&a%b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a/b-((a^b)<0&&a%b); } // divide a by b rounded down

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

long long myRand(long long B) {
	//0 to B-1
	return (unsigned long long)rng() % B;
}

int myUniRand(int a, int b){
	//a to b
	uniform_int_distribution<int> distribution(a,b);
	return distribution(rng);
}
 




void solve(vector<int> &v, int i, int n){

	if(i > n) return;
		
	v.push_back(i);
	for(auto& x: v) cout << x << " ";
	cout << "\n";
	i++;
	solve(v, i, n);
	v.pop_back();
	solve(v,i, n);
	
}



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	
	int tc;
	cin >> tc;
	for(int ff = 1; ff <= tc; ff++){
		cout << "Case #" << ff << "\n";
		int n;
		cin >> n;
		vector<int> v;
		solve(v, 1, n);
	}
	
	
	return 0;
}