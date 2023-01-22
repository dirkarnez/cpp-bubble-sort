#include <algorithm>
#include <iostream>
#include <vector>

template <typename InputIt>
void bubble_sort(InputIt first, InputIt last) {
    InputIt i, j;
    for (i = first; i != last; i++)
        for (j = first; j < i; j++)
            if (*i < *j) std::swap(*i, *j);
}

int main() {
    std::vector<int> a = {50, 45, 47, 65, 80};
    std::vector<double> b = {50, 45, 47, 65, 80};

    bubble_sort(a.begin(), a.end());
    std::for_each(a.cbegin(), a.cend(),
                  [](const auto& n) { std::cout << " " << n; });

    bubble_sort(b.begin(), b.end());
    std::for_each(b.cbegin(), b.cend(),
                  [](const auto& n) { std::cout << " " << n; });
}
