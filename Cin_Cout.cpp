#include <iostream>
#include <string>
using namespace std;

int main()
{
    string person1, person2, address1, address2, phone1, phone2;
   cout<< "User 1 enter name <<yo>> \n";
   cin>> person1;
   cout<< "User 2 enter name \n";
   cin>> person2;
   cout<< "User 1 enter address \n";
   cin>> address1;
   cout<< "User 2 enter address \n";
   cin>> address2;
   cout<< "User 1 enter phone number \n";
   cin>> phone1;
   cout<< "User 2 enter phone number \n";
   cin>> phone2;
   cout<< person1<<"\t\t"<< address1<<"\t\t"<< phone1<<"\n";
   cout<< person2<<"\t\t"<< address2<<"\t\t"<< phone2<<"\n";
   return 0;
}
