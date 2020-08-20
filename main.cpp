#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    ll n, x;
    cin >> n >> x;
    vector<pair<char, int>> d(n);
    for (auto &i: d)
        cin >> i.first >> i.second;

    int count = 0;
    for (int i=0; i<n; i++) {
        if (d[i].first == '+')
            x += d[i].second;
        if (d[i].first == '-') {
            if (x >= d[i].second) {
                x -= d[i].second;
            } else
                count++;
        }
    }

    cout << x << ' ' << count << endl;
    return 0;
}