//TODO: check current time, input validation, file IO, .exe, email?, made a mistake/redo,


#include <iostream>
#include <string>
#include <ctime>



using namespace std;

int main ()
{
  string name;
  string date;
  string yesNO;
  double changeTotal = 0;
  double count = 0;
  double grossCash = 0;
  double shortOver = 0;
  double dropTotal = 0;
  double dollarsSubtracted = 0;
  bool overTwoHundred = 0;
  
  double pennies = 0;
  double nickels = 0;
  double dimes = 0;
  double quarters = 0;
  double halfDollars = 0;
  double dollarCoins = 0;
  double ones = 0;
  double twos = 0;
  double fives = 0;
  double tens = 0;
  double twenties = 0;
  double fifties = 0;
  double hundreds = 0;
  
  time_t ttime = time(0);
  char* dt = ctime(&ttime);
  cout << "The current local date and time is: " << dt << endl;
  
  cout << "Please enter your name: ";
  getline(cin,name);
  
  //TODO: put date
  
  cout << "Enter in the gross cash: ";
  cin >> grossCash;
  
  cout << endl << "Enter in how many pennies are in the registers: ";
  cin >> pennies;
  
  cout << endl << "Enter in how many nickels are in the registers: ";
  cin >> nickels;
  
  cout << endl << "Enter in how many dimes are in the registers: ";
  cin >> dimes;
  
  cout << endl << "Enter in how many quarters are in the registers: ";
  cin >> quarters;
  
  cout << endl << "Enter in how many half dollars are in the registers: ";
  cin >> halfDollars;
  
  cout << endl << "Enter in how many one dollar coins are in the registers: ";
  cin >> dollarCoins;
  
  cout << endl << "Enter in how many dollar bills are in the registers: ";
  cin >> ones;
  
  cout << endl << "Enter in how many two dollar bills are in the registers: ";
  cin >> twos;
  
  cout << endl << "Enter in how many fives are in the registers: ";
  cin >> fives;
  
  cout << endl << "Enter in how many tens are in the registers: ";
  cin >> tens;
  
  cout << endl << "Enter in how many twenties are in the registers: ";
  cin >> twenties;
  
  cout << endl << "Enter in how many fifties are in the registers: ";
  cin >> fifties;
  
  cout << endl << "Enter in how many one hundred dollar bills are in the registers: ";
  cin >> hundreds;
  
  pennies = pennies / 100;
  nickels = nickels / 20;
  dimes = dimes / 10;
  quarters = quarters / 4;
  halfDollars = halfDollars / 2;
  twos = twos * 2;
  fives = fives * 5;
  tens = tens * 10;
  twenties = twenties * 20;
  fifties = fifties * 50;
  hundreds = hundreds * 100;
  
  changeTotal = pennies + nickels + dimes + quarters + halfDollars + dollarCoins;
  
  if (changeTotal < 199)
  {
      while ((ones > 0) && (changeTotal < 199))
      {
          ones--;
          changeTotal++;
          count++;
      }
      cout << endl << "Place " << count << " dollar bills in the register envelope" << endl;
          
      count = 0;
      while ((fives > 0) && (changeTotal < 199))
      {
          fives -= 5;
          changeTotal += 5;
          count++;
      }
      cout << "Place " << count << " five dollar bills in the register envelope" << endl;
      
      count = 0;
      while ((tens > 0) && (changeTotal < 199))
      {
          tens -= 10;
          changeTotal += 10;
          count++;
      }
      cout << "Place " << count << " ten dollar bills in the register envelope" << endl;
      
      count = 0;
      while ((twenties > 0) && (changeTotal < 199))
      {
          twenties -= 20;
          changeTotal += 20;
          count++;
      }
      cout << "Place " << count << " twenty dollar bills in the register envelope" << endl;
  }
    
  while (changeTotal > 200)
  {
    overTwoHundred = 1;
    changeTotal--;
    count++;
    
  }     
  cout << "Place " << count << " dollar bills in the register envelope" << endl;
  
  
 
  dropTotal = dollarsSubtracted + twos + fives + tens + twenties + fifties + hundreds;
  cout << "drop total is " << dropTotal;
  shortOver = grossCash - dropTotal;
  if (shortOver > 0)
  {
      cout << "You are over " << shortOver << " dollars, are you sure you counted correctly?  Type Y for yes, or N for no" << endl;
  }
  
  if (shortOver <= 0)
  {
      cout << "You are short " << shortOver << " dollars, are you sure you counted correctly?  Type Y for yes, or N for no" << endl;
  }
  
  cin >> yesNO;
  //TODO: redo if no
  
  cout << "put " << dollarsSubtracted << " into the drop envelope, and put the rest of the ones into the register envelope" << endl;
  cout << "put the the coins into the register envelope, and the remaining bills into the drop envelope" << endl;
  
 
  
  
  return 0;
}
