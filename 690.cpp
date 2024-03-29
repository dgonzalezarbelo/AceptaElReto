#include <bits/stdc++.h>
#pragma warning (disable : 4996)
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define fi first
#define se second
#define mp make_pair

const double EPS = 1e-9;
const double INF = 1e9; //1e18 tambien suele ir bien
using ll = long long int;
using ii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vii = vector<ii>;
using vvii = vector<vii>;
using vb = vector<bool>;
using vvb = vector<vb>;
using db = double;
using vdb = vector<db>;
using ldb = long double; //100 ceros pero poca precision decimal

bool solve() {
    int n, m; cin >> n >> m;
    if(!n && !m) return false;
    vector<bool> v(n, false);
    ll sol = 0;
    for(int i = 0; i < n; i++) {
        char a; cin >> a;
        if(a != '.') {
            v[i] = true;
            sol++;
        }
    }
    m--;
    while(m--) {
        for(int i = 0; i < n; i++) {
            char a; cin >> a;
            if(a == '.') {
                if(v[i]) sol += 2;
            }
            else {
                sol++;
                v[i] = !v[i];
            }
        }
    }
    cout << sol / 2 << '\n';
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    while(solve());
    return 0;
}