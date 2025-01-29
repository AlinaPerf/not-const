#include <iostream>

// Функция для обмена значениями (передаем сюда ссылки)
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void move(int& x, int& y, int dx, int dy) {
    x += dx;
    y += dy;
}

int main() {
    //Обмен значений
    setlocale(0, "ru");
    int a = 5, b = 10;
    std::cout << "До обмена: a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "После обмена: a = " << a << ", b = " << b << std::endl;

    //Работа с координатами
    int x = 3, y = 4;
    std::cout << "Координаты точки до перемещения: (" << x << ", " << y << ")" << std::endl;
    move(x, y, 2, 3);
    std::cout << "Координаты точки после перемещения: (" << x << ", " << y << ")" << std::endl;

    return 0;
}
