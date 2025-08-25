#include <iostream>
#include <cstdlib> // random function use karne ke liye
#include <ctime>   // time ke according password handle karne ke liye
#include <string>  // string use karne ke liye
using namespace std;

string getPassword(int length)
{
    string password = "";
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890"; // is mese koi bhi random password bana lega
    int charsize = characters.size();
    srand(time(0));
    int randomindex;
    for (int i = 0; i < length; i++)
    {
        randomindex = rand() % charsize;               // use for random element pack in (characters string )
        password = password + characters[randomindex]; //  password ko (string password) par store ho jaye
    }
    return password;
}

int main()
{
    int length;
    cout << "----------------------------------------" << endl;
    cout << " * Developed by Hemant Mohane *" << endl;
    cout << " GENERATE STRONG AND RANDOM PASSWORD " << endl;
    cout << "-----------------------------------------" << endl;

    cout << " Enter the Length of the Passowrd = ";
    cin >> length;
    string password = getPassword(length); // Generate password function
    cout << "-----------------------------------" << endl;
    cout << "Genrated password =" << password << endl;
    cout << "------------------------------------" << endl;

    return 0;
}
