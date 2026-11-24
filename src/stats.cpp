#include "stats.h"

double average(const std::vector<int>& scores) {
    if (scores.empty()) return 0.0;
    long long total = 0;
    int counted = 0;
    for (int s : scores) {
        if (s <= 0) continue; // Exclude absent scores (assumed to be non-positive)
        total += s;
        ++counted;
    }
    if (counted == 0) return 0.0;
    return static_cast<double>(total) / counted;
}

int maximum(const std::vector<int>& scores) {
    if (scores.empty()) return 0;
    int best = scores[0];
    for (int s : scores) if (s > best) best = s;
    return best;
}

int minimum(const std::vector<int>& scores) {
    if (scores.empty()) return 0;
    int worst = scores[0];
    for (int s : scores) if (s < worst) worst = s;
    return worst;
}