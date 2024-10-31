#include <iostream>
using namespace std;

int main() {
    // Define correct credentials
    int correctUsername = 12345;  // Predefined correct username
    int correctPassword = 67890;   // Predefined correct password
    int correctOTP = 123456;       // Predefined correct One-Time Password (OTP)

    // Variables to store user input
    int enteredUsername, enteredPassword, enteredOTP;

    // Prompt for username
    cout << "Enter username: ";
    cin >> enteredUsername;

    // Check if entered username is correct
    if (enteredUsername != correctUsername) {
        cout << "Error: Incorrect username." << endl; // Username error message
    }
    else {
        // Prompt for password if username is correct
        cout << "Enter password: ";
        cin >> enteredPassword;

        // Check if entered password is correct
        if (enteredPassword != correctPassword) {
            cout << "Error: Incorrect password." << endl; // Password error message
        }
        else {
            // Prompt for OTP if password is correct
            cout << "Enter 6-digit OTP: ";
            cin >> enteredOTP;

            // Check if entered OTP is correct
            if (enteredOTP != correctOTP) {
                cout << "Error: Incorrect OTP." << endl; // OTP error message
            }
            else {
                cout << "Access granted. Welcome!" << endl; // Successful login
            }
        }
    }

    return 0; // End of program
}
