/*Define a class time to represent a time with a 
instance member variables h,m and s to stroe real and imaginary part.
Also define instance member function ... 
1.void Settime(int, int,int);
2.void Showtime() ;
3.void normalize () ;
4.Time add(Time) ;
5.bool is_greater(Time) ;
*/

#include<iostream>
using namespace std ;

class Time
{
    private :
        int h,m,s ;
        
    public :
        void setTime(int x, int y , int z)      // 1
        {
            h = x ;
            m = y ;
            s = z ;
        }
        void showTime()                         // 2
        {
            cout<<h<<":"<<m<<":"<<s<<endl ;
        }
        void normalize ()                        // 3 
        {
            if (s>=60)
            {
                m = m + s/60 ;
                s = s % 60 ;
            }
            if (m>=60)
            {
                h = h + m/60 ;
                m = m % 60 ;
            }
        }
        Time add (Time x)                       // 4
        {
            Time y ;
            y.h = h + x.h ;
            y.m = m + x.m ;
            y.s = s + x.s ;

            return y ;
        }
        bool is_greater (Time x)                // 5 
        {
            if (h > x.h)
                return true ;

            else if (h == x.h)
            {
                if (m > x.m)
                    return true ;

                else if (m == x.m)
                {
                    if (s > x.s)
                        return true ; 
                    else 
                        return false ;
                }
                else 
                    return false ;

            }
            else 
                return false ;
            
        }
        
} ;

int main ()
{
    Time t1 , t2 , t3 ;

    t1.setTime(15,30,04) ;
    t2.setTime(15,30,05) ;

    t1.normalize() ;
    t2.normalize() ;

    t1.showTime() ;
    t2.showTime() ;

    cout<<endl<<"Addition"<<endl ;

    t3 = t1.add(t2) ;
    t3.normalize() ;
    t3.showTime() ;


    if (t1.is_greater(t2))
        cout<<"t1 is greater"<<endl ;
    else
        cout<<"t2 is Greater" ;

    return 0 ;
}

