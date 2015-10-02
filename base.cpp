#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void timeit(void (*function)()) {
        clock_t t1 = clock();
        function();
        clock_t t2 = clock();

        cout << "Total time (cycles): " << (t2 - t1) << endl;
        cout << setprecision(10) << "Total time (s): " << ((double)(t2 - t1) / CLOCKS_PER_SEC) << endl;
        cout << "Clocks per second: " << CLOCKS_PER_SEC << endl;

}
