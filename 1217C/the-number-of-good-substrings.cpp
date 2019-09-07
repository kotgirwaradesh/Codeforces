#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    vector<int> zb(s.size());
    int z = 0;
    for (int i = 0; i < s.size(); i++) {
      zb[i] = z;
      z = s[i] == '0' ? z + 1 : 0;
    }
    long long ans = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '1') {
        long long num = 1;
        int j = i + 1;
        while (j < s.size()) {
          num = 2 * num + (s[j] - '0');
          if (j - i + 1 + zb[i] < num) {
            break;
          }
          ans++;
          j++;
        }
        ans++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}