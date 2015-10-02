#include "../base.cpp"
#include "../general.cpp"

using namespace std;

void p1() {
    long sum = 0;

    sum += 3 * sumNaturalNumbers(999/3);
    sum += 5 * sumNaturalNumbers(999/5);
    sum -= 15 * sumNaturalNumbers(999/15);

    cout << "Answer: " << sum << endl;
}

int main() {
    timeit(p1);
    return 0;
}
