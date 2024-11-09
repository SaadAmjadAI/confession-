#include<stdio.h>
#include<conio.h>
int main(){
      int reading,writing;
      int  average;
    printf("Enter the time spending in writing confession (in minutes):\n");
    scanf("%d",&writing);
    printf("Enter the time spending in reading confession (in minutes):\n");
    scanf("%d",&reading);
    
    average = reading + writing;

    if (average>=120){
        printf("Oye! 2 ghante se zyada confessions mein laga diye? Itna waqt barbaad! Socho agar yeh 2 ghante parhai ya skill seekhne mein lagate to kidhar pohanch gaye hote! Zindagi mein kuch bara karna hai toh yeh confession waghera chor do, aur apne goals par focus karo!");
         }

         else if  (average<120 && average >=60){
            printf("Abey yar, 1 se 2 ghante confessions par lagana thoda zyada ho gaya na? Dekho,thora socho kya yeh waqt waqayi mein tumhe agay leke ja raha hai? Zindagi meinaise activities ka balance rakhna seekho, warna regret ho ga baad mein");
              } 
        else if (average < 60){
            printf("Wah bhai, kamal kar rahe ho! Sirf thori der mein confessions check kar liya, aur phir apne kaam par wapas lag gaye. Isi tarah focus rakho, tum bahut agay jao ge.Parhai aur apne goals pe dhyan rakho, shabash!");
        }
         
             
            
    
    getch();
}