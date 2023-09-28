#include <iostream>
using namespace std;
string message;
int choice;
int key;
int i;
char ch;
int main()
{
    cout << "What is your message: ";
    cin >> message;
    cout << "Encrypt or Decrypt (0/1): ";
    cin >> choice;
    if (choice == 0) {
        cout << "Encryption key: ";
        cin >> key;
        for (i == 0; message[i] != '\0'; i++) {
            ch = message[i];
            if (ch >= 'a' and ch <= 'z') {
                ch = ch + key;
                if (ch > 'z') {
                    ch = ch - 'z' + 'a' - 1;
                }
            }
            else if (ch >= 'A' and ch <= 'Z') {
                ch = ch + key;
                if (ch > 'Z') {
                    ch = ch - 'Z' + 'A' - 1;
                }
            }
            message[i] = ch;
        }
        cout << message;
    }
    if (choice == 1) {
        cout << "Encryption key: ";
        cin >> key;
        for (i = 0; message[i] != '\0'; i++) {
            ch = message[i];
            if (ch >= 'a' and ch <= 'z') {
                ch = ch - key;
                if (ch < 'a') {
                    ch = ch + 'z' - 'a' + 1;
                }
            }
            else if (ch >= 'A' and ch <= 'Z') {
                ch = ch + key;
                if (ch < 'A') {
                    ch = ch + 'Z' - 'A' + 1;
                }
            }
            message[i] = ch;
        }
        cout << message;
    }
}