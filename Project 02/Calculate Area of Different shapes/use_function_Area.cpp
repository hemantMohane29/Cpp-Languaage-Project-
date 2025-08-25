#include <iostream>
#include <cmath>
using namespace std;

// Function prototypes
double calculateCircleArea(double radius);
double calculateRectangleArea(double length, double width);
double calculateTriangleArea(double base, double height);
void display_hemant_Menu();

int main()
{
    int choice;
    double radius, length, width, base, height;

    cout << "---------------------------------------" << endl;
    cout << " * Developed by Hemant Mohane * " << endl;
    cout << "CALCULATE AREA OF DIFFERENT SHAPES " << endl;
    cout << "---------------------------------------" << endl;

    do
    {
        display_hemant_Menu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice)
        {
        case 1: // Circle
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            if (radius <= 0)
            {
                cout << "Error: Radius must be positive." << endl;
            }
            else
            {
                cout << "Area of the circle: " << calculateCircleArea(radius) << endl;
            }
            break;

        case 2: // Rectangle
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            if (length <= 0 || width <= 0)
            {
                cout << "Error: Length and width must be positive." << endl;
            }
            else
            {
                cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;
            }
            break;

        case 3: // Triangle
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            if (base <= 0 || height <= 0)
            {
                cout << "Error: Base and height must be positive." << endl;
            }
            else
            {
                cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;
            }
            break;

        case 4: // Exit
            cout << "Exiting program. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    } while (choice != 4);

    return 0;
}

// Function to calculate area of a circle
double calculateCircleArea(double radius)
{
    return 3.14 * radius * radius;
}

// Function to calculate area of a rectangle
double calculateRectangleArea(double length, double width)
{
    return length * width;
}

// Function to calculate area of a triangle
double calculateTriangleArea(double base, double height)
{
    return 0.5 * base * height;
}

// Function to display menu options
void display_hemant_Menu()
{
    cout << "1. Calculate Area of Circle" << endl;
    cout << "2. Calculate Area of Rectangle" << endl;
    cout << "3. Calculate Area of Triangle" << endl;
    cout << "4. Exit" << endl;
}