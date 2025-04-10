#include<stdio.h>
int main(){
    int temp,i,j,n,p[20],bt[20],wt=0,tat=0,tottat=0,totwt=0;
    printf("enter the number of process :");
    scanf("%d",&n);
    
    printf("enter the burst time\n");
    for(i=0;i<n;i++){
        printf("P%d :",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(bt[i] > bt[j]){
                temp = bt[i]; bt[i]=bt[j];bt[j]=temp;
                temp = p[i]; p[i]=p[j];p[j]=temp;
            }
        }
    }
    
    printf("\nProcess\tBT\tWT\tTAT\n");
    for(i=0;i<n;i++){
        printf("%d\t\t%d\t%d\t%d\n",p[i],bt[i],wt,wt+bt[i]);
        totwt += wt;
        wt += bt[i];
        tottat += wt;
    }
    printf("total tat is : %d\n",tottat);
    printf("total wt is : %d\n",totwt);
    printf("avg tat is :%.2f\n",(float)tottat/n);
    printf("avg wt is :%.2f\n",(float)totwt/n);
    
    return 0;
    
}
