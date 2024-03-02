/*5. Define a class matrix to represent a 3x3 order matrix. Provide
appropriate methods and properties to the class. also define following 
method in the class
i. Matrix add(Matrix)
ii. Matrix Sub(Matrix)
iii. Matrix Mult(Matrix)
iv. Matrix transpose () 
v. bool is_singular ()   */

#include<iostream>
using namespace std ;

class Matrix
{
    private:
        int a[3][3]={0} ;
        int i , j ;

    public:
        void setArray ()
        {
           
            cout<<"Enter 9 elements : "<<endl ;
            
            for (i=0 ; i<3 ; i++)
                for (j=0 ; j<3 ; j++)
                    cin>>a[i][j] ;
        }
        Matrix add (Matrix x)
        {
            Matrix temp ;
            
            for (i=0 ; i<3 ; i++)
                for (j=0 ; j<3 ; j++)
                    temp.a[i][j] = a[i][j] + x.a[i][j] ;
            return temp ;

        }
        Matrix sub (Matrix x)
        {
            Matrix temp ;
            
            for (i=0 ; i<3 ; i++)
                for (j=0 ; j<3 ; j++)
                    temp.a[i][j] = a[i][j] - x.a[i][j] ;
            return temp ;

        }
        Matrix multiple (Matrix x)
        {
            Matrix temp ;
            
            int k ;

            for (i=0 ; i<3 ; i++)
            {
                for (j=0 ; j<3 ; j++)
                {
                    for (k=0 ; k<3 ; k++)
                        temp.a[i][j] = temp.a[i][j] + ( a[i][k] * x.a[k][j] ) ;
                }
            }
            return temp ;
        }

        void showArray()
        {
            cout<<endl ;
            
            for (i=0 ; i<3 ; i++)
            {
                for (j=0 ; j<3 ; j++)
                    cout<<a[i][j]<<"  " ;
                
                cout<<endl ;
            }
            cout<<endl ;
        }

        Matrix transpose ()
        {
            Matrix temp ;
            for (i=0 ; i<3 ; i++)
                for (j=0 ; j<3 ; j++)
                    temp.a[i][j] = a[j][i] ;
            return temp ;
        }
        bool is_singular ()
        {
            int x = (a[0][0]*(a[1][1]*a[2][2] - a[2][1]*a[1][2]))  -  ( a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0]) ) +  ( a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1]) ) ;

            if (x==0)
                return true ;
            else
                return false ;
        }
} ;

int main ()
{
    Matrix m1, m2 , m3 ;

    m1.setArray() ;
    m2.setArray() ;

    m1.showArray() ;
    m2.showArray() ;

    /*cout<<endl<<"ADDITION"<<endl ;
    m3 = m1.add(m2) ;
    m3.showArray() ;

    cout<<endl<<"SUBTRACTION"<<endl ;
    m3 = m1.sub(m2) ;
    m3.showArray() ;*/

    cout<<endl<<"MULTIPLE"<<endl ;
    m3 = m1.multiple(m2) ;
    m3.showArray() ;

    /*m3 = m1.transpose() ;
    m3.showArray() ;*/

    /*cout<<endl<<"SINGULAR"<<endl ;
    if (m1.is_singular())
        cout<<"m1 is singular" ;
    else
        cout<<"m1 is not singular" ;*/


}
