#include <iostream>
using namespace std;

int main()
{
 int i,j;
         for(i=1;i<=10;i++)
                          {
                           for(j=1;j<=10;j++)
                                            {
                                             if(i==1 || i==10 || i==5 || (j==10 && i<=5) || (j==1 && i>=5))
                                                       {
                                                        cout<<"*";     
                                                       }else
                                                            {
                                                             cout<<" ";           
                                                            }
                                            }      
                           cout<<endl;
                          }    

 system ("PAUSE");
 return 0;
}
