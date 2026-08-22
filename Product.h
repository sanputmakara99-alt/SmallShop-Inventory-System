#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    string productId;
    string productName;
    double price;
    int quantity;

public:
    // Default constructor
    Product();

    // Parameterized constructor
    Product(string id, string name, double p, int q);

    // Getters
    string getProductId();
    string getProductName();
    double getPrice();
    int getQuantity();

    // Setters
    void setProductId(string id);
    void setProductName(string name);
    void setPrice(double p);
    void setQuantity(int q);

    // Virtual function for polymorphism
    virtual void displayInfo();

    // Virtual destructor
    virtual ~Product();
};

#endif