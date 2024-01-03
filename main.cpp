#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

vector<string> codes(0);
vector<string> names(0);

bool checkError(int &choice){
   if (choice == 0) return false;
   if (choice < 0 || choice > 3){
      cout << "That's not a valid menu option. Try again.\n";
   }
   return true;
}

void viewSchedule(vector<string> $codes,vector<string> $names){
   for (int i = 0;i < codes.size();i++){
      cout << i+1 << ": " << codes.at(i) << " " << names.at(i) << endl;
   }
   cout << endl;
}

bool addClass(vector<string> &codes,vector<string> &names){
   string codec;
   string name;
   cout << "What course would you like to add? (4 characters long) ";
   cin >> 
}

int main() {
   int choice;

   do {
      cout << "0: Exit\n1. View Schedule\n2. Add Class\n3. Remove Class\nWhich menu option would you like? ";
      cin >> choice;
      if (choice == 1) viewSchedule();
      else if (choice == 2) addClass();
      else if (choice == 3) removeClass();
   } while (checkError(choice));

   return 0;
}