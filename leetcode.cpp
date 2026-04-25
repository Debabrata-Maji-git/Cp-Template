#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
#include <numeric>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <cmath>
#include <cassert>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <bitset>
#include <climits>
#include <iomanip>
#include <list>
using namespace std;

// ============== pbdf ==================
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

// ==================== Type aliases ====================
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef map<ll, ll> ml;
// typedef string S ;
typedef set<int> si;
typedef set<long long> sl;
// ==================== Fast I/O ====================
// #define fast_io
//     ios::sync_with_stdio(false);
//     cin.tie(NULL)

// ==================== Shorthand macros ====================
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define len(x) ((int)(x).size())
#define mp(x, y) make_pair((x), (y))
#define endl '\n'

// ==================== Prime sieve ====================
ll gcdll(ll a, ll b) { return b ? gcdll(b, a % b) : a; }
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
ll lcmll(ll a, ll b) { return a / gcdll(a, b) * b; }
ll setbitsll(ll x) { return __builtin_popcountll(x); }
// =================== My utilities ===================
const ll inf = 1e18 + 7;
const int smallinf = 1e5 + 7;
const int MOD = 1e9 + 7;
// ==================== DEBUG UTILITIES ====================
void debug( char ch ){ cout << ch << " " ; }
void debug( int x){ cout << x << " " ; }
void debug( double x){ cout << x << " " ; }
void debug( bool x){ cout << x << " " ; }
void debug( pii p ){ cout << p.ff << " " << p.ss << endl ;}
void debug( string x , string name = "str"){ cout << name << " : " << x << endl ;}
void debug( vi a , string name = "vecInt"){  cout << name << " : " ; for(int x : a) cout << x << " " ; cout << endl ;}
void debug( vl a , string name = "vecLong"){  cout << name << " : " ; for(int x : a) cout << x << " " ; cout << endl ;}
void debug( vc a , string name = "vecChar"){  cout << name << " : " ; for(int x : a) cout << x << " " ; cout << endl ;}
