//Bismill

//Multiplication table of 1-20 without using * (Multiplication operator)

#include <iostream>
using namespace std;

int main()
{
    int i , n , j , sum = 0 , c= 10;
    for(n = 1 ; n <= 20 ; n++){
        sum = 0;
        for(i = 1 ; i <= 10 ; i++){

            for(j = i; j>0 ; j-=i){
                sum+=n;
            }
            printf("%d X %d = %d\n" , n , i , sum);
        }
        cout << endl;
    }
    return 0;
}

