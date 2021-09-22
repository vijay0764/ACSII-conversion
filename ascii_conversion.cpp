#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    // from numbers to char ACSII value

    int n;
    cout << " enter no. of digits you want to convert \n";
    cin>>n;
    cout << "\n";                               //taking input for number of digits to convert
    int arr_digit[n];                                               // iniatilising an array
    int i;
        for(int i=0;i<n;i++)                                   // loop for taking all digits
        {
            cout << "input the digits  \n ";
                cin>>arr_digit[i];
        }
        for(int i=0;i<n;i++)
            {                                           // loops for converting to ACSII code
            cout <<"converted ACSII code    ";
            cout<< char (arr_digit[i])<<endl;
            }
    cout << "\n\n";

       // from char to number ACSII value

    int c;
    cout << " enter no. of characters you want to convert \n";
    cin>>c;
    cout << "\n";                                 //taking input for number of characters to convert
    char arr_char[c];                                                   // iniatilising an array
    int j;
    cout << "input the characters   \n ";
        for(int j=0;j<c;j++)                                           // loop for taking all digits
        {
            cin>>arr_char[j];
        }
        for(int j=0;j<c;j++){                                   // loops for converting to ACSII code
            cout <<"converted ACSII code    ";
            cout<< int (arr_char[j])<<endl;}



return 0;
}
