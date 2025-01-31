#include <stdio.h>
int main()
{
    int N, guess1, guess2, guess3;
    int flag = 0 ;

    scanf("%d", &N);
    scanf("%d", &guess1);

    if (guess1 == N)
    {
        // printf("Right, Player-2 Wins\n");
        flag = 1 ;
    }
    else
    {
        printf("Wrong, 2Chances Left!\n");
        scanf("%d", &guess2);

        if (guess2 == N)
        {
            // printf("Right, Player-2 Wins\n");
            flag = 1 ;
        }
        else
        {
            printf("Wrong, 1Chances Left!\n");
            scanf("%d", &guess3);

            if (guess3 == N)
            {
                // printf("Right, Player-2 Wins\n");
                flag = 1 ;
            }
            else
            {
                printf("Wrong, 0Chances Left!\n");
                
            }
        }
    }

    if (flag == 1 ) {
        printf("Right, Player-2 Wins\n");
    } else {
        printf("Right, Player-1 Wins\n");
    }

    return 0;
}
