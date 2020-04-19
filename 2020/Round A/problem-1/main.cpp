// https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc7/00000000001d3f56

#include <bits/stdc++.h>

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define endl "\n"

using namespace std;

int main() {
  IOS;
  int T;
  cin >> T;
  int tc = 0;
  while (T--) {
    tc++;
    int n, b;
    cin >> n >> b;
    int a[n] = {0};
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a, a + n);
    int count = 0;
    for (int i : a) {
      if (b >= i) {
        b -= i;
        count++;
      }
    }
    cout << "Case #" << tc << ": " << count << endl;
  }
  return 0;
}
