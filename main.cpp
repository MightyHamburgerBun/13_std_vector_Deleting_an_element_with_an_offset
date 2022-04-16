#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Number of robots:";
    std::cin >> n;
    std::vector<int> robots(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "ID:";
        std::cin >> robots[i];
    }
    std::cout << "Showcase: { ";
    for (int i = 0; i < robots.size(); ++i) {
        std::cout << robots[i];
        std::cout << " ";
    }
    std::cout << "}\n";
    int m;
    std::cout << "Number of sales:";
    std::cin >> m;
    for (int i = 0; i < m; ++i) {
        int x;
        std::cin >> x;
        for (int j = x; j < robots.size() - 1; ++j) {
            robots[j] = robots[j + 1];
        }
        robots.resize(robots.size()-1);
        std::cout << "Showcase: { ";
        for (int k = 0; k < robots.size(); ++k) {
            std::cout << robots[k];
            std::cout << " ";
        }
        std::cout << "}\n";
    }
}
