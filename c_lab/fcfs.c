#include<stdio.h>
int main(){
    int i,n,bt[i],wt=0,tat=0,totwt=0,tottat=0;
    
    printf("Enter the number of process :");
    scanf("%d",&n);
    
    printf("enter the burst time :\n");
    for(i=0;i<n;i++){
        printf("P%d :",i+1);
        scanf("%d",&bt[i]);
    }
    printf("\nPROCESS\tBT\tWT\tTAT\n");
    for(i=0;i<n;i++){
        printf("\n%d\t\t%d\t%d\t%d",i+1,bt[i],wt,wt+bt[i]);
        totwt += wt;
        wt += bt[i];
        tottat += wt;
    }
    printf("\ntotal tat : %d",tottat);
    printf("\ntotal wt : %d",totwt);
    printf("\naverage TAT :%.2f",(float)tottat/n);
    printf("\naverage WT :%.2f",(float)totwt/n);
    
    return 0;
}
