#include <iostream>
#include <vector>
using namespace std;

int N, count = 0;
vector<int> A;

int main() {
    cin >> N;
    A.resize(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    while (true) {
        bool exist_odd = false;

        for (int i = 0; i < N; ++i) {
            if (A[i] % 2 != 0) exist_odd = true;
        }

        if (exist_odd) break;

        for (int i = 0; i < N; ++i) {
            A[i] /= 2;
        }
        ++count;
    }

    cout << count << endl;
}