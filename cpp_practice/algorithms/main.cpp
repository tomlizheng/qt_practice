#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <string>
#include <iostream>

int main(/*int argc, char *argv[]*/)
{
    // 10.1
    std::vector<int> vec{ 1, 2, 2, 4 };
    auto num1 = std::count(std::cbegin(vec), std::cend(vec), 2);
    std::cout << "num1:" << num1 << std::endl;

    // 10.2
    std::list<std::string> lis{ "dd", "ff", "gg", "dd", "dd" };
    auto num2 = std::count(std::cbegin(lis), std::cend(lis), "dd");
    std::cout << "num2:" << num2 << std::endl;

    // 10.3
    std::vector<int> vecNum{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    auto sum = std::accumulate(std::cbegin(vecNum), std::cend(vecNum), 0);
    std::cout << "sum:" << sum << std::endl;

    // 10.4
    // int类型累加，double会被截断。

    // 10.5
    // 比较的会是地址，因为C风格类型字符串的类型是const char*。


}
