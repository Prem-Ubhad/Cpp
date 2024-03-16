#include<iostream>
#include<string>
using namespace std;

class binary
{
   string s;
   void check_bin(void);

   public:
      void read(void);
      void ones_compliment(void);
      void display(void);
   
};

void binary :: read(void){
      cout<<"Enter a Binary number "<<endl;
      cin>>s;
}

void binary :: check_bin(void){

      for (int i = 0; i < s.length(); i++)
      {
         if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect Binary Format"<<endl;
            exit(0);
         }
      }
}

void binary ::ones_compliment(void){
      
      check_bin();   //NESTING OF MEMBER FUNCTION
      
      for (int i = 0; i < s.length(); i++)
      {
         if(s.at(i)=='0'){
            s.at(i) = '1';
         }
         else
         {
            s.at(i) = '0';
         }
      }
}

void binary :: display(void){
      cout<<"The Binary Number is "<<endl;
      for (int i = 0; i < s.length(); i++)
      {
         cout<<s.at(i);
      }
      cout<<endl;

}

int main()
{
   binary b;
   b.read();
   // b.check_bin();
   b.display();
   b.ones_compliment();
   b.display();
   return 0;
}