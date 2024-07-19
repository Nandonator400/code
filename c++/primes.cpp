#include <iostream>
#include <cmath>
#include <ctime>
#include <vector>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    int max_div = floor(sqrt(n));
    for (int i = 3; i <= max_div; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> vals;
    int max = 10000000;
    time_t t0 = time(NULL);
    for (int n = 1; n < max; n++) {
        if (is_prime(n)) {
            vals.push_back(n); 
        }
    }
    time_t t1 = time(NULL);
    cout << "Time taken: " << difftime(t1, t0) << " seconds\n";
    return 0;
}