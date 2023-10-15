#include <stdio.h>
int main()
{
	int x;
	printf("Hay chon tu 1 den 10: ");
	scanf("%d",&x);
    if (1<=x && x<=5) printf("You think me so ugly, right?");
    else if (6<=x && x<=10) printf("You love me..., right? :3");
    return 0;
}
