#include <iostream>
using namespace std;



long long FibNumber(int n); //Definition of Fibonacci number method



int main(){

int sizeOfArray; //The size of the Fibonacci Array
cout<<"Please enter the Fibonacci Number you want to compute: \n";
cin>>sizeOfArray;
cout<<"\n";

cout<<"This is the Fibonacci Number for "<< sizeOfArray <<": " << FibNumber(sizeOfArray) << "\n";   //This is the call in the main function for the FibNumber method


}


long long FibNumber(int n){

long long fibArray[n]; //The array that will be used to calculate the Fibonacci Number

fibArray[0] = 0;    //These values for indexes 0 and 1 are already known
fibArray[1] = 1;

for(int i = 2; i <= n; i++){

    fibArray[i] = fibArray[i - 1] + fibArray[i - 2]; //This calculates each step before the Fibonacci number, and then uses the previous numbers
}
return fibArray[n];
}