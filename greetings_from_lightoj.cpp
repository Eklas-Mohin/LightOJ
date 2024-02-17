/**
 *    author: mohin    
**/

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, a{}, b{}, sum{};
    string ans{};
    cin >> t;
    for (int caseno = 1; caseno <= t; ++caseno) {
        cin >> a >> b;
        sum = a + b;
        ans = "Case " + to_string(caseno) + ": " + to_string(sum);
        cout << ans << endl;
    }
    return 0;
}
