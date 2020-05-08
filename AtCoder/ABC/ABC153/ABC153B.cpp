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

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  ll H, N;
  cin >> H >> N;
  Vl A(N);
  REP(i, N) {
    cin >> A.at(i);
    H -= A.at(i);
  }
  if (H <= 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}