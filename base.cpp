#include <iostream>
#include <time.h>

using namespace std;

void timeit(void (*function)()) {
        clock_t t1 = clock();
        function();
        clock_t t2 = clock();

        cout << "Total time (cycles): " << (t2 - t1) << endl;
        cout << "Total time (s): " << ((double)(t2 - t1) / CLOCKS_PER_SEC) << endl;
        cout << "Clocks per second: " << CLOCKS_PER_SEC << endl;

}
