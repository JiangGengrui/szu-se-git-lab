#include "stats.h"

double average(const std::vector<int>& scores) {
    if (scores.empty()) return 0.0;
    long long total = 0;
    for (int s : scores) total += s;
    return static_cast<double>(total) / scores.size();
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