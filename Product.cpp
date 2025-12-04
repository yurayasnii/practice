#include "Product.h"

Product::Product() {
    id = 0;
    name = "Невідомо";
    manufacturer = "Невідомо";
    price = 0.0;
    shelfLife = "0 днів";
    quantity = 0;
    composition = "Невідомо";
    calories = 0.0;
    cout << "Виклик конструктора за замовчуванням для товару: " << this << endl;
}

Product::Product(int id, string name, string manufacturer, double price, 
                 string shelfLife, int quantity, string composition, double calories) {
    this->id = id;
    this->name = name;
    this->manufacturer = manufacturer;
    this->price = price;
    this->shelfLife = shelfLife;
    this->quantity = quantity;
    this->composition = composition;
    this->calories = calories;
    cout << "Виклик конструктора з параметрами для товару: " << name << endl;
}

Product::Product(const Product &other) {
    this->id = other.id;
    this->name = other.name;
    this->manufacturer = other.manufacturer;
    this->price = other.price;
    this->shelfLife = other.shelfLife;
    this->quantity = other.quantity;
    this->composition = other.composition;
    this->calories = other.calories;
    cout << "Виклик конструктора копіювання для товару: " << name << endl;
}

Product::~Product() {
    cout << "Виклик деструктора для товару: " << name << endl;
}

void Product::printInfo() const {
    cout << "========================================" << endl;
    cout << "ID: " << id << endl;
    cout << "Назва: " << name << endl;
    cout << "Виробник: " << manufacturer << endl;
    cout << "Ціна: " << price << " грн" << endl;
    cout << "Термін зберігання: " << shelfLife << endl;
    cout << "Кількість: " << quantity << endl;
    cout << "Склад: " << composition << endl;
    cout << "Калорії: " << calories << " ккал/100г" << endl;
    cout << "========================================" << endl;
}