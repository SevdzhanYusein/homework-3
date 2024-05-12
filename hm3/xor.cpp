#include <iostream>

int main()
{
    int num1, num2;

    while (std::cin >> num1 >> num2)
    {
        int result = (num1 != num2) ? 1 : 0;
        std::cout << "The result for (" << num1 << ", " << num2 << ") is: " << result << std::endl;
    }

    return 0;
}
