/*3.Define a class TestResult with properties roll_no 
right , wrong , net score. Also define class properties
right_weightage , Wrong_weightage. provide methods to
set and get all the properties.*/

#include<iostream>
using namespace std ;

class TestResult 
{
    private :
        int roll_no , right , wrong , net_score ;
        static int right_weightage , wrong_weightage ;
    public :
        // Setter

        void setRoll_no(int r)
        {
            roll_no = r ;
        }
        void setRight(int r)
        {
            right = r ;
        }
        void setWrong(int w)
        {
            wrong = w ;
        }
        void setNet_score (int n)
        {
            net_score=n ;
        }

        static void setRight_weightage (int rw)
        {
            right_weightage = rw ;
        }
        static void setWrong_weightage (int wr)
        {
            wrong_weightage = wr ;
        }

        //Getter

        int getRoll_no()
        {
            return roll_no() ;
        }
        int getRight ()
        {
            return right ;
        }
        int getWrong ()
        {
            return wrong ;
        }
        int getNet_score()
        {
            return net_score ;
        }

        static int getRight_weightage ()
        {
            return right_weightage ;
        }
        static int getWrong_weightage ()
        {
            return Wrong_weightage ;
        }
        
};

