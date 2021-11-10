#include <stdio.h>
#include <stdlib.h>

int main(){

int x;
  scanf("%d", &x);

int y = x + 2;
int a[y][y];

  for(int i = 0; i < y; i++){
     for(int j = 0; j < y; j++){
        a[i][j] = 1000001;        }
                                       }
  for(int i = 1 ; i <= x ; i++) {
     for(int j = 1 ; j <= x ; j++)
        scanf("%d", &a[i][j]);
                                            }
int t = 0;

  for(int i = 1 ; i <= y - 2 ; i++){
    for(int j = 1 ; j <= y - 2 ; j++){
       if((a[i][j] <= a[i - 1][j]) && (a[i][j] <= a[i + 1][j]) && (a[i][j] <= a[i][j - 1]) && (a[i][j] <= a[i][j + 1])){
          t++; }
                                                                                                                            }
                                                                                                                                }
printf("%d", t);

return 0;
                                                                                                                                    }
