
#include "project.h"
 typedef struct NODE
   {
       char id, std_year ;
       char course_id[3];
       char course_grade[3];
   }student;

   student arr[10];  //array of struct

   uint8 c=0;//global variable to count number of entries
   uint8 listarray[];

_Bool SDB_isfull(void){
  if(arr[10].id != 0){
    printf("database is full\n");
    return 1;
  }else
   return 0;
}

uint8 SDB_getused(void){
     if(arr[10].id != 0){
    printf("database is full\n");
  }
    int z=0;
    for(z=0;z<=9;z++){
        if(arr[z].id!=0)
            c++;
    }
 return c;
}

_Bool SDB_addentry(uint8 id,uint8 year , uint8 *subjects , uint8 *grades){
    int i=0;
for(i=0;i<=9;i++){
if(arr[i].id==0){
    arr[i].id=id;
    arr[i].std_year=year;
    int m=0;
    for(m=0;m<=2;m++){ // to fill array of student's subjects
        arr[i].course_id[m]=subjects[m];
    }
    int z=0;
    for(z=0;z<=2;z++){ // to fill array of student's gardes
        arr[i].course_grade[z]=grades[z];

    }
    printf("new entry is successfully added\n");
    return 1;
}else return 0;

}
}

void SDB_deleteentry(uint8 id){
    int i=0;
    for(i=0;i<=9;i++){
        if(id==arr[i].id){
        int z=0;
        for(z=i;z<=9;z++){
            arr[i]=arr[i+1];
        }
        printf("the entry is successfully deleted\n");
            c--;
    }

}
}

_Bool SDB_readentry(uint8 id, uint8 *year , uint8 *subjects , uint8 *grades){
int i=0;
for(i=0;i<=9;i++){
if(arr[i].id==id){
*year=arr[i].std_year;
    int m=0;
    for(m=0;m<=2;m++){
       *(subjects+m)=arr[i].course_id[m];
       grades[m]=arr[i].course_grade[m];
    }
    return 1;
}else return 0;

}
}

void SDB_getlist(int *count, uint8* list){
int x=0 ,i=0;
for(x=0;x<=9;x++){
    if(arr[x].id!=0){
        list[i]=arr[x].id;
        i++;
    }
}

}

_Bool SDB_isIDexist(uint8 id){
int i=0;
    for(i=0;i<=9;i++){
        if(id==arr[i].id){
                return 1;
        }else return 0;
        }
}
