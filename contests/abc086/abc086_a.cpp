// A - Product
// https://atcoder.jp/contests/abc086/tasks/abc086_a

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << (a * b % 2 == 0 ? "Even" : "Odd") << endl;
}
