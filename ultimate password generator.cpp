#include <iostream>
#include <ctime>
#include <cstdlib> 

using namespace std;

int main()
{
  srand(time(NULL));

  int i; //counter
  int asciiValue; //decimal ascii value
  char c[92]; //array to contain all 92 readable ascii characters
  int password_lenght;
  char retry;

do
{
  cout<<"How long do you want your password? (MAX 93 characters): ";
  cin>>password_lenght;


  if(password_lenght < 1 || password_lenght > 92)
  {
    do
    {
      cout<<"Password Lenght Incorrect. Try again (MAX 93 characters): ";
      cin>>password_lenght;
      
      if(password_lenght > 1 && password_lenght < 94)
      {
        retry='F';
      }

      else
      {
        retry='T';
      }
    } while (retry=='T');
    
  }

  else
  {
    for (i = 0; i < 94; i++)
    {
      asciiValue=i+33;
      c[i]=char(asciiValue);
    }

    cout<<"Your generated password: ";

    for (i=0; i < password_lenght; i++)
    {
      asciiValue=rand() % 93;
      cout<<c[asciiValue]<<" "; //added double spacing for digit precision
    }

    cout<<endl;
    
  }

  cout<<"Do you want to retry? (T/F): ";
  cin>>retry;
  
} while(retry=='T');

cout<<"Thanks for using! Bye! ";

return 0;

}
