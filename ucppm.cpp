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

ll calcula(string & s, int pos) {
    if(pos == sz(s)) {
        bool crece = true, decrece = true;
        char prev, cur = s[0];
        for(int i = 1; i < sz(s); i++) {
            prev = cur;
            cur = s[i];
            if(cur > prev) decrece = false;
            if(cur < prev) crece = false;
        }
        if(!crece && !decrece) return 1;
        else return 0;
    }
    ll sol = 0;
    for(char a = 'a'; a <= 'z'; a++) {
        s[pos] = a;
        sol += calcula(s, pos + 1);
    }
    return sol;
}

int main() {
    int n;
    while(true) {
        cin >> n;
        int c = 0;
        while(n >= 0) {
            n -= 2;
            c += n - 2;
        }
        cout << c << '\n';
    }
    return 0;
}