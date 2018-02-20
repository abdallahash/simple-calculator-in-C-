#include<iostream>
#include<stdlib.h>
using namespace std ;
double sum ( double x , double y );
double subtract (double a , double b ) ;
double multiply (double p , double q );
double divide ( double k , double l );
int main ()
{
    double x1 , y1 , a1 , b1 , p1 , q1 , k1 , l1, fun  ;
    cout <<"++++TO add  two  numbers   press  1 ++++"<<endl;
    cout <<"----To subtract two numbers press 2 ----"<<endl;
    cout <<"****To multiply two numbers press 3 ****"<<endl;
    cout <<"////To divide  two  numbers press 4 ////"<<endl;
    cin>> fun ;
    if ( fun ==1)
    {
         cout<<"Enter two numbers to sum "<<endl;
         cin>> x1 >> y1 ;
         cout<<"The sum of the two numbers is " <<sum (x1 , y1 )<<endl;
         }
         else 
         if ( fun == 2 )
         {
              cout<<"Enter any two numbers to subtract "<<endl;
              cin>> a1 >> b1 ;
              cout<<"The subtraction of the numbers is "<< subtract(a1 , b1 )<<endl;
              }
              else 
              if (fun ==3 )
              {
                      cout<<"Enter any two numbers to multiply "<<endl;
                      cin>> p1 >> q1 ;
                      cout<<"The multiplication of the numbers is " << multiply ( p1 , q1 )<< endl;
                      }
                      else 
                      if (fun == 4 )
                      {
                              cout<<"Enter any two numbers to divide  "<<endl;
                              cin>> k1 >> l1 ;
                              cout<<"The division of the two numbers is "<< divide( k1 , l1 )<<endl;
                              }
                              else cout<<"You have entered un faund value please try again "<<endl;
system ("pause");
return 0;
     
}
double sum (double x , double y )
{
       double z ; 
       z = x+y ;
       return z ;
       }
double subtract (double a , double b )
{
       double c ; 
       c = a - b ;
       return c ;
}
double multiply (double p , double q )
{
       double s ;
       s = p * q ;
       return s ;
       }
double divide ( double k , double l )
{
       double m ;
       m = k/l ;
       return m ;
       }
               
