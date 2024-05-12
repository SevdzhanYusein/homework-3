#include <iostream>

int F(int a, int b, int c) {
    bool result = (a && b && c) || (!a && !b && !c) || (!a && b && c) || (!a && b && !c);
    return result;
}

int F_minim(int a, int b, int c) {
    bool resultMinim = (a && b && c) || (!a && b && c);
    return resultMinim;
}

int main() {
    int a, b, c;

    std::cout << "Enter a value for A (0 or 1): ";
    std::cin >> a;
    std::cout << "Enter a value for B (0 or 1): ";
    std::cin >> b;
    std::cout << "Enter a value for C (0 or 1): ";
    std::cin >> c;

    int result = F(a, b, c);
    int resultMinim = F_minim(a, b, c);

    std::cout << "The expression is synthesized by: " << result << std::endl;
    std::cout << "The result for minimized logical expression: " << resultMinim << std::endl;
    
    return 0;

}

