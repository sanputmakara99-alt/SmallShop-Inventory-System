#include "Product.h"

// Default constructor
Product::Product()
{
    productId = "";
    productName = "";
    price = 0;
    quantity = 0;
}

// Parameterized constructor
Product::Product(string id, string name, double p, int q)
{
    productId = id;
    productName = name;
    price = p;
    quantity = q;
}

// Getters
string Product::getProductId()
{
    return productId;
}

string Product::getProductName()
{
    return productName;
}

double Product::getPrice()
{
    return price;
}

int Product::getQuantity()
{
    return quantity;
}

// Setters
void Product::setProductId(string id)
{
    productId = id;
}

void Product::setProductName(string name)
{
    productName = name;
}

void Product::setPrice(double p)
{
    price = p;
}

void Product::setQuantity(int q)
{
    quantity = q;
}

// Display product information
void Product::displayInfo()
{
    cout << "Product ID: " << productId << endl;
    cout << "Product Name: " << productName << endl;
    cout << "Price: $" << price << endl;
    cout << "Quantity: " << quantity << endl;
}

// Destructor
Product::~Product()
{
}