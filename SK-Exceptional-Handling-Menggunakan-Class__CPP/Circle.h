#pragma once
#include<iostream>
using namespace std;

class Circle {

private:
    double radius;

public:
    class NegativeRadius {
    private: double radius;

    public: NegativeRadius(double rad) {
        this->radius = rad;
    }
     
          double getRadius() {
              return radius;
          }
    };

    void setRadius(double radius) {

        if (radius < 0) {
            throw NegativeRadius(radius);
        } else {
            this->radius = radius;
        }
    }

    double getRadius() {
        return radius;
    }

    double getArea() {
        return (3.14 * radius * radius);
    }

    double getDiameter() {
        return (2 * radius);
    }

    double getCircumference() {
        return (2 * 3.14 * radius * radius);
    }

};