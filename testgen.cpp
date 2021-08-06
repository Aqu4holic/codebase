// author: BlackWhite
#include <bits/stdc++.h>
using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

#define debugg(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) \
	for ( \
		auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); \
		blockTime.second; \
		debugg("%s: %d ms\n", d, (int)chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false \
	)

#define int long long
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define FORC(v, a) for(auto v : a)
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
#define rand rd
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int oo = 0x3f3f3f3f;
const string yes = "YES";
const string no = "NO";
const ld PI = acos(-1.0);
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef pair<ii,ii> iv;
typedef vector <vector<int>> vdp;
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define clrscr system("cls");
#define ENDL printf("\n");
#define f first
#define s second
#define pb push_back
#define ins insert
#define el '\n'

#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define NAME " "
void io(int x){
	if (!x){
		freopen(NAME".inp", "r", stdin);
		return;
	}
	if (x == 1){
		freopen(NAME".inp", "r", stdin);
		freopen(NAME".out", "w", stdout);
		return;
	}
	freopen(NAME".out", "w", stdout);
}

const int NTEST = ;

ll Rand(ll l, ll h) {
	assert(l <= h);
	return l + rd() * 1LL * rd() % (h - l + 1);
}

signed main()
{
	Fast
	// io(0);

	srand(time(NULL));

	for (int iTest = 1; iTest <= NTEST; iTest++){
		ofstream inp((NAME + ".inp")).c_str();
		// testgen code here

		inp.close();

		system((NAME + ".exe")).c_str();
		system((NAME + "_trau.exe")).c_str();

		/*
			viết 2 phần mềm, 1 phần mềm là thuật đúng, 1 phần mềm là thuật trâu
		*/

		if (system(("fc" + NAME + ".out" + NAME + ".ans")).c_str() != 0){
			cout << "Test " << iTest << ": WRONG!\n";
			continue;
		}

		cout << "Test " << iTest << ": CORRECT!\n";
	}
	
	return 0;
}