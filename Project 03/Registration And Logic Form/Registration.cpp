#include <iostream> // regular handler file
#include <fstream>  //  file in and out karne ke liye handler file
#include <string>   // string use karne ke liye handler file
using namespace std;

class hemant
{
    string username, password;
    string email, phone, searchname, searchpassword, searchemail;
    fstream file;

public:
    void singup();
    void login();
    void forgot();
    void display();
};

int main()
{
    hemant obj;
    char choice;
    cout << "----------------------------------" << endl;
    cout << "* Developed By Hemant Mohane *" << endl;
    cout << " REGISTRATION AND LOGIN FORM " << endl;
    cout << "----------------------------------" << endl;
    cout << "1- Login " << endl;
    cout << "2- Sign Up" << endl;
    cout << "3- Forgot Password" << endl;
    cout << "4- Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore(); // Clear the input buffer

    switch (choice)
    {
    case '1':
        obj.login();
        break;
    case '2':
        obj.singup();
        break;
    case '3':
        obj.forgot();
        break;
    case '4':
        return 0;
    default:
        cout << "Invalid choice bhai sahi choice karo " << endl;
        break;
    }
    return 0;
}

void hemant::singup() // user ko signup karne ke liye  signup function
{
    cout << "Enter your username = ";
    getline(cin, username);
    cout << "Enter your password = ";
    getline(cin, password);
    cout << "Enter your email = ";
    getline(cin, email);
    cout << "Enter your phone = ";
    getline(cin, phone);

    file.open("Login_data.txt", ios::out | ios::app); // file .txt se data out kar ke liye ( ios::out and ios::app)
    if (file.is_open())
    {
        file << username << "*" << password << "*" << email << "*" << phone << endl;
        file.close();
        cout << " ------------------------------" << endl;
        cout << "Registration successful!" << endl;
        cout << "username = " << username << endl;
        cout << "Email = " << email << endl;
        cout << "Phone = " << phone << endl;
        cout << " ------------------------------" << endl;
    }
    else
    {
        cout << "Error opening file!" << endl;
    }
}

void hemant::login() // user ko login karne ke liye login function
{
    string search, searchpassword;
    cout << "------------ LOGIN ------------" << endl;
    cout << "Enter your username = ";
    getline(cin, search);
    cout << "Enter your password = ";
    getline(cin, searchpassword);
    cout << " ------------------------------" << endl;

    file.open("Login_data.txt", ios::in); // file me data store karne ke liye (ios::in)
    if (!file.is_open())
    {
        cout << "No users registered yet!" << endl;
        return;
    }

    bool found = false;
    while (getline(file, username, '*') &&
           getline(file, password, '*') &&
           getline(file, email, '*') &&
           getline(file, phone, '\n'))
    {
        if (username == search && password == searchpassword)
        {
            cout << "\nLogin successful" << endl;
            cout << " ------------------------------" << endl;
            cout << "Welcome " << username << endl;
            cout << "Your email is " << email << endl;
            cout << "Your phone is " << phone << endl;
            cout << " ------------------------------" << endl;
            found = true;
            break;
        }
    }
    file.close();

    if (!found)
    {
        cout << "Invalid username or password" << endl;
    }
}

void hemant::forgot() // yadi user se forgot karna ho toh us ke liye forgot function
{
    cout << "------------ FORGOT PASSWORD ------------" << endl;
    string search, searchemail;
    cout << "Enter your username = ";
    getline(cin, search);
    cout << "Enter your email address = ";
    getline(cin, searchemail);

    file.open("Login_data.txt", ios::in);
    if (!file.is_open())
    {
        cout << "No users registered yet!" << endl;
        return;
    }

    bool found = false;
    while (getline(file, username, '*') &&
           getline(file, password, '*') &&
           getline(file, email, '*') &&
           getline(file, phone, '\n'))
    {
        if (username == search && email == searchemail)
        {
            cout << " ------------------------------" << endl;
            cout << "\nYour password is = " << password << endl;
            cout << " ------------------------------" << endl;
            found = true;
            break;
        }
    }
    file.close();

    if (!found)
    {
        cout << "Invalid username or email" << endl;
    }
}

void hemant::display() // data ko display kar ke liye display function
{
    cout << "------------ DISPLAY ------------" << endl;
    cout << "Username: " << username << endl;
    cout << "Password: " << password << endl;
    cout << "Email: " << email << endl;
    cout << "Phone: " << phone << endl;
}