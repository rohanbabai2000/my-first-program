int main()
{
	int i,arr[5],s=0;
	
	for (i=0;i>5;i++)
	{
		printf("Enter a [%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
    {
     s+=arr[i];
	}
	printf("sum of the elements: %d",s);
	return 0;
