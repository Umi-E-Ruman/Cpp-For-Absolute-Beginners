#include<iostream>
using namespace std;
int main()
{  // Without manipulator and escape sequence output in same line 
     cout<<"My name is Umi E Ruman";
    cout<<"I am from Lahore";
    cout<<"Coding is so easy";
    
    // With manipulator output in different lines
    // This is like your enter button on keyboard getting you on next line 
    cout<<"My name is Umi E Ruman"<<endl;
     cout<<"I am from Lahore"<<endl;
     cout<<"Coding is so easy"<<endl;

// This is with escape sequence
// same as manipulator Get you on different lines
     cout<<"My name is Umi E Ruman\n";
     cout<<"I am from Lahore\n";
     cout<<"Coding is so easy\n";


     /* The difference 
1. Endl flushes the buffer and move on next line 
2./n just move on next line */

// Explained in very depth in tutorial lecture


//2. just work as tab button give space and better formatting to your output :)
cout<<"Hello\tWorld";

// output difference 
cout<<"3+7\n"; // output 3+7
cout<<3+7; // output 10

return  0;

}