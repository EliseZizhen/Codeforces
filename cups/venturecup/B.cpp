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
    int n, m;
    cin >> n >> m;
    unordered_map<string, int> hmap;
    string s;
    REP(i, n + m) {
        cin >> s;
        hmap[s] += 1;
    }
    int cnt = 0;
    for (auto x : hmap) {
        if (x.second > 1) cnt++;
    }
    if (n > m) cout << "YES" << endl;
    else if (n < m) cout << "NO" << endl;
    else {
        if (cnt & 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

