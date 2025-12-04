#include <iostream>
#include "Product.h"

int main() {
    Product milk(1, "Молоко", "Галичина", 45.50, "7 днів", 20, "Молоко коров'яче незбиране", 60.0);
    milk.printInfo();

    Product milkCopy = milk;
    milkCopy.printInfo();

    Product emptyProduct;
    emptyProduct.printInfo();

    return 0;
}