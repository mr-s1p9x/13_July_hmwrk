#ifndef INC_13_JULY_HOMEWORK_SHAPE_H
#define INC_13_JULY_HOMEWORK_SHAPE_H
#include <iostream>

// Абстрактный класс Shape
class Shape {
public:
    virtual void Show() const = 0; // Чисто виртуальный метод для отображения информации о фигуре
    virtual ~Shape() {}            // Виртуальный деструктор для корректного удаления производных объектов
};

// Класс Square, производный от Shape
class Square : public Shape
{
private:
    int x, y, side; // Координаты верхнего левого угла и длина стороны кв

public:
    Square(int x, int y, int side); // Конструктор для инициализации
    void Show() const override;      // Переопределение метода Show
};

// Класс Rectangle, производный от Shape
class Rectangle : public Shape
{
private:
    int x, y, width, height; // Координаты верхнего левого угла и размеры

public:
    Rectangle(int x, int y, int width, int height); // Конструктор
    void Show() const override;  // Переопределение метода Show
};

// Класс Circle, производный от Shape
class Circle : public Shape
{
private:
    int x, y, radius; // Координаты центра и радиус окружности

public:
    Circle(int x, int y, int radius); // Конструктор
    void Show() const override;  // Переопределение метода Show
};

// Класс Ellipse, производный от Shape
class Elipse : public Shape
{
private:
    int x, y, width, height; // Координаты верхнего левого угла описанного прямоугольника и его размеры

public:
    Elipse(int x, int y, int width, int height); // Конструктор
    void Show() const override;  // Переопределение метода Show
};

#endif //INC_13_JULY_HOMEWORK_SHAPE_H
