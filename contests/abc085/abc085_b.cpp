// B - Kagami Mochi
// https://atcoder.jp/contests/abc085/tasks/abc085_b

#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> diameters;
    for (int i = 0; i < n; ++i) {
        int d;
        cin >> d;
        diameters.insert(d);
    }
    cout << diameters.size() << endl;
    return 0;
}
