/**
 *    author: mohin    
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{};
    cin >> t;
    for (int caseno = 1; caseno <= t; ++caseno) {
        cin >> n;
        cout << n / 2 << ' ' << n - (n / 2) << endl;
    }
    return 0;
}