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
            if(index > 0)
            {

                index--;
                printf("shanchuchenggong,jinjihuichejixu\n");
                char x;
                scanf("%c",&x);
                scanf("%c",&x);
            }
            else
            {
                printf("wuxueshengxinxi,shanchushabai,dianjihuichejixu\n");
                char x;
                scanf("%c",&x);
                scanf("%c",&x);
            }
            
        }
        if(code == 3){
            printf("suoyouxueshengchengjiruxia:\n");

            for(int i = 0; i < index; i++)
        {
            printf("di%dgexueshengdexingmingwei%s,ywcjw:%d,sxcjw:%d\n",i+1,arr[i].name,arr[i].shuxue,arr[i].yingyu);
        }
        printf("\ndianjihuichejixu\n");
        char x;
        scanf("%c",&x);
        scanf("%c",&x);
        }
        if(code==4)
        {
            for(int i = 0;i<index;i++){
                int sum = 0;
                sum=arr[i].yuwen+arr[i].shuxue+arr[i].yingyu;

                if(sum<180){
                    printf("D%dMxs%scjbjg\n",i+1,arr[i].name);
                }
            }
            printf("Sxwc,djhcjx\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        
    
       
        if(code == 5){
            
            if(index>0)
            {
                for(int i=0;i<index;i++)
                {
                    if(arr[i].yuwen<60&&arr[i].shuxue<60&&arr[i].yingyu<60)
                    {
                    printf("所有科目都不及格的学生有%s\n",arr[i].name);
                    }
                }
            }
            else
            {
                printf("查询失败，无学生成绩信息\n");
            }
            printf("点击回车继续\n");
            char enter;
            scanf("%c",&enter);
            scanf("%c",&enter);
        }
            
        
        if(code == 6){
            int sum = 0;
            int max = 0;
            int ID;

            for(int i = 0; i< index; i++)
            {
                if(max < sum)
                {
                    max = sum;
                }
                ID = i+ 1;
            }
            printf("di%dmingxuesheng%sdzongchengjizuigao,zuigaowei%d\n",ID,arr[index].name,max);
            printf("shaixuanwancheng,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        


            
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



