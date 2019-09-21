#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
float mean(int n)
{
        int A[n],sum=0;
        float m;
        for(int i=0;i<n;i++)
        {
        scanf("%d",&A[i]);
        sum+=A[i];
        }
        m=(float)sum/n;
        return(m);
}
float var(int n)
{
        float A[n],sum=0,summation=0,v,m;
        int i;
        for(int i=0;i<n;i++)
        {
                scanf("%f",&A[i]);
                sum+=A[i];
        }
        m=(float)sum/n;
        for(i=0;i<n;i++)
        {
                summation+=((A[i]-m)*(A[i]-m));
        }
        v=(float)summation/(n-1);
        return(v);
}
float SD(int n)
{
        float v;
        v=var(n);
        return pow(v,0.5);
}
float median(int n)
{
        float temp,s,med,A[n];
        int i,j,p;
        for(i=0;i<n;i++)
        {
                scanf("%f",&A[i]);
        }
        for(i=0;i<n;i++)
        {
                s=A[i];
                p=i;
                for(j=i+1;j<n;j++)
                {
                        if(A[j]<s)
                        {
                                s=A[j];
                                p=j;
                        }
                }
                temp=A[i];
                A[i]=A[p];
                A[p]=temp;
        }
        if(n%2==0)
        {
                med=(A[n/2]+A[(n/2)+1])/2;
                return med;
        }
        else
        {
                return A[n/2];
        }
}
int fact(int m)
{
        int f=1,i;
        for(i=1;i<=m;i++)
        {
                f=f*i;
        }
        return f;
}
float hyperfactorial(int n)
{
    // initialise the val to 1
    float v = 1;
    for (int i = 1; i <= n; i++)
        {
        v = v * pow(i,i);
    }
    // returns the hyperfactorial of a number
    return v;
}
int pmt(int n,int o)
{
        int p;
        p=fact(n)/fact(n-o);
        return p;
}
int comb(int n,int o)
{
        int c;
        c=fact(n)/(fact(o)*fact(n-o));
        return c;
}
float sum_gp(int a,int r,int n)
{
        float s;
        if(r<1)
        {
                s=a*(1-pow(r,n))/(1-r);
        }
        else
        {
                s=a*(pow(r,n)-1)/(r-1);
        }
return s;
}
float sum_ap(int a,int d,int n)
{
        float sa;
        sa=(n/2)*(2*a+(n-1)*d);
        return sa;
}
float sum_Ap(int a,int an)
{       int n;
        float s;
        s=(n/2)*(a+an);
        return s;
}
float Area(int d, int h1, int h2)
{
         //h1 and h2 represents the lengths of the perpendiculars to the given di
    float a;
    a=0.5 * d * (h1 + h2);
    return a;
}
int nthEnneadecagonal(long int n)
{
        //Enneadecagonal number//
    // Formula for finding
    // nth Enneadecagonal number
    return (17 * n * n - 15 * n) / 2;
}
float mod(float a)
{
        float b;
        if(a>0)
        {
                return a;
        }
        if(a<0)
        {
                b=-a;
                return b;
        }
}
float babsRoot(float n)
{
    float x = n;
    float y = 1;
    float e = 0.000001;
    while (x - y > e)
{
        x = (x + y) / 2;
        y = n / x;
}
    return x;
}
int bernoulli(float p)
{

    if(p < 0 || p > 1) return -1;
    float x = (float)rand()/(float)(RAND_MAX/1);
    if(p < x) return 1;
    return 0;
}
int bin_gray(int bin)
{
    int a,b,result=0,i=0;
    while (bin != 0)
    {
        a = bin % 10;
        bin = bin / 10;
        b = bin % 10;
        if ((a && !b) || (!a && b))
        {
            result = result + pow(10, i);
        }
        i++;
    }
    return result;
}
int poissonRandom(double expectedValue)
 {
  int INT_MAX;
  int n = 0;
  double limit;
  double x;
  limit = exp(-expectedValue);
  x = rand() / INT_MAX;
  while (x > limit) {
    n++;
    x *= rand() / INT_MAX;
  }
  return n;
}
int cubeofsum(int a,int b)
{
  int sum;
  sum=(a+b)*(a+b)*(a*a+b*b);
  return sum;
}
int sumofcubes(int a,int b)
{
  int sum;
  sum=(a+b)*(a*a-a*b+b*b);
  return sum;
}
int differenceofcubes(int a,int b)
{
  int sum;
  sum=(a-b)*(a*a+a*b+b*b);
  return sum;
}
int squareofsumofthree(int a,int b, int c)
{
  int sum;
  sum=a*a + b*b + c*c + 2*a*b + 2*a*c + 2*b*c;
  return sum;
}
int squareofdiffofthree(int a,int b, int c)
{
  int sum;
  sum=a*a + b*b + c*c - 2*a*b - 2*a*c - 2*b*c;
  return sum;
}
int decimal_bin(int d)
{
        int n;
     int binaryNum[32];
    int i = 0;
    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
   return n;
}
int revdigits(int num)
{
    int rev_num = 0;
    while(num > 0)
    {
        rev_num = rev_num*10 + num%10;
        num = num/10;
    }
    return rev_num;
}
int arrayfrequency(int a[], int n, int x)
{
    int count = 0;
    for (int i=0; i < n; i++)
       if (a[i] == x)
          count++;
    return count;
}
int sum_fibonacci(int n)
{    if (n <= 0)
       return 0;
    int f[n+1];
    f[0] = 0, f[1] = 1;
    int sum = f[0] + f[1];

    for (int i=2; i<=n; i++)
    {
        f[i] = f[i-1]+f[i-2];
        sum += f[i];
    }

    return sum;
}
void equation_sphere(int a,int b,int c,int r)
{
        //a,b,c are the coordinates in centre//
        //r is radius//
        float j;
        j=r*r;
        printf("(x-%d)2+(y-%d)2+(z-%d)2=%f",a,b,c,j);
}
void Cart_product(int arr1[], int arr2[], int n, int n1)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n1; j++)
            printf("{%d, %d}, ", arr1[i], arr2[j]);
                return;
}
void quadrant(int x, int y)
{

    if ((x > 0) && (y > 0))
    {
        printf("lies in First quadrant");
    }
    else if ((x < 0) && (y > 0))
    {
        printf("lies in Second quadrant");
    }
    else if ((x < 0) && (y < 0))
    {
        printf("lies in Third quadrant");
    }
    else if ((x > 0 )&& (y < 0))
    {
        printf("lies in Fourth quadrant");
    }
    else if ((x == 0) && (y > 0))
    {
        printf("lies at positive y axis");
    }
    else if ((x == 0) && (y < 0))
    {
        printf("lies at negative y axis");
    }
    else if ((y == 0)&& (x < 0))
    {
        printf("lies at negative x axis");
    }
    else if ((y == 0) && (x > 0))
    {
        printf("lies at positive x axis");
    }
    else
    {
        printf("lies at origin");
    }
        return;
}
float angle_planes(float a1,float b1,float a2,float b2 ,float c1,float c2)
{
        float theta,x,y1,y2,z1,z2,d2;
        x=a1*a1+b1*b1+c1*c2;
        z1=a1*a1+b1*b1+c1*c1;
        z2=a2*a2+b2*b2+c2*c2;
        y1=pow(z1,0.5);
        y2=pow(z2,0.5);
        d2=x/(y1*y2);
        theta=acos(d2);
        return theta;
}
float dis_parallel(float d1,float d2,float a,float b,float c)
{
        int x,d;
        float e,dis;
        x=d2-d1;
        b=mod(x);
        d=a*a+b*b+c*c;
        e=pow(d,0.5);
        dis=b/e;
        return dis;
}
void shortest_distancepoint_plane(float x1, float y1, float z1,
                    float a, float b, float c, float d)
{
    float e,l;
    d = mod((a * x1 + b * y1 + c * z1 + d));
    e = pow((a * a + b * b + c * c),0.5);
    l=d/e;
    printf("Perpendicular distance is %f",l);
        return;
}
void equation_plane(float x1, float y1,
                    float z1, float x2,
                    float y2, float z2,
                    float x3, float y3, float z3)
{
    float a1,b1,c1,a2,b2,c2,a,b,c,d;
     a1 = x2 - x1;
     b1 = y2 - y1;
     c1 = z2 - z1;
     a2 = x3 - x1;
     b2 = y3 - y1;
     c2 = z3 - z1;
     a = b1 * c2 - b2 * c1;
     b = a2 * c1 - a1 * c2;
     c = a1 * b2 - b1 * a2;
     d = (- a * x1 - b * y1 - c * z1);
    printf("equation of plane is %.2f x + %.2f"
        " y + %.2f z + %.2f = 0",a,b,c,d);
    return;
}
void shortest_distance(float x1, float y1,
                       float a, float b,
                       float c)
{
    float d = fabs((a * x1 + b * y1 + c)) /(sqrt(a * a + b * b));
    printf("Perpendicular distance is %f\n", d);
    return;
}
float nPr(int n,int r)
{
        float l,g;
        l=fact(n);
        g=fact(n-r);
        return l/g;
}
void checkPrimeNumber()
{
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(i=2; i <= n/2; ++i)
    {
        if(n%i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("%d is not a prime number.", n);
    }
    else
    {
        printf("%d is a prime number.", n);
    }
}
int checkArmstrongNumber(int number)
{
    int originalNumber, remainder, result = 0, n = 0, flag;
    originalNumber = number;
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }
    originalNumber = number;
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }
      if(result == number)
      {
        flag = 1;
      }
    else
    {
        flag = 0;
    }
    return flag;
}
void printPowerSet(char *set, int l , int h , int size)
{
    int i=l;
    for(i=l;i<=h;i++){printf("%c",set[i]);}
     printf("n");
     if(l+1 < size)
     {
          printPowerSet(set,l+1,h,size);
     }
     if(h-1 >= 0 )
     {
            printPowerSet(set,l,h-1,size);
     }
}
int findMissing(int a[], int N, int mean)
{
  // Find sum of array elements
  int sum = 0;
  for (int i = 0; i < N - 1; i++)
  {
    sum += a[i];
  }
  return (mean * N) - sum;
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
float getProbability(int a, int b, int c, int d)
{
        //Probability of A winning the match when individual probabilities of hit
    float p,q,x;
    p = (float)a / (float)b;
    q = (float)c / (float)d;

    x = p * (1 / (1 - (1 - q) * (1 - p)));
    return x;
}
int findMinNumber(int n)
{
    int count = 0, a = 1;
    while (n%2 == 0)
    {
        count++;
        n /= 2;
    }
    if (count%2)
    {
        a *= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        count = 0;
        while (n%i == 0)
        {
            count++;
            n /= i;
        }

       if (count%2)
            a *= i;
    }

   if (n > 2)
        a *= n;

    return a;
}
int maxAbsDiff(int a[], int n)
{
    int min = a[0];
    int max = a[0];
    int x;
    for (int i = 1; i < n; i++)
        {
       if(a[i]<a[0])
        {
                min=a[i];
        }
        else if(a[i]>a[0])
        {
                max=a[i];
        }
    }
    x= (max - min);
        if(x<0)
        {
                x=-x;
        }
        else
        {
                x=x;
        }
    return x;
}
float find_probability(float p, float q,
                        float r, float s)
{
        /*probability that a player wins when probabilities of hitting the target
        float t,a;
        t = (1 - p / q) * (1 - r / s);
        a = (p / q) / (1 - t);
    return a;
}
float sum_infgp(float a,float r)
{
        float s;
        s=a/(1-r);
        return s;
}
int prob_sum_dices(int a)
{
        //probability of getting any sum with two dice//
        if(a==2||a==12)
        {
        return (float)1/36;
        }
        if(a==3||a==11)
        {
        return (float)1/18;
        }
        if(a==4||a==10)
        {
        return (float)1/12;
        }
        if(a==5||a==9)
        {
        return (float)1/9;
        }
        if(a==6||a==8)
        {
        return (float)5/36;
        }
        if(a==7)
        {
        return (float)1/6;
        }
}
float wastedWater(float V,float M,float N)
{
        //volume V of a tank in liter//
        // speed of M liter per minute//
        //leakage of N liter per minute//
    float w,a,t;
        a=(M-N);
        t=V/a;
    w=N*t;
    return w;
}
float equation_line(int m,int b)
{
        printf("equation of line is y=%d x+%d",m,b);
}
void findRoots(int a, int b, int c)
{
        int d;
        float v;
    // If a is 0, then equation is not quadratic, but
    // linear
    if (a == 0)
    {
        printf("LINEAR EQUATION");
        return;
    }
    d = (b*b) - (4*a*c);
    v =pow(mod(d),0.5);
    if (d > 0)
    {
        printf("Roots are real and different \n");
        printf("%f\n%f",(float)(-b + v)/(2*a)
            , (float)(-b - v)/(2*a));
    }
    else if (d == 0)
    {
        printf("Roots are real and same \n");
        printf("%f",-(float)b / (2*a));
    }
    else
    {
        printf("Roots are complex \n");
        printf("%f + i%f\n and %f - i%f", -(float)b / (2*a),v
            ,-(float)b / (2*a), v);
    }
}
void pythagoreanTriplets(int i,int f)
{
    int a,b,c;
    int d,e,g;
    d=c*c;
    e=a*a;
    g=b*b;
    for(a=i;a<=f;a++)
    {
        for(b=a;b<=f;b++)
        {
                for(c=b;c<=f;c++)
                {
                        if(d=(e+g))
                        {
                                printf("%d,%d,%d\n",a,b,c);
                        }
                }
        }
    }
}
    int motzkin(int n)
{
    // Base Case
    if (n == 0 || n == 1)
        return 1;
    // Recursive step
    return ((2 * n + 1) * motzkin(n - 1) +
            (3 * n - 3) * motzkin(n - 2)) / (n + 2);
}
void factors(int n)
{
    for (int i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            printf("%d ",i);
        }
    }
}
void equation_para(int a)
{
        printf("y2=4%dx",a);
}
void equation_hyp(int a,int b)
{
        int l,g;
        l=a*a;
        g=b*b;
        printf("(x2/%d)-(y2/%d)=1",l,g);
}
void equation_ellip(int a,int b)
{
        int l,g;
        l=a*a;
        g=b*b;
         printf("(x2/%d)+(y2/%d)=1",l,g);
}
void equat_line_vect(int x1,int y1,int z1,int a,int b,int c)
{
        printf("((x-%d)/%d)=((y-%d)/%d)=((z-%d)/%d)",x1,a,y1,b,z1,c);
}
void equation_circle(int a,int b,int r)
{
        float l;
        l=r*r;
        printf("(x-%d)2+(y-%d)2=%f",a,b,l);
}
