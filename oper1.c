Evaluate the expression in a step by step way based on operator precedence and associativity

1) printf("%d\n",1==5==5);
Ans: zero (0)
2) int i =0;
   printf("%d %d",i,i++);
Ans: 1 0
3) int x=5;
   printf("%d %d %d\n",x++,x++,x++);
Ans: 7 6 5
4) int x=2;
   printf("%d   ",++x++);
   printf("%d\n",x++);
Ans:Compilation Error

5) int k=1;
   printf("%d==1 is ""%s\n",k,k==1?"TRUE":"FALSE");
Ans:1==1 is TRUE

6) int i=5;
   i=i++ - --i + ++i;
ANs:6//If we print the i value we will get 6.

7) int a=7;
   a+=a+=a-=6;
   printf("%d\n",a);
Ans:4

8) int x=10,y=5,p,q;
   p=x>9;
   q=p||(x=5,y=10);
   printf("%d %d %d\n",q,x,y);
ANs:1 10 5

9) int x=2,y=1;
   y+=x<<=2;
   printf("%d %d\n",x,y);
Ans:8 9

10) int x=2,y=4,z;
    z=y++*x++|y--;
    printf("%d\n",z);
Ans:13

11) int a=5,b=6,c=7,d;
    d=a&=b&=c&&a;
    printf("%d\n",d);
Ans:0

12) int i=10;
    i=(10<10)?(10>=10)?(10<=10)?1:2:3:4;
    printf("%d\n",i);
Ans:4

13) int a=10,b=20;
    a=(a>5||b=6?40:50);
    printf("%d\n",a);
Ans: error: lvalue required 

14) printf("%x\n",-1>>4);
    printf("%x\n",-1<<4);
Ans:ffffffff
    fffffff0

15) int x=7;
    x=(x<<=x%2);
    printf("%d\n",x);
Ans:14

16) int a=2,b=5,c=1;
    printf("%d\n",(b>=a>=c?1:0));
Ans:1

17) int a=5;
    a=a-~a +1;
    printf("%d\n",a);
Ans:12

18) a=b=c=1;
    x=--a||++b*(3-1)/2&&b*(--c/3);
    printf("%d\n",x);
Ans:0

19) a=10
    b = -5
    c = 2.5
    printf("%d %d",sizeof(a) + sizeof((++b) *c, b);
Ans:8 -5

20) int i=5;
    i=i++ - i
    printf("%d",i)
Ans:-1
