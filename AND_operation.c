#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{

//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){


int num1 = 2;
int num2 = 3;

//scanf("%s\n", string );




int result = 0xFFFFFFFF;


int i = 0;

for (i = num1; i <= num2 ; i++)
{

  result = result & i; 


}

printf("i %d result %d\n",i , result);



//}   //end while

return 0;
}

#if 0
//int number[] = {62505 90614 1962 62755 31327 54260 18945 28203 13203 23507 36785 2022 22843 90869 89529 35190 8873 49909 49959 10499 48037 18809 57754 86249 83304 33334 32134 21649 72891 99755 17568 51747 90369 19530 14501 38047 73789 49798 66250 86991 73304 3034 5364 12498 10254 94893 47687 19126 61153 13997 45976 9189 49158 3730 95437 32461 53415 43922 70461 26305 60029 88028 78051 66749 7557 8903 4795 97698 58700 71044 1040 32003 90429 6404 44501 682 17648 8539 36160 95152 22536 82135 4340 71693 2216 16128 20505 55630 60050 90965 98286 36430 95344 76336 3178 2901 85239 7972 16950 60290 95368 17989 92293 85796 40744 53145 2830 58391 61683 55341 53542 570 53827 74233 72262 56043 90361 9118 28024 66762 82 26310 3191 95426 18997 6368 14678 4235 30691 31627 64525 26058 49615 73169 28206 90359 26313 47387 65101 4347 2727 34995 4917 56553 25579 93530 28947 32291 2648 56971 99052 19081 99632 18594 30858 18628 41313 61887 39215 88356 93513 20091 14413 59480 9611 58970 66190 52275 6356 47642 56621 25434 98988 77889 98339 24567 87771 27285 56857 90418 607 72261 25850 238 7206 73060 35218 48519 34946 90784 36874 28459 10874 67638 4290 20484 26608 70479 72758 49315 34472 45730 91101 33460 23619 89439 58026 11389 33075 31234 18158 33682 3494 60359 50271 10700 33418 1840 75570 68364 92623 28795 13174 19848 96432 17463 56683 39391 4293 45792 5058 55116 91522 96158 88575 31492 1948 62952 59232 35022 10538 93741 85055 14031 54099 35326 41082 87517 53517 33003 72232 46140 61797 85405 82339 74581 19219 39022 13971 39863 84813 35380 94978 92686 31537 99905 24177 33484 79208 99760 84858 89745 93500 69912 20128 63951 5237 77561 67819 75106 10564 40050 21245 88712 41806 19935 63292 77376 58956 93615 33590 43769 28994 44919 52806 76883 44823 76983 26718 24031 93094 11575 30127 86594 81487 50254 50544 3075 27815 34714 78180 38378 74763 15776 27089 32920 35711 6733 10295 11018 347 60236 71138 45692 5154 23944 22574 66329 926 49292 6711 94019 77218 36837 96964 75056 87091 63859 78131 14905 98572 72662 69634 89686 4790 13074 22605 56852 19806 49251 67869 36504 9486 39007 82196 14640 62950 21121 80968 80227 86764 87678 90597 63982 40866 87561 39037 27956 67771 33519 59212 66343 22533 45197 72380 27322 58271 94985 84173 94428 44235 52041 47284 70073 7399 45831 1064 70348 66951 82031 50574 53715 86060 57523 34048 26925 45083 89436 71233 29205 22955 30444 11899 45487 75641 84279 89160 50263 79263 89684 61042 39849 41724 8325 26273 49123 54155 27336 35822 37458 9366 2748 91172 11777 60270 25219 38702 21704 14654 9934 50908 53960 56729 62807 15798 48721 47085 21309 15335 42699 10992 76377 98899 52716 1053 25172 18190 71560 52507 54011 9017 78225 73110 16540 90001 33379 58110 45054 55082 89115 71339 5990 59427 28068 85148 75224 76788 32232 96533 92123 91282 23876 84851 90180 76591 2255 15351 11132 73814 67858 81495 99182 46082 54604 15721 52434 87983 90182 97488 59416 79297 68826 65405 38723 96893 50552 30298 90033 99135 43182 98507 90416 67058 99709 80596 60000 1963 12298 87484 75777 80155 68978 91310 42588 39933 23383 95022 44267 13564 8861 3683 9212 77686 69087 64286 90931 35991 94584 97315 51477 54117 95821 41893 37526 95529 38840 97526 97491 51137 1361 89619 47644 70338 80929 6583 26622 4311 17956 70889 34226 26816 74571 43438 20854 60009 7723 11784 12351 18658 9098 63828 89127 21270 22072 26652 33150 60911 40529};
//int number [] = {12345};
int i, sum  = 0;
int j = 1;
int length = 568;


for ( i = 0; i <length ; i++)
{
  sum = sum + number[i];
  //printf("%d\n",sum );
}

if (sum % 2 == 0)
  printf("2 ");
else 
  printf("1 ");

printf("\n");

//}  //end while

#endif