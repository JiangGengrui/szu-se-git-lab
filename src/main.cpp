#include <iostream>
#include <vector>

#include "stats.h"

int main() {
    std::vector<int> scores;
    int value = 0;

    std::cout << "Enter scores, Ctrl+Z then Enter to finish:\n";
    while (std::cin >> value) {
        scores.push_back(value);
    }

    if (scores.empty()) {
        std::cout << "No score input.\n";
        return 1;
    }

    std::cout << "count = " << scores.size() << "\n";
    std::cout << "sum   = ";
    long long total = 0;
    for (int s : scores) total += s;
    std::cout << total << "\n";
    std::cout << "avg   = " << average(scores) << "  (absent excluded)\n";
    std::cout << "max   = " << maximum(scores) << "\n";
    std::cout << "min   = " << minimum(scores) << "\n";
    return 0;
}