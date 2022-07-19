#include<stdio.h>
#include<math.h>
struct player
{
   int score[5];
};
typedef struct player player;


void scan(player *p)
{
    for(int i = 0; i < 5; i++)

        scanf("%d",&(*p).score[i]);

}
double s_dev(player *p)
{
    double sum = 0, s_d = 0, avg = 0, k = 0,s = 0;
    double d[5];
    for(int j = 0; j < 5; j++)
       sum += (*p).score[j];
    avg = sum / 5;

    for(int i = 0; i < 5; i++)
      {
          k = (*p).score[i] - avg;

          s += k*k;


      }
    return sqrt(s / 5);

}
int main()
{
    double min;
    player p[5];
    for(int i = 0; i < 5; i++)
    {
       scan(&p[i]);
       if(i == 0)
        min = s_dev(&p[i]);

       else if(s_dev(&p[i])< min)
       min = s_dev(&p[i]);


  } printf("%lf\n",min);

  return 0;
}
