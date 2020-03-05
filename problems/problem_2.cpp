#include <bits/stdc++.h>
using namespace std;

// Problem 2
// フィボナッチ数列における 4000000 以下である偶数の項の総和

int main() {
  int sum = 0;
  int a = 0, b = 1, c = 2;
  while (c <= 4000000) {
    sum += c;
    for (int i = 0; i < 3; i++) {
      swap(a, b); swap(b, c);
    c = a + b;
    }
  }
  cout << sum << endl;
}