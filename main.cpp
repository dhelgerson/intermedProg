/*
Name: tah568 NetID: tah568
Date: 1/2/24 Due Date: 1/2/24
Description: a calendar book
*/
#include <iostream>
#include <fstream>
#include <string.h>
#include "person.h"

using namespace std;

int main(){

    Person person();
    string filename;
    cout << "Please enter a file to read your contacts from (include extension): ";
    cin >> filename;
    if (filename.find(".txt")) {
        cout << "Correct";
    }

    return 0;
}

string readContacts() {
    return "fixme";
}

void addContacts() {

}

void displayContacts() {

}