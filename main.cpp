#include <iostream>

int Multiply(int a, int b) {
    return a * b;
}

void MultiplyAndLog(int a, int b){
    int res = Multiply(a, b);
    std::cout << res << std::endl;
}

int main() {
    MultiplyAndLog(5, 10);
    MultiplyAndLog(25, 10);
    MultiplyAndLog(10, 90);
}