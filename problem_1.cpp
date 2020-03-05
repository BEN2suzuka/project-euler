#include <bits/stdc++.h>
using namespace std;

// 3 または 5 の倍数である 1000 未満の自然数の総和

int func(int N, int P) {
  int cnt = N / P;  // N 以下のうち 3 の倍数である自然数の個数
  return cnt * (2 * P + (cnt - 1) * P) / 2;
}

int main() {
  cout << func(999, 3) + func(999, 5) - func(999, 15) << endl;
}