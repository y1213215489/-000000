#include <stdio.h>
struct Student{
 int yuwen;
 int shuxue;
int yingyu;
   char name[100];
};
struct Student arr [100];
int index = 0;

int main(){

       printf("xueshengchengjiguanli\n");
        while(1){
        printf("1----tianjiaxueshnrgchengji\n");
        printf("2----shanchuxueshengchengji\n");
        printf("3----xianshisuoyou\n");
        printf("4----yewu1,syoyouzongfenbujigedexuesheng(<180)\n");
        printf("5----yewu2,meiyikedoubujigedexuesheng\n");
        printf("6----yewu3,xianshizongfenzuigaodexuesheng\n");
           printf("7----yewu4,xianshipingjunfenzuigao,qiemeiyoubujigedexuesheng\n");
        printf("8----Tc\n");

        printf("Qxz\n");

        int code;
        scanf("%d",&code);

        if(code == 1){
               printf("Qsrxsxm\n");
                 scanf("%s",arr[index].name);
                

            printf("Qsrxsywcj\n");
            scanf("%d",&(arr[index].yuwen));

            printf("Qsrxssxcj\n");
            scanf("%d",&(arr[index].shuxue));

            printf("Qsrxsyycj\n");
            scanf("%d",&(arr[index].yingyu));
            index++;


        }
        if(code == 2){
            
        }
        if(code == 3){
            
        }
        if(code == 4){
            
        }
        if(code == 5){
            
        }
        if(code == 6){
            
        }
        if(code == 7){
            
        }
        if(code == 8){
            printf("tuichu\n");
            break;
        }
    }

    return 0;

}



