#include <iostream>
#include <cassert>
#include <vector>

int main() {

    std::vector<double> a(10, 0.0);

    for (int n = 0; n < a.size(); ++n) {
        a[n] = static_cast<double>(n);
    }

    assert(a[2] == 3.0);
}
