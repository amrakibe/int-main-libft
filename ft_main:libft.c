-->.isalpha

int main ()
{
	char c;
    c = 10;
    printf("Result when uppercase alphabet is passed: %d", isalpha(c));
	printf("\n%d", ft_isalpha(c));	
    c = 'q';
    printf("\nResult when lowercase alphabet is passed: %d", isalpha(c));
	printf("\n%d", ft_isalpha(c));
    c='+';
    printf("\nResult when non-alphabetic character is passed: %d", isalpha(c));
	printf("\n%d", ft_isalpha(c));
	return (0);
}

-->• isdigit

int main ()
{
	char c;
    c='5';
    printf("Result when numeric character is passed: %d", isdigit(c));
	printf("\n%d", ft_isdigit(c));
    c='*';
    printf("\nResult when non-numeric character is passed: %d", isdigit(c));	
	printf("\n%d", ft_isdigit(c));
	return (0);
}


-->• isalnum

int main()
{
    char c;
    int result;

    c = '5';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);
	printf("%d\n", ft_isalnum(c));
    c = 'Q';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);
	printf("%d\n", ft_isalnum(c));
    c = 'l';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);
	printf("%d\n", ft_isalnum(c));
    c = '8';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);
	printf("%d\n", ft_isalnum(c));
    return 0;
}


-->• isascii

int main()
{
    char c;

    c = 'Q';
    printf("Result when a printable character %c is passed to isprint(): %d", c, isascii(c));
	printf("\n%d", ft_isascii(c));
    c = '*';
    printf("\nResult when a control character %c is passed to isprint(): %d", c, isascii(c));
	printf("\n%d", ft_isascii(c));
    return 0;
}


-->• isprint

int main()
{
    unsigned char c;

    c = 'Q';
    printf("Result when a printable character %c is passed to isprint(): %d", c, isprint(c));
	printf("\n%d", ft_isprint(c));
    c = '\n';
    printf("\nResult when a control character %c is passed to isprint(): %d", c, isprint(c));
	printf("\n%d", ft_isprint(c));
    return 0;
}


-->• strlen

int main ()
{
	int a;
	a = ft_strlen("Hello World");
	printf("%d",a);
	return 0;
}


-->• memset

int main ()
{
	char	str[12] = "hello world";
	char	des[12] = "hello world";
	printf("%s",str);
	printf("%s","\n");
	char *a = ft_memset(str,'*',4);
	printf("%s",a);
	printf("%s","\n");
	printf("%s","****************");
	printf("%s","\n");
	char *b = memset(des,'*',4);
	printf("%s",b);
	return (0);
}

-->• bzero

int main ()
{
	char s[14] = "hello world";
	char t[14] = "hello world";
	ft_bzero(t, 10);
    bzero(s, 10 );
	int i, j; 
	i = j = 0;
	while (!s[i]) i++;
	while (!t[j]) j++;
	printf("mine: %s\noriginal: %s", &t[j], &s[i]);
    return 0;
}


-->• memcpy

int main ()
{
	char src[10] = "hell no!";
	char dest[4];
	char *a = ft_memcpy(dest,src,0);
	char *b = memcpy(dest,src,0);
	printf("%s",a);
	printf("\n**************");
	printf("\n%s", b);
	return 0;
}


-->• memmove

int main ()
{
	char src[10] = "hell no!";
	char dest[4];
	char *a = ft_memmove(dest,src,4);
	char *b = memmove(dest,src,4);
	printf("%s",a);
	printf("\n**************");
	printf("\n%s", b);
	return 0;
}


-->• strlcpy

int main ()
{
	char src[100] = "helox eikdf dohfsdiuf sdjfh";
	char dest[4];
	printf ("%zu\n",ft_strlcpy(dest,src,4));
	return 0;
}


-->• strlcat

int main ()
{
	char src[10] = "hel";
	char dest[8] = "lo!";
	printf("%u\n",ft_strlcat(src,dest,4));
	printf("%lu",strlcat(src,dest,4));
	return 0;
}


-->• toupper

int main() {
    char c;

    c = 'm';
    printf("%c -> %c", c, toupper(c));
	printf("\n%c",ft_toupper(c));
    c = 'D';
    printf("\n%c -> %c", c, toupper(c));
	printf("\n%c", ft_toupper(c));
    c = '9';
    printf("\n%c -> %c", c, toupper(c));
	printf("\n%c", ft_toupper(c));
    return 0;
}


-->• tolower

int main() {
    char c;

    c = 'M';
    printf("%c -> %c", c, tolower(c));
	printf("\n%c",ft_tolower(c));
    c = 'd';
    printf("\n%c -> %c", c, tolower(c));
	printf("\n%c", ft_tolower(c));
    c = '9';
    printf("\n%c -> %c", c, tolower(c));
	printf("\n%c", ft_tolower(c));
    return 0;
}


-->• strchr

int main () {
   const char str[] = "http://www.facebook.com";
   const char ch = '.';
   char *ret;
   char *dev;

   ret = strchr(str, ch);
   dev = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("\nString after |%c| is - |%s|\n", ch, dev); 
   return(0);
}


-->• strrchr

int main () {
   int len;
   const char str[] = "http://www.facebook.com";
   const char ch = '.';
   char *ret;
   char *dev;

   ret = strrchr(str, ch);
   dev = ft_strrchr(str, ch);
   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("\nString after |%c| is - |%s|\n", ch, dev);
   return(0);
}


-->• strncmp

int main()
{
	char	s1[10] = "";
	char	s2[10] = "";
	printf("%d",ft_strncmp(s1,s2,2));
	return 0;
}

-->• memchr

int main () {
   const char str[] = "http://www.facebook.com";
   const char ch = '.';
   char *ret;
   char	*dev;

   ret = memchr(str, ch, 5);
   dev = ft_memchr(str, ch, 5);
   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("String after |%c| is - |%s|\n", ch, dev);

   return(0);
}


-->• memcmp

int main()
{
	char	s1[10] = "abcd";
	char	s2[10] = "abCD";
	printf("%d", memcmp(s1,s2,2));
	printf("\n%d",ft_memcmp(s1,s2,2));
	return 0;
}


-->• strnstr

int main ()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;
	char *ptr2;

	ptr = strnstr(largestring, smallstring, 2);
	ptr2 = ft_strnstr(largestring, smallstring, 2);
	printf("%s", ptr);
	printf("\n*********\n");
	printf("%s", ptr2);
	return 0;
}


-->• atoi

int main () {
   int val;
   int mal;

   char str[20] = "-5481";
   char dev[20] = "hello";
   val = atoi(str);
   mal = atoi(dev);
   printf("String value = %s, Int value = %d\n", str, val);
   printf("%d",ft_atoi(str));
   printf("\nString value = %s, Int value = %d\n", dev, mal);
   printf("%d",ft_atoi(dev));
   return(0);
}


-->• calloc

int main(void)
{
    int i, n;
    int *a;
    printf("Number of elements: ");
    scanf("%d", &n);

    //a = (int *) calloc(n, sizeof(int));
    a = ft_calloc(n, sizeof(int));

    printf("Enter numbers: \n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Numbers entered: \n");
    for(i = 0; i < n; i++)
        printf("%d  ", a[i]);
    printf("\n");

    return 0;
}


-->• strdup

int main()
{
	char src[] = "Hamid";
	printf("%s",ft_strdup(src));
	return 0;
}


-->.ft_substr

int main ()
{
	char const str[] = "HellO wORLD its mj";
	printf("%s\n",ft_substr(str, 20, 5));
	return (0);
}


-->.ft_strjoin

int main ()
{
	char str[] = "Go ";
	char str1[] = "BOB";
	printf("%s",ft_strjoin(str,str1));
	return 0;
}


-->.ft_strtrim

int main()
{
    char s1[]= "25hEllo World 35d mj25";
	printf("%s\n",ft_strtrim(s1, "25"));
	return (0);
}

--> .ft_split

int main()
{
    char months[] = "JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC";
    char** tokens;

    printf("months=[%s]\n\n", months);

    tokens = ft_split(months, ',');

    if (tokens)
    {
        int i;
        for (i = 0; *(tokens + i); i++)
        {
            printf("month=[%s]\n", *(tokens + i));
            free(*(tokens + i));
        }
        printf("\n");
        free(tokens);
    }

    return 0;
}

-->.ft_itoa

int main () {
   int val;
   int mal;

   printf("%s",ft_itoa(1555));
   printf("\n%s",ft_itoa(-578));
   return(0);
}

-->.ft_strmapi

char	f(unsigned int i, char c)
{
	return (ft_tolower(c));
}


int main ()
{
	char const str[] = "helloworld";
	char	*x;
	
	x = ft_strmapi(str, f);
	printf("%s", x);
	return (0);
}

-->.ft_striteri

void	f(unsigned int i, char *str)
{
	i = 0;
	str[i] = str[i] - 32;
}

int main ()
{
	char	str[] = "helloworld";
	
	printf("%s\n", str);
	ft_striteri(str, f);
	printf("%s", str);
	return (0);
}


-->.ft_putchar_fd

#include<fcntl.h>

int main ()
{
	int fd = open("test", O_RDWR | O_CREAT, 0777);

	ft_putchar_fd('B',fd);
	return (0);
}

-->.ft_putstr_fd

#include<fcntl.h>

int main ()
{
	int fd = open("test1", O_RDWR | O_CREAT, 0777);

	ft_putstr_fd("BOO!",fd);
	return (0);
}

-->.ft_putendl_fd

#include<fcntl.h>

int main ()
{
	int fd = open("test2", O_RDWR | O_CREAT, 0777);

	ft_putendl_fd("BOO!",fd);
	return (0);
}
-->.ft_putnbr_fd

#include<fcntl.h>

int main ()
{
	int fd = open("test3", O_RDWR | O_CREAT, 0777);

	ft_putnbr_fd(515,fd);
	return (0);
}

-->.ft_lstnew

int main ()
{
	t_list	*node1;
	t_list	*node2;

	node1 = ft_lstnew("hello");
	node2 = ft_lstnew("world");
	node1->next = node2;
	printf("content: %s\nnext: %s", node1->content, node2->content);
	return (0);
}

-->.ft_lstadd_front

int main()
{
	t_list **node;
	t_list *node0 = ft_lstnew("hello");
	t_list *node1 = ft_lstnew("mj");
	t_list *node2 = ft_lstnew("maroc");

	node = &node0;
	ft_lstadd_front(node, node0);
	
	ft_lstadd_front(node, node1);
	
	ft_lstadd_front(node, node2);
	printf("%s\n", node2->content);
	printf("%s\n", node2->next->content);
	printf("%s\n", node2->next->next->content);
	return (0);
}

-->.ft_lstsize

int main ()
{
	t_list	*node1 = ft_lstnew("MJ");
	t_list	*node2 = ft_lstnew("MJ");
	t_list	*node3 = ft_lstnew("MJ");
	t_list	*node4 = ft_lstnew("MJ");

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;
	printf("%d", ft_lstsize(node1));
	return (0);
}


-->.ft_lstlast

int main ()
{
	t_list	*node = ft_lstnew("hello");
	t_list	*node1 = ft_lstnew("mj");
	t_list	*node2 = ft_lstnew("bro");
	t_list	*node3 = ft_lstnew("yes");

	node->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	printf("%s", ft_lstlast(node)->content);
	return (0);
}

-->.ft_lstadd_back

int main()
{
	t_list **node;
	t_list *node0 = ft_lstnew("hello");
	t_list *node1 = ft_lstnew("mj");
	t_list *node2 = ft_lstnew("maroc");

	ft_lstadd_back(node, node0);
	
	ft_lstadd_back(node, node1);

	ft_lstadd_back(node, node2);
	printf("%s", ft_lstlast((*node))->content);
	return (0);
}

-->.ft_lstdelone

void	del(void* s)
{
	ft_bzero(s, 9);
}

int main()
{
	t_list	*node = ft_lstnew(ft_strdup("hell hell"));
	printf("%s\n",node->content);
	ft_lstdelone(node, del);
	for (int i = 0; i < 9; i++)
		printf("%d",((char *)node->content)[i]);
	return (0);

-->.ft_lstclear



-->. ft_lstiter

void	f(unsigned int i, char *str)
{
	i = 0;
	str[i] = str[i] - 32;
}

int main ()
{
	char	str[] = "helloworld";
	
	printf("%s\n", str);
	ft_striteri(str, f);
	printf("%s", str);
	return (0);
}


-->.ft_lstmap

void	del(void* s)
{
	ft_bzero(s, 9);
}

void	*f(void *s)
{
	void	*p = malloc(sizeof(int));
	*(int *)p = *(int *)s + 1;
	return (p);
}

int main ()
{
	int	tab[] = {0, 1, 2, 3};
	t_list	*node;
	node = ft_lstnew(tab);
	int i = 1;
	while (i < 4)
	{
		ft_lstadd_back(&node, ft_lstnew(tab + i));
		i++;
	}
	t_list	*a = ft_lstmap(node, f, del);
	i = 0;
	while (i < 4)
	{
		printf("%d\n", *(int *)b->content);
		b = b->next;
		i++;
	}
	return (0);
}
