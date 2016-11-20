#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <queue>
#include <utility>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;

#define REPP(i,a,b) for(int i=(a); i < (b); ++i)
#define REP(i,a) for(int i = 0; i < (a); ++i)
#define PER(i,a) for(int i = (a) - 1; i >= 0; --i)
#define SIZE(x) ((int)(x).size())
#define ALL(x) (x).begin(), (x).end()
#define MP make_pair

typedef long long ll;
typedef pair<int, int> pii;

int main() {
    int n;
    string s, ans;
    cin >> n >> s;
    n = SIZE(s);
    REP(i, n) {
        if (s[i] == 'o') {
            int p = i;
            while(p + 2 < n) {
                if (s[p + 1] == 'g' && s[p + 2] == 'o') p += 2;
                else break;
            }
            if (p > i) ans += "***";
            else ans += s[i];
            i = p;
        } else {
            ans += s[i];
        }
    }
    cout << ans << endl;
    return 0;
}
