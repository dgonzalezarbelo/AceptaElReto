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
using ull = unsigned long long;
using ii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vii = vector<ii>;
using vvii = vector<vii>;
using vb = vector<bool>;
using vvb = vector<vb>;
using db = double;
using vdb = vector<db>;
using ldb = long double; //100 ceros pero poca precision decimal

int main() {
    int t;
    scanf("%d\n", &t);
    while(t--) {
        int a, b, c, d;
        scanf("%d:%d %d:%d", &a, &b, &c, &d);
        if (c < a || (c == a && d < b)) c += 24;
        int m = (c - a) * 60 + (d - b);
        int sol = (m * 48) / 12;
        printf("%d\n", sol);
    }
    return 0;
}