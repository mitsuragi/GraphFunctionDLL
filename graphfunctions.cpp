#include "graphfunctions.h"

std::vector<double> linearApproximation(const std::vector<double>& parameter) {
    int n = parameter.size();
    double sumX = 0.0, sumY = 0.0, sumXY = 0.0, sumX2 = 0.0;

    for (int i = 0; i < n; ++i) {
        sumX += i;
        sumY += parameter[i];
        sumXY += i * parameter[i];
        sumX2 += i * i;
    }

    double slope = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    double intercept = (sumY - slope * sumX) / n;

    std::vector<double> res;
    res.push_back(slope);
    res.push_back(intercept);

    return res;
}
