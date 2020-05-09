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
  int n;
  cin >> n;
  vi ans;
  if (n >= 10000) {
    ans.push_back(n / 10000 * 10000);
    n = n % 10000;
  }
  if (n >= 1000) {
    ans.push_back(n / 1000 * 1000);
    n = n % 1000;
  }
  if (n >= 100) {
    ans.push_back(n / 100 * 100);
    n = n % 100;
  }
  if (n >= 10) {
    ans.push_back((n / 10) * 10);
    n = n % 10;
  }
  if (n > 0) {
    ans.push_back(n);
  }
  cout << ans.size() << "\n";
  for (auto a : ans) cout << a << " ";
  cout << "\n";
}

int main() {
  //  cin.tie(0);
  //  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int t;
  cin >> t;
  REP(i, t) solve();
  return 0;
}