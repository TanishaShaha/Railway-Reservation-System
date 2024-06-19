#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

// Function prototypes
void User();
void loginPage();
void signUpPage();
void mainMenu();

int main()
{
    cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"                                        WELCOME TO RAILWAY RESERVATION SYSTEM \n";
    cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    User();
    return 0;
}


void User()
{
    int choice;
    cout<<"\n";
    cout << "1. Sign up" << endl;
    cout << "2. Sign In" << endl;
    cout << "\nEnter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        signUpPage();
        break;
    case 2:
        loginPage();
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}

void loginPage()
{
    cout<<"\n";
    cout<<"  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ LOGIN PAGE ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    string username, password;
    cout << "\nEnter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Check if the username and password are correct
    if (username == "admin" && password == "admin")
    {
        cout << "Login successful!" << endl;
        mainMenu(); // Go to the main menu after successful login
    }
    else
    {
        cout << "Invalid username or password!" << endl;
        User(); // Go back to the user menu
    }
}

void signUpPage()
{
    cout<<"\n";
     cout<<"  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ SIGNUP PAGE ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";

    string name, username, password;
    cout << "\nEnter name: ";
    cin >> name;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    cout << "\nSign up successful!" << endl;
    mainMenu(); // Go to the main menu after successful sign-up
}

void mainMenu()
{
    cout<<"\n";
    cout<<"  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ MAIN MENU ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    int choice;
    cout<<"\n";
    cout<<"\n";
    cout << "1. Book ticket" << endl;
    cout << "2. Cancel ticket" << endl;
    cout << "3. Check PNR status" << endl;
    cout << "4. Exit" << endl;
    cout << "\nEnter your choice: ";
    cin >> choice;


    switch (choice)
    {
    case 1:
        cout << "Book Ticket" << endl;
        break;
    case 2:
        cout << "Cancel Ticket" << endl;
        break;
    case 3:
        cout << "Checking PNR status" << endl;
        break;
    case 4:
        cout << "Exiting the program." << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
        mainMenu(); // Go back to the main menu
        break;
    }
}

