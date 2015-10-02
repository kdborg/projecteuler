#include <iostream>
#include <cmath>
#include <set>
#include <vector>
#include <string>

using namespace std;

const double pheta = 0.5 * (sqrt(5) + 1);

long sumNaturalNumbers(int n) {
    return n * (n + 1) / 2;
}

long fibonacci(long n) {
    return (pow(pheta, n) - (pow(1 - pheta, n))) / sqrt(5.0);
}

void getPrimes(long n, bool primes[]) {
    for (int i = 0; i < n; i++) { primes[i] = true; }

    primes[0] = false;
    primes[1] = false;

    for (int i = 2; i < n; i++) {
        if (primes[i]) {
            for (int j = i + i; j < n; j += i) {
                primes[j] = false;
            }
        }
    }
}

bool isPalindrome(string s) {
    return false;
}