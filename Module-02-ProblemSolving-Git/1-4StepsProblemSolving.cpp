//Write a program in which take two numbers as input from user Add them And print the result 
// take two numbers from users
// take one operator + to add them 
// write statement that will add them
// store the answer in the variable
// print the value of that variable

#include<iostream>
using namespace std;
int main()
{  // METHOD 1

    // Declaring Variable 
     int number1;
    int number2;
    int result;

    // taking input from the user
    cout<<"Enter your first number :";
    cin>>number1;
    cout<<"Enter your second  number :";
    cin>>number2;

    // Adding two numbers and storing it in a variable 
    result =number1+number2;

    // printing the result
cout<<"The Additon of two numbers is: "<<result;  
// End 

    
   



// Method 2

// declaring variable 
    int number1;
    int number2;
  
   
  
    // taking input from the user
    cout<<"Enter your first number :";
    cin>>number1;
    cout<<"Enter your second  number :";
    cin>>number2;
    // Adding two numbers And printing the result
  cout<<"The Additon of two numbers is: "<<number1+number2;
  // End
   return 0;
    


}