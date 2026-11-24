#ifndef STATS_H
#define STATS_H

#include <vector>

//返回平均分；scores为空时返回 0.0
double average(const std::vector<int>& scores);
//返回最高分；scores为空时返回 0
int maximum(const std::vector<int>& scores);
//返回最低分；scores为空时返回 0
int minimum(const std::vector<int>& scores);
//返回中位数；scores为空时返回 0.0
double median(const std::vector<int>& scores);
// 及格率：>= 60 分的人数占全部人数的比例，返回 0.0~1.0
double passRate(const std::vector<int>& scores);
#endif
