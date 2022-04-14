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
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}

template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v) {
	cout << "["; for(int i = 0; i < (int) v.size(); i++) {if (i) cout << ", "; cout << v[i];} return cout << "]\n";
}

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


void solve(vector<int> &v, int n, bool *flags, vector<int> &perm){
	if((int) perm.size() == n){
		cout << perm;
	}
	
	for(int i = 0; i < n; i++){
		if(flags[i] == true) continue;
		perm.push_back(v[i]);
		flags[i] = true;
		solve(v, n, flags, perm);
		perm.pop_back();
		flags[i] = false;
	}
	
	
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	int tc = 1;
	for(int ff = 1; ff <= tc; ff++){
		cout << "Case #" << ff << ": ";
		vector<int> v = {1, 2, 3 ,4};
		int n = 4;
		bool flags[n] = {false};
		vector<int> perm;
		solve(v, n, flags, perm);
	}
	return 0;
}
