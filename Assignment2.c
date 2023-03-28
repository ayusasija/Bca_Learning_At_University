int main()
{
  int num,a;
    a=0;
    printf("Enter number divisible by 8= ");
    scanf("%d",&num);
    while(num%8==0)
    {
        printf("\nEnter number divisible by 8=");
        scanf("%d",&num);
        a++;
    }
    printf("The number of valid numbers entered are %d",a);
  return 0;
}
