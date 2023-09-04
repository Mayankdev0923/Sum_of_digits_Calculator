#include<stdio.h>
#include<math.h>
  int main() {
    
    int n;
    printf("Enter your number : ");
    scanf("%d",&n);
    
    int ten_arab     = n/10000000000;
    int arab         = n/1000000000 - 10*ten_arab;
    int ten_crore    = n/100000000 - 10*arab - 100*ten_arab;
    int crore        = n/10000000 - 10*ten_crore - 100*arab - 1000*ten_arab;
    int ten_lakh     = n/1000000 - 10*crore - 100*ten_crore - 1000*arab - 10000*ten_arab;
    int lakh         = n/100000 - 10*ten_lakh - 100*crore - 1000*ten_crore - 10000*arab - 100000*ten_arab;
    int ten_thousand = n/10000 - 10*lakh - 100*ten_lakh - 1000*crore - 10000*ten_crore - 100000*arab - 1000000*ten_arab; 
    int thousand     = n/1000 - 10*ten_thousand - 100*lakh - 1000*ten_lakh - 10000*crore - 100000*ten_crore - 1000000*arab - 10000000*ten_arab;
    int hundred      = n/100 - 10*thousand - 100*ten_thousand - 1000*lakh - 10000*ten_lakh - 100000*crore - 1000000*ten_crore - 10000000*arab - 100000000*ten_arab;
    int tenth        = n/10 - 10*hundred - 100*thousand - 1000*ten_thousand - 10000*lakh - 100000*ten_lakh - 1000000*crore - 10000000*ten_crore - 100000000*arab - 1000000000*ten_arab;
    int ones         = n/1 - 10*tenth - 100*hundred - 1000*thousand - 10000*ten_thousand - 100000*lakh - 1000000*ten_lakh - 10000000*crore - 100000000*ten_crore - 1000000000*arab - 10000000000*ten_arab;
    
    int sum=ones + tenth + hundred + thousand + ten_thousand + lakh + ten_lakh + crore;
    printf("%d",sum);
    printf("\n---------------------------\n\n");
    
    main();
    
    return 0;
    
  }