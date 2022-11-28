#include <stdio.h>
#include <stdlib.h>
#define uint8 char
#include "project.h"

int main()
{
    int i=0;
   for(i=0;i<=9;i++){ //initialization all the ids with zero
    arr[i].id=0;
   }

   printf("choose what you want\n"
        "1-to check availability of the database press 1\n"
        "2-database size press 2\n"
        "3-to add entry press 3\n"
        "4-to delete entry press 4\n"
        "5-to read entry press 5\n"
        "6-to get a list of the existed IDs press 6\n"
        "7-to check if id exists press 7\n");
        int u=0;
        scanf("%d",&u);
        switch(u)
        {
        case 1:
            printf("\n");
            int x=SDB_isfull();
            printf("%d\n",x);
        break;

        case 2:
            printf("\n");
            int p=SDB_getused();
            printf("number of entries= %d\n",p);
        break;

        case 3:
//3shan ad5l data gdida
printf(" ");
            int l=0,o=0;
            char m=0;
            char y=0;
            printf("please enter student id\n");
            scanf("%d",&m);
            printf("please enter student year\n");
            scanf("%d",&y);
            char arrsub_id[3];
            char arrsub_grades[3];
     for(l=0;l<=2;l++){
        printf("please enter subject id number %d\n",l);
        scanf("%d",&arrsub_id[l]);
        }
     for(o=0;o<=2;o++){
         printf("please enter subjects grade number %d\n",o);
        scanf("%d",&arrsub_grades[o]);
        }
            int g =SDB_addentry(m,y , arrsub_id , arrsub_grades);
            printf("%d\n",g);
        break;

        case 4:
//to delete entry
            printf("please enter the student's id that you want to delete\n");
            char c=0;
            scanf("%c ",&c);
            SDB_deleteentry(c);
        break;

       case 5:
            printf("please enter the ID");
            char j=0;
            scanf("%d",&j);
            char year=0;
            char courseid[3];
            char coursegrade[3];
            int h=SDB_readentry(j, &year ,courseid , coursegrade);
            printf("ID of student :%d\n",j);
            printf("year of student :%d\n",year);
            int e=0;
            for(e=0;e<=2;e++){
            printf("id of course %d:  %d\n",e,courseid[e]);
            }
            int r=0;
            for(r=0;r<=2;r++){
            printf("grade of course %d: %d\n",r,coursegrade[r]);
            }
        break;

        case 6:
            SDB_getlist(&c, listarray);
            int d=0;
            for(d=0;d<=c;d++){
             printf("%d\n",listarray[d]);
            }
        break;

        case 7:
            printf("please enter the ID\n");
            char s=0;
            scanf("%c ",&s);
            int a=SDB_isIDexist(s);
            printf("%d\n",a);
        }


//if u want to test uncomment this
/*
        char id=10;
        char year=20;
        char courseid[3]={1,15,65};
        char coursegrad[3]={100,105,65};
        int g =SDB_addentry(id,year , courseid , coursegrad);
        printf("%d\n",g);
        int p=SDB_getused(); // C after adding one element
        printf("number of entries =%d\n",p);

        printf("please enter the ID\n"); //enter 10 and it will give values up there
            char j=0;
            scanf("%d",&j);
            char yea=0;
            char courseidss[3];
            char coursegradess[3];
            int h=SDB_readentry(j, &yea ,courseidss , coursegradess);
            printf("ID of student :%d\n",j);
            printf("year of student :%d\n",yea);
            int e=0;
            for(e=0;e<=2;e++){
            printf("id of course %d:  %d\n",e,courseidss[e]);
            }
            int r=0;
            for(r=0;r<=2;r++){
            printf("grade of course %d: %d\n",r,coursegradess[r]);
            }





            printf("please enter the student's id that you want to delete\n");
            char c=0;
            scanf("%d",&c);
            SDB_deleteentry(c);
            int s=SDB_getused();
            printf("number of entries= %d\n",s);// C after deleting one element

*/
    return 0;
    }
