#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    std::cout << "Greet dev-2!\n";
    std::cout << "Best language eveeeeeeeeeer\n";
    return 0;
}

template <std::integral T>
T sum(const std::vector<T>& arr)
{
    return std::accumulate(arr.begin(), arr.end(), 0);
}
