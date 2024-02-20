/*Define a class complex to represent a complex number with a 
instance member variables a and b to stroe real and imaginary part.
Also define instance member function 
1.void SetData(int, int);
2.void ShowData() ;
3.Complex add(complex) ;
4.complex subtract complex(complex) ;
5.complex multiply(complex) ;
*/

#include<iostream>
using namespace std ;

class Complex
{
    private :
        int a ;
        int b ;
    public :
        void setdata(int x, int y)
        {
            a = x ;
            b = y ;
        }
        void showData()
        {
            cout<<a<<"+"<<b<<"i" <<endl ;
        }
        Complex add (Complex x)
        {
            Complex y ;

            y.a = a + x.a ;
            y.b = b + x.b ;

            return y ;
        }
        Complex subtract (Complex x)
        {
            Complex y ;

            y.a = a - x.a ;
            y.b = b - x.b ;

            return y ;
        }
        Complex multiply (Complex x)
        {
            Complex y ;

            y.a = a * x.a ;
            y.b = b * x.b ;

            return y ;
        }
} ;

int main ()
{
    Complex c1 , c2 , c3 ;
    c1.setdata(2,3) ;
    c2.setdata(10,12) ;
    
    c3 = c1.add(c2) ;
    c3.showData() ;

    c3 = c2.multiply(c1) ;
    c3.showData() ;

    c3 = c1.subtract(c2) ;
    c3.showData() ;

    return 0 ;
}

