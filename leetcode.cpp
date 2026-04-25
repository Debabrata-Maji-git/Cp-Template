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

// Print vector
template <typename T>
void print_vec(const vector<T> &v, const string &name = "vec")
{
    cout << name << ": [";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i < v.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;
}

// Print 2D vector
template <typename T>
void print_vec2d(const vector<vector<T>> &v, const string &name = "vec2d")
{
    cout << name << ":" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "  [";
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j];
            if (j < v[i].size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }
}

// Print set
template <typename T>
void print_set(const set<T> &s, const string &name = "set")
{
    cout << name << ": {";
    int cnt = 0;
    for (const auto &x : s)
    {
        cout << x.ff << " " << x.ss;
        if (cnt < s.size() - 1)
            cout << ", ";
        cnt++;
    }
    cout << "}" << endl;
}

// Print map
template <typename K, typename V>
void print_map(const map<K, V> &m, const string &name = "map")
{
    cout << name << ": {";
    int cnt = 0;
    for (const auto &p : m)
    {
        cout << p.first << ": " << p.second;
        if (cnt < m.size() - 1)
            cout << ", ";
        cnt++;
    }
    cout << "}" << endl;
}

// Print list
template <typename T>
void print_list(const list<T> &l, const string &name = "list")
{
    cout << name << ": [";
    int cnt = 0;
    for (const auto &x : l)
    {
        cout << x;
        if (cnt < l.size() - 1)
            cout << ", ";
        cnt++;
    }
    cout << "]" << endl;
}

// Print string
void print_string(const string &s, const string &name = "str")
{
    cout << name << ": \"" << s << "\"" << endl;
}

// Print single variable
template <typename T>
void print_var(const T &x, const string &name = "var")
{
    cout << name << ": " << x << endl;
}

// ==================== VARIADIC DEBUG MACRO ====================
// Usage: debug(a, b, c, vec, str, set_var)

#define debug(args...) debug_impl(#args, args)

void debug_impl(const string &names)
{
    cout << endl;
}

template <typename T, typename... Args>
void debug_impl(const string &names, T value, Args... args)
{
    // Get first variable name
    int pos = 0;
    while (pos < names.size() && names[pos] != ',')
        pos++;

    string var_name = names.substr(0, pos);
    // Trim whitespace
    var_name.erase(0, var_name.find_first_not_of(" \t\n\r\f\v"));
    var_name.erase(var_name.find_last_not_of(" \t\n\r\f\v") + 1);

    cout << var_name << " = " << value << endl;

    // Move to next part
    if (pos < names.size())
    {
        string rest = names.substr(pos + 1);
        debug_impl(rest, args...);
    }
}
// ================ MY SOLUTION =======================
class Solution {
public:
    ll mod = 1e9 + 7 ;
    int sumSubseqWidths(vector<int>& nums) {
       sort(all(nums));
       ll pow = 1ll ;
       ll highAns =0ll;
       for(int x : nums){
            highAns = ( highAns + pow * x) % mod ;
            pow = ( pow * 2ll) % mod ;
       }
       sort(rall(nums));
       ll lowAns =0ll; pow = 1ll ;
       for(int x : nums){
            lowAns = ( lowAns + pow * x) % mod ;
            pow = ( pow * 2ll) % mod ;
       }
       ll ans = ( highAns - lowAns) % mod ;
       ans = ( ans + mod ) % mod ;
       return ans ;
    }
};