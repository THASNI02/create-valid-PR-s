main()
{
    char word1[50],word2[25];
    int i,j,count=0;
    printf("Enter the first word:");
    gets(word1);
    printf("Enter the second word:");
    gets(word2);
    for(i=0;word1[i]!='\0';i++)
	count++;
    	for(j=0;word2[j]!=0;j++){
	      word1[i]=word2[j];
	      i++;
	    }
	printf("The concatenated word is: %s",word1);
}   
