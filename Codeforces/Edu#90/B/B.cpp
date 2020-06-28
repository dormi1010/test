#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
//#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vl = vector<ll>;
using vi = vector<int>;
using Graph = vector<vi>;

void solve() {
  string S;
  int l = 0, o = 0;
  cin >> S;
  for (auto c : S) {
    if (c == '0')
      o++;
    else
      l++;
  }
  int time = min(o, l);
  if (time % 2 == 0)
    cout << "NET" << endl;
  else
    cout << "DA" << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int n;
  cin >> n;
  REP(i, n) solve();
}