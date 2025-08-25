#include<iostream>  // normal regular used handler file
#include<fstream>   // used for offile and infile data store karne ke liye
#include<string>    // string value ko use kar ke liye 
using namespace std;


// temp name ki class jo sara code ka main part hai 
class hemant {
    string username, password;
    string email, phone, searchname, searchpassword, searchemail;
    fstream file;
public:
    void singup();
    void login();
    void forgot();
    void display();
};

// use for which task do a head in this code
int main() {
    hemant obj;
    char choice;
    cout << "\n\n* Developed By Hemant Mohane *" << endl;
    cout << " REGISTRATION AND LOGIN FORM " << endl;
    cout << "----------------------------------" << endl;
    cout << "1- Login " << endl;
    cout << "2- Sign Up" << endl;
    cout << "3- Forgot Password" << endl;
    cout << "4- Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
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

void hemant::singup() {
    cout << "Enter your username = ";
    getline(cin, username);
    cout << "Enter your password = ";
    getline(cin, password);
    cout << "Enter your email = ";
    getline(cin, email);
    cout << "Enter your phone = ";
    getline(cin, phone);

    file.open("Login_data.txt", ios::out | ios::app);  // data ko call kar kw out app karne ke liye 
    file << username << "*" << password << "*" << email << "*" << phone << endl;
    file.close();
}

void hemant::login() {      // login interface for user 
    string search, searchpassword;
    cout << "------------ LOGIN ------------" << endl;
    cout << "Enter your username = ";
    getline(cin, search);
    cout << "Enter your password = ";
    getline(cin, searchpassword);
    
    file.open("Login_data.txt", ios::in);  // information ko file me in karne ke liye 
    bool found = false;
    while (getline(file, username, '*') && 
           getline(file, password, '*') && 
           getline(file, email, '*') && 
           getline(file, phone)) {
        if (username == search && password == searchpassword) {
            cout << "Login successful" << endl;
            cout << "Welcome " << username << endl;
            cout << "Your email is " << email << endl;
            cout << "Your phone is " << phone << endl;
            found = true;
            break;
        }
    }
    file.close();
    
    if (!found) {
        cout << "Invalid username or password" << endl;
    }
}

void hemant::forgot() {   // yadi forgot karna ho toh 
    cout << "------------ FORGOT PASSWORD ------------" << endl;
    string search, searchemail;
    cout << "\nEnter your username: ";
    getline(cin, search);
    cout << "\nEnter your email address: ";
    getline(cin, searchemail);
 
    file.open("Login_data.txt", ios::in);
    bool found = false;
    while (getline(file, username, '*') && 
           getline(file, password, '*') && 
           getline(file, email, '*') && 
           getline(file, phone)) {
        if (username == search && email == searchemail) {
            cout << "\nYour password is: " << password << endl;
            found = true;
            break;
        }
    }
    file.close();
    
    if (!found) {
        cout << "\nInvalid username or email" << endl;
    }
}

void hemant::display() {
    cout << "------------ DISPLAY ------------" << endl;
    cout << "Username: " << username << endl;
    cout << "Password: " << password << endl;
    cout << "Email: " << email << endl;
    cout << "Phone: " << phone << endl;
}