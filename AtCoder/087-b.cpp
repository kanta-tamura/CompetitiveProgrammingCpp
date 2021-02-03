#include <iostream>
using namespace std;

int main() {
    int A, B, C, X; cin >> A >> B >> C >> X;
    int ans = 0;
    for (int i = 0; i <= A; ++i) {
        for (int l = 0; l <= B; ++l) {
            for (int k = 0; k <= C; ++k) {
                if (i * 500 + l * 100 + k * 50 == X) ++ans;
            }
        }
    }
    cout << ans << endl;
    return 0;
}