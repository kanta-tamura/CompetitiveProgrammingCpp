#include <iostream>
using namespace std;

int find_sum_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N, A, B, total = 0; cin >> N >> A >> B;
    for (int i = 1; i <= N; ++i) {
        int sum = find_sum_digits(i);
        if (sum >= A && sum <= B) total += i;
    }
    cout << total << endl;
    return 0;
}