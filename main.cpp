#include <iostream>
#include "Product.h"
#include "Product.cpp"

using namespace std;

int main()
{
    Product product;

    string id;
    string name;
    double price;
    int quantity;

    cout << "===== Add Product =====" << endl;

    cout << "Enter Product ID: ";
    cin >> id;

    cout << "Enter Product Name: ";
    cin >> name;

    cout << "Enter Price: ";
    cin >> price;

    cout << "Enter Quantity: ";
    cin >> quantity;

    product.setProductId(id);
    product.setProductName(name);
    product.setPrice(price);
    product.setQuantity(quantity);

    cout << endl;
    cout << "===== Product Information =====" << endl;

    product.displayInfo();

    return 0;
}