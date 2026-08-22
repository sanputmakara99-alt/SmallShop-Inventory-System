#include <iostream>
#include "Product.h"
#include "Product.cpp"

using namespace std;

int main()
{
    // Using default constructor
    Product product1;

    product1.setProductId("P001");
    product1.setProductName("Coca Cola");
    product1.setPrice(1.00);
    product1.setQuantity(20);

    cout << "Product 1" << endl;
    product1.displayInfo();

    cout << endl;

    // Using parameterized constructor
    Product product2("P002", "Bread", 1.50, 15);

    cout << "Product 2" << endl;
    product2.displayInfo();

    return 0;
}