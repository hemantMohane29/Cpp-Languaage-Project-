#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    float area, radius, length, width , base , height;
    cout << "---------------------------------------" << endl;
    cout << " * Developed by Hemant Mohane * " << endl;
    cout << "CALCULATE AREA OF DIFFERENT SHAPES " << endl;
    cout << "---------------------------------------" << endl;
    cout << "1- Area of circle " << endl;
    cout << "2- Area of Rectangle " << endl;
    cout << "3- Area of square " << endl;
    cout << "4- Area of triangle " << endl;
    cout << "5- Exit " << endl;
    cout << "Enter the your choice = ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter the radius of the circle = ";
        cin >> radius;
        if (radius == 0)
        {
            cout << "-------------------------------------" << endl;
            cout << "its not possible " << endl;
            cout << "-------------------------------------" << endl;
        }

        else
        {
            area = 3.14 * pow(radius, 2);
            cout << "-------------------------------------" << endl;
            cout << "Area == " << area << endl;
            cout << "-------------------------------------" << endl;
        }
        break;

    case 2:
        cout << "Enter the length of the Rectangle = ";
        cin >> length;
        cout << "Enter the width of the Rectangle = ";
        cin >> width;
        if (length == 0 || width == 0)
        {
            cout << "-------------------------------------" << endl;
            cout << "its not possible " << endl;
            cout << "-------------------------------------" << endl;
        }
        else
        {
            area = length * width;
            cout << "-------------------------------------" << endl;
            cout << "Area == " << area << endl;
            cout << "-------------------------------------" << endl;
        }
        break;

    case 3:
        cout << "Enter the length of the Rectangle = ";
        cin >> length;
        if (length == 0)
        {
            cout << "-------------------------------------" << endl;
            cout << "its not possible " << endl;
            cout << "-------------------------------------" << endl;
        }
        else
        {
            area = pow(length, 2);
            cout << "-------------------------------------" << endl;
            cout << "Area == " << area << endl;
            cout << "-------------------------------------" << endl;
        }
        break;

    case 4:
        cout << "Enter the base of the Triangle = ";
        cin >> length;
        cout << "Enter the hight of the Triangle = ";
        cin >> width;
        if (base == 0 || height == 0)
        {
            cout << "-------------------------------------" << endl;
            cout << "its not possible " << endl;
            cout << "-------------------------------------" << endl;
        }
        else
        {
            area = 0.5 * length * width;
            cout << "-------------------------------------" << endl;
            cout << "Area == " << area << endl;
            cout << "-------------------------------------" << endl;
        }
        break;
        
        case 5:
        cout << "-------------------------------------" << endl;
        cout << "Exiting program" << endl;
        cout << "-------------------------------------" << endl;
        break;

    default:
        cout << "-------------------------------------------------------------" << endl;
        cout << "Invalid choice bhai sahi choice kar .......!!!!" << endl;
        cout << "-------------------------------------------------------------" << endl;
    }
    return 0;
}
