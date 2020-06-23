#include <stdio.h>
#include <stdlib.h>
#define tam 100

int main()
{
    int N, i, j, L, C, k;

    scanf("%d", &N);
    scanf("%d %d", &L, &C);

    float matriz[L][C];
    float matrizSOMA[L][C];
    float F[tam][tam];

    for (k=0; k<N; k++)
    {
        for (i=0; i<L; i++)
        {
            for (j=0; j<C; j++)
            {
                scanf("%f", &matriz[i][j]);
               if (k==0)
                {    matrizSOMA[i][j] = matriz[i][j];
                }
                else matrizSOMA[i][j] = matrizSOMA[i][j] + matriz[i][j];
            }
        }
    }
    for (i=0; i<L; i++)
    {
        for (j=0; j<C; j++)
        {
            F[i][j] = matrizSOMA[i][j]/N;
        }
    }
    for (i=0; i<L; i++)
    {
        for (j=0; j<C; j++)
        {
            printf("%.2f ", F[i][j]);
        }
      printf("\n");
    }


return 0;
}
