#include<bits/stdc++.h>

using namespace std;

#define gc getchar_unlocked
#define fo(i,n) for(auto i=0;i<n;i++)
#define Fo(i,k,n) for(auto i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define mx max_element
#define mn min_element
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
	return uid(rang);
}

template<typename T> T gcd(T a, T b) { return (b == 0) ? abs(a) : gcd(b, a % b); }
template<typename T> inline T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<typename T> inline T sqr(T x) { return x * x; }
 
inline string tolower(string s) { tr(it, s) *it = tolower(*it); return s; }
inline string toupper(string s) { tr(it, s) *it = toupper(*it); return s; }
inline int todecimal(string s) { int a = 0; for(int i; i<s.size(); i++) a = 2*a + ( s[i] - '0' ); return a; }
inline string tobinary( int a) { string s; while( a != 0 ) { s = (char)(a%2+'0') + s; a>>=1; } return s; }
inline int isvowel( char c ) { if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ) return 1; return 0; }
inline int isprime( int a ) {  for ( int i = 2; i*i <= a; i++ ) if (!(a%i)) return 0; return 1; }

int mpow(int base, int exp); 
void ipgraph(int n, int m);
void dfs(int u, int par);

const int mod = 1'000'000'007;
const int N = 3e5, M = N;

/* ************************************************************************************************************** */

char c;
string s;
int a[N];
int dp[N];
vi v;
vi g[N];

/* ************************************************************************************************************** */

void ipgraph(int n, int m){
	int i, u, v;
	while(m--){
		cin>>u>>v;
    u--, v--;
		g[u].pb(v);
		g[v].pb(u);
	}
}

void dfs(int u, int par){
  // leafy stuff

	for(int v:g[u]){
		if (v == par) continue;
		dfs(v, u);
    // children stuff

	}
  // parental stuff

}

void solve() {
  ll i=0, j=0, n=0, m=0, in=0, ans=0;

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }
    
    return 0;
}
