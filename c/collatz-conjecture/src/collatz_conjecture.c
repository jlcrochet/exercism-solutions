#include "collatz_conjecture.h"

int steps(int start) {
    if (start <= 0)
        return -1;

    int out = 0;

    while (start > 1) {
        if (start % 2 == 0)
            start /= 2;
        else
            start = 3 * start + 1;

        out += 1;
    }

    return out;
}
