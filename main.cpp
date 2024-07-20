#include <iostream>
#include "Shape.h"
using namespace std;

int main() {
    // Создание массива указателей на Shape
    const int numShapes = 4;
    Shape* shapes[numShapes];

    // Создание объектов
    shapes[0] = new Square(1, 2, 5);
    shapes[1] = new Rectangle(3, 4, 6, 8);
    shapes[2] = new Circle(5, 5, 10);
    shapes[3] = new Elipse(6, 7, 8,4);

    // Отображение информации о каждой фигуре
    for (int i = 0; i < numShapes; i++)
    {
        shapes[i] -> Show();
    }

    // Освобождение памяти
    for (int i = 0; i < numShapes; i++)
    {
        delete shapes[i];
    }

    return 0;
}
