// A - Ferris Wheel
// https://atcoder.jp/contests/abc127/tasks/abc127_a

#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    if(a>12) cout<<b<<endl;
    else if(a>5) cout<<b/2<<endl;
    else cout<<0<<endl;
}
