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
#define mp make_pair
#define eb emplace_back
#define ft front()
#define bk back()
#define lb lower_bound
#define ub upper_bound

const int MOD = 1e9+7; // 998244353;
const ll INF = LLONG_MAX; //9223372036854775007 > 9e18
const ll MINF = LLONG_MIN;
const db PI = acos((db)-1);
const db error = 1e-9;

#define each(a,x) for (auto& a: x)
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}

template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v) {
	cout << "["; for(int i = 0; i < v.size(); i++) {if (i) cout << ", "; cout << v[i];} return cout << "]";
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



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	int tc;
	cin >> tc;
	for(int ff = 1; ff <= tc; ff++){
		int n, el;
		cin >> n;
		vector<int> v;
		for(int i = 0; i < n; i++){
			cin >> el;
			v.push_back(el);
		}
		
		int flag = false;
		int even = false;
		int odd = false;
		
		if(v[0] % 2 == 0) even = true;
		if(v[1] % 2 == 0) odd = true;
		
		for(int i = 0; i < n; i+=2){
			if(v[i] % 2 == 0 && even == false){
				flag = true;
				break;
			}
			if(v[i] % 2 != 0 && even == true){
				flag = true;
				break;
			}
		}
		
		if(flag == true){
			 cout << "NO" << "\n";
			 continue;
		 }
		
		for(int i = 1; i < n; i+=2){
			if(v[i] % 2 == 0 && odd == false){
				flag = true;
				break;
			}
			if(v[i] % 2 != 0 && odd == true){
				flag = true;
				break;
			}
		}
		
		if(flag == true){
			 cout << "NO" << "\n";
			 continue;
		 }
		
		cout <<"YES" << "\n";
		
	}
	
	return 0;
}
