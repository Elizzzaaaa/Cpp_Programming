#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[50], s2[50];

    cout << "Enter string s1: ";
    cin.getline(s1, 50);

    cout << "Enter string s2: ";
    cin.getline(s2, 50);

   cout << strcat(s1, s2);


    return 0;
}
