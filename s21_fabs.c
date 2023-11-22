#include "s21_match.h"

double s21_fabs(double x) {
    if (x < 0.0) {
        return -x;  // Если x отрицательное, возвращаем его с противоположным знаком
    } else {
        return x;   // Если x положительное или ноль, возвращаем его без изменений
    }
}
