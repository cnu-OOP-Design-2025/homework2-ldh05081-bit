#include "homework2-1.h"
namespace intc = IntCalc;
namespace floatc = FloatCalc;

/* TODO IntClac 네임스페이스 및 함수 정의하기 */
int intc::add(int a, int b) {
    return a + b;
}
int intc::subtract(int a, int b) {
    return a - b;
}
int intc::multiply(int a, int b) {
    return a * b;
}
int intc::divide(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a / b;
    }
}

/* TODO FloatClac 네임스페이스 및 함수 정의하기 */
float floatc::add(float a, float b) {
    return a + b;
}
float floatc::subtract(float a, float b) {
    return a - b;
}
float floatc::multiply(float a, float b) {
    return a * b;
}
float floatc::divide(float a, float b) {
    if (b == 0.0f) {
        return 0.0f;
    } else {
        return a / b;
    }
}
