#include <iostream>

using namespace std;

const int N = 3;
int main()
{

   /* 2D array declaration*/
   int LinearIndx[4][5];
   
   int i, j;
   for(i=0; i<4; i++) {
      for(j=0;j<5;j++) {
          //cout << LinearIndx arr[i][j];
         printf("Enter value for LinearIndx[%d][%d]:", i, j);
         scanf("%d", &LinearIndx[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<4; i++) {
      for(j=0;j<5;j++) {
         printf("%d ", LinearIndx[i][j]);
         if(j==4){
            printf("\n");
            
         }
      }
}
    return 0;
}

