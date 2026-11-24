#ifndef STATS_H
#define STATS_H

#include <vector>

//返回平均分；scores为空时返回 0.0
double average(const std::vector<int>& scores);
//返回最高分；scores为空时返回 0
int maximum(const std::vector<int>& scores);
//返回最低分；scores为空时返回 0
int minimum(const std::vector<int>& scores);

#endif
