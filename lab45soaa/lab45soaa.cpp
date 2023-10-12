#include <iostream>
#include <random>
#include <time.h>

bool isInTarget(double x, double y, double R) {
    // Перевіряємо, чи попадає точка в квадрат
    if (abs(x) <= R && abs(y) <= R)
        return true;
    else
        return false;


}

int main() {
    double R;
    std::cout << "Введіть значення R: ";
    std::cin >> R;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(-2 * R, 2 * R);

    for (int n = 0; n < 10; ++n) {
        double x = dis(gen);
        double y = dis(gen);

        std::cout << "Координати пострілу: (" << x << ", " << y << ")\n";
        if (isInTarget(x, y, R))
            std::cout << "Попадання в мішень!\n";
        else
            std::cout << "Промах!\n";
    }

    return 0;
}