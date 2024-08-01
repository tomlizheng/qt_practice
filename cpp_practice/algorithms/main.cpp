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

    // 10.4
    // int类型累加，double会被截断。

    // 10.5
    // 比较的会是地址，因为C风格类型字符串的类型是const char*。

    // 10.6
    std::vector<int> vec2{1, 2, 3};
    std::fill_n(vec2.begin(), vec.size(), 0);
    std::cout << "vec2:" << vec2[0] << vec2[1] << vec2[2] << std::endl;

    // 10.7
    // vec是空的，目的序列空间可能小于输入序列空间，应该添加一条语句 vec.resize(lst.size())
    // 逻辑上没问题，但语句上应该将 vec.reserve(10) 改为 vec.resize(10)，这样更明确

    // 10.8
    // back_inserter函数获取的是插入迭代器，在 iterator.h 头文件中，不是标准库的算法。
}
