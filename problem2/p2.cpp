#include "../base.cpp"
#include "../general.cpp"

using namespace std;

void p2() {
    long sum = 0;

    long a = 1, b = 1, temp;

    while (b < 4000000) {
        if (b % 2 == 0) {
            sum += b;
        }

        temp = a + b;
        a = b;
        b = temp;
    }

    cout << "Answer: " << sum << endl;
}

void p2_Binets() {
    long sum = 0;

    long i = 3;
    long f = fibonacci(i);
    while (f < 4000000) {
        sum += f;

        i += 3;
        f = fibonacci(i);
    }

    cout << "Answer: " << sum << endl;
}



int main() {
    timeit(p2);
    timeit(p2_Binets);
}