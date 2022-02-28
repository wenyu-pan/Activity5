#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct customer {
unsigned int customerNumber;
char* lastName;
struct {
char zipCode[ 6 ];
} personal, *personalPtr = &personal;
} customerRecord, *customerPtr = & customerRecord, allRecords[5];


int main() {
    strcpy (allRecords[0].personal.zipCode,"123456");
     allRecords[0].customerNumber = 1;
     char arr[] = "Pan";
     allRecords[0].lastName = arr;

     strcpy (allRecords[1].personal.zipCode,"543210");
     allRecords[1].customerNumber = 2;
     char arr2[] = "Wang";
     allRecords[1].lastName = arr2;

     strcpy (allRecords[2].personal.zipCode,"121212");
     allRecords[2].customerNumber = 3;
     char arr3[] = "Zong";
     allRecords[2].lastName = arr3;
        
    strcpy (allRecords[3].personal.zipCode,"454323");
    allRecords[3].customerNumber = 4;
    char arr4[] = "Jack";
    allRecords[3].lastName = arr4;

    strcpy (allRecords[4].personal.zipCode,"454322");
    allRecords[4].customerNumber = 5;
    char arr5[] = "KAYK";
    allRecords[4].lastName = arr5;


    
for (int k = 0; k < 5; k ++) {
 cout << "customerNumber: ";

  cout << allRecords[k].customerNumber << " , ";

  cout << "Last Name: ";
   for (int q = 0; q < sizeof(allRecords[k].lastName); q ++) {

 cout << * (allRecords[k].lastName + q) ;
    }

cout << ", " ;
cout << "ZipCode: ";
for (int i = 0; i < 6; i ++) {
cout << allRecords[k].personal.zipCode[i];
  }

cout << endl;
  }

}
