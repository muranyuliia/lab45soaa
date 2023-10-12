#include <iostream>
#include <random>
#include <time.h>

bool isInTarget(double x, double y, double R) {
    // ����������, �� ������ ����� � �������
    if (abs(x) <= R && abs(y) <= R)
        return true;
    else
        return false;


}

int main() {
    double R;
    std::cout << "������ �������� R: ";
    std::cin >> R;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(-2 * R, 2 * R);

    for (int n = 0; n < 10; ++n) {
        double x = dis(gen);
        double y = dis(gen);

        std::cout << "���������� �������: (" << x << ", " << y << ")\n";
        if (isInTarget(x, y, R))
            std::cout << "��������� � �����!\n";
        else
            std::cout << "������!\n";
    }

    return 0;
}