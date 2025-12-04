#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>

using namespace std;

class Product {
private:
    int id;
    string name;            
    string manufacturer;    
    double price;           
    string shelfLife;      
    int quantity;          
    string composition;     
    double calories;       

public:
    Product();

    Product(int id, string name, string manufacturer, double price, 
            string shelfLife, int quantity, string composition, double calories);

    Product(const Product &other);

    ~Product();

    void printInfo() const;
};

#endif