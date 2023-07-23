#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<ctype.h>
using namespace std;
class buyer;
class shoes
{
   int a,b;
   int c,d,e=0;
   string f;
   public:
   void menu();
   void brand();
   void hush_puppies();
   void puma();
   void nike();
   void adidas();
   void display();
   void staff();
   void display_staff();
   void delete_staff();
   void delete_shoes_stock();
};
void shoes::menu()
{   
    cout<<"\t\t\t***********************************************************************************************"<<endl;
    cout<<"\t\t\t*                                        welcome admin                                        *"<<endl;
    cout<<"\t\t\t***********************************************************************************************"<<endl;

   again: 
    cout<<"\t\t\t\t\t|| 1:add stock of the shoes        ||"<<endl;
    cout<<"\t\t\t\t\t|| 2:display the stock             ||"<<endl;
    cout<<"\t\t\t\t\t|| 3:add staff information         ||"<<endl;
    cout<<"\t\t\t\t\t|| 4:display the staff information ||"<<endl;
    cout<<"\t\t\t\t\t|| 5:delete staff information      ||"<<endl;
    cout<<"\t\t\t\t\t|| 6:delete the shoes stock        ||"<<endl;
    cout<<"\t\t\t\t\t|| 7: exit                         ||"<<endl;
    cout<<"\t\t\t\t\t|| enter your choice               ||"<<endl;
      while(!(cin>>a))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
                       
    switch(a)
    {
        case 1:
               system("cls");
               brand();
               break;
        case 2:
               system("cls");
                 display();
                 break;
          case 3:
               system("cls");
               staff();
                break;
         case 4:
               system("cls");
               display_staff();
               break;
         case 5:
              system("cls");
              delete_staff();
              break;
         case 6:
               system("cls");
               delete_shoes_stock();
               break;
         case 7:
                system("cls");
                cout<<"you are exit successfully"<<endl;
               exit(0);
               break;
         default:
               cout<<"error"<<endl;
    }
    goto again;
}
void shoes::brand() 
{
        cout<<"1 :for hush puppies"<<endl;
    cout<<"2 :for puma"<<endl;
    cout<<"3 :for  nike"<<endl;
    cout<<"4 :for adidas "<<endl;
    cout<<"enter your choice"<<endl;
      while(!(cin>>b))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
                       
    switch(b)
    {
        case 1:
               hush_puppies();
               break;
        case 2:
                puma();
                 break;
           case 3:
                 nike();
                 break;
           case 4:
                  adidas();
                  break;

                  break;
        default:
                cout<<"invalid"<<endl;
    }
}
void shoes::delete_shoes_stock()
{
ofstream h;
ofstream a;
ofstream p;
ofstream n;
int choose;
cout<<"1: hush pupppies"<<endl<<"2:adidas"<<endl<<"3:puma"<<endl<<"4:nike"<<endl;
        cout<<"enter the number according to the file"<<endl;
          while(!(cin>>choose))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
                       
      switch(choose)
      {
         case 1:
         h.open("hush_puppies.txt", std::ofstream::out | std::ofstream::trunc);
         h.close();
         cout<<"data is deleted successfully"<<endl;
         break;
         case 2:
         a.open("adidas.txt", std::ofstream::out | std::ofstream::trunc);
         a.close();
         cout<<"data is deleted successfully"<<endl;
        break;
         case 3:
         p.open("puma", std::ofstream::out | std::ofstream::trunc);
         p.close();
         cout<<"data is deleted successfully"<<endl;
         break;
         case 4:
         n.open("nike.txt", std::ofstream::out | std::ofstream::trunc);
         n.close();
          cout<<"data is deleted successfully"<<endl;
          break;
         default:
         cout<<"invalid"<<endl;

      }
}
void shoes::delete_staff()
{
   ofstream ofs;
ofs.open("staff_information.txt", std::ofstream::out | std::ofstream::trunc);
ofs.close();
}
void shoes::hush_puppies()
{
  int x[50],y=0,sum=0,z[50],usa_w[50],usa_b[50],women=0,boy=0,i;
     cout<<"\t\t\t\t\t***************************************"<<endl;
   cout<<"\t\t\t\t\twelcome to hush puppies inventory"<<endl;
   cout<<"\t\t\t\t\t***************************************"<<endl;
   jump:  
   cout<<"enter the size is according to usa or uk"<<endl;
   cin>>f;
    if(f=="uk" || f=="uk")
   {     
     cout<<"sie chart for girls is 3 /4 /5 /6 /7 /8 /9 /10"<<endl;
     cout<<"enter the amount of girl's shoes according to size"<<endl;
     for( i=3;i<=10;i++)
     {
        cout<<i<<"\t";
         while(!(cin>>x[i]))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
         
        y=y+x[i];
     }
      cout<<"size chart of boys is 3 /4 /5 /6 /7 /8 /9 /10"<<endl;
     cout<<"enter the amount of boy's shoes according to size"<<endl;
        for(int j=3;j<=10;j++)
        {
            cout<<j<<"\t";
             while(!(cin>>z[j]))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
         
            sum=sum+z[j];
        }
     
     {
       cout<<"data is updated successfully"<<endl;
       ofstream my_file("hush_puppies.txt",ios::app);
     my_file<<"uk shoes stock is"<<endl;
     my_file<<"total number of shoes available  of girls in uk size is"<<"\t"<<y<<endl;
     my_file<<"the number of shoes according to girl's size is"<<endl;
     for(int i=3;i<=10;i++)

     {
        my_file<<endl<<"size"<<"\t"<<i<<"\t"<<"number of shoes"<<"\t"<<x[i]<<endl;
     }
     my_file<<"the number of shoes according to boy's in uk size is"<<"\t"<<sum<<endl;
          my_file<<"the number of shoes according to boys's size is"<<endl;

     for(int j=3;j<10;j++)
     {
        my_file<<endl<<"size"<<"\t"<<j<<"\t"<<"number of shoes is"<<"\t"<<z[j]<<endl;
     }
      my_file.close();
     cout<<"data is stored in file successfully"<<endl;
     
     }
}
   else if(f=="usa" || f=="usa")
   {
      jump2:
      cout<<"size chart of girls is 4 /5 /6 /7 /8 /9 /10 /11 /12"<<endl;
      cout<<"enter the amount of girl's shoes according to size"<<endl;
      cout<<"shoes stock according to usa is:"<<endl;
      for(int i=4;i<=12;i++)
      {
        cout<<i<<"\t";
          while(!(cin>>usa_w[i]))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
        women=women+usa_w[i];
    }
        cout<<"size chart of boys is 3 /4 /5 /6 /7 /8 /9 /10 /11"<<endl;
     cout<<"enter the amount of boy's shoes according to size"<<endl;
        for(int j=3;j<=11;j++)
        {
            cout<<j<<"\t";
              while(!(cin>>usa_b[j]))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
                   boy=boy+usa_b[j];
        }
   ofstream my_file("hush_puppies.txt",ios::app);
     my_file<<"usa shoes stock is"<<endl;
     my_file<<"total number of shoes available of girls in usa size is"<<"\t"<<women<<endl;
     my_file<<"the number of shoes according to girl's size is"<<endl;
     for(int i=4;i<=10;i++)
  {
        my_file<<endl<<"size"<<"\t"<<i<<"\t"<<"number of shoes"<<"\t"<<usa_w[i]<<endl;
     }
     my_file<<"the number of shoes according to boy's size  in usa is"<<"\t"<<boy<<endl;
          my_file<<"the number of shoes according to boys's size is"<<endl;

     for(int j=3;j<11;j++)
     {
        my_file<<endl<<"size"<<"\t"<<j<<"\t"<<"number of shoes is"<<"\t"<<usa_b[j]<<endl;
     }
          my_file.close();
     cout<<"data is stored in file successfully"<<endl;
    }
     else
     {
        cout<<"invalid data  please! try again"<<endl;
        goto jump;
     }
     }
void shoes::nike()
{
    int x[50],y=0,sum=0,z[50],usa_w[50],usa_b[50],women=0,boy=0;
   cout<<"\t\t\t\t\t***************************************"<<endl;
   cout<<"\t\t\t\t\twelcome to nike inventory"<<endl;
   cout<<"\t\t\t\t\t***************************************"<<endl;
    jump:  
   cout<<"enter the size is according to usa or uk"<<endl;
   cin>>f;
    if(f=="uk" || f=="uk")
   {     
     cout<<"sie chart for girls is 3 /4 /5 /6 /7 /8 /9 /10"<<endl;
     cout<<"enter the amount of girl's shoes according to size"<<endl;
     for(int i=3;i<=10;i++)
     {
        cout<<i<<"\t";
          while(!(cin>>x[i]))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
       y=y+x[i];
     }
         cout<<"size chart of boys is 3 /4 /5 /6 /7 /8 /9 /10"<<endl;
     cout<<"enter the amount of boy's shoes according to size"<<endl;
        for(int j=3;j<=10;j++)
        {
            cout<<j<<"\t";
              while(!(cin>>z[j]))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
        sum=sum+z[j];
        }
     
     {
       cout<<"data is updated successfully"<<endl;
       ofstream my_file("nike.txt",ios::app);
     my_file<<"uk shoes stock is"<<endl;
     my_file<<"total number of shoes available  of girls in uk size is"<<"\t"<<y<<endl;
     my_file<<"the number of shoes according to girl's size is"<<endl;
     for(int i=3;i<=10;i++)
  {
        my_file<<endl<<"size"<<"\t"<<i<<"\t"<<"number of shoes"<<"\t"<<x[i]<<endl;
     }
     my_file<<"the number of shoes according to boy's in uk size is"<<"\t"<<sum<<endl;
          my_file<<"the number of shoes according to boys's size is"<<endl;

     for(int j=3;j<10;j++)
     {
        my_file<<endl<<"size"<<"\t"<<j<<"\t"<<"number of shoes is"<<"\t"<<z[j]<<endl;
     }
          my_file.close();
     cout<<"data is stored in file successfully"<<endl;
        }
}
   else if(f=="usa" || f=="usa")
   {
      jump2:
      cout<<"size chart of girls is 4 /5 /6 /7 /8 /9 /10 /11 /12"<<endl;
      cout<<"enter the amount of girl's shoes according to size"<<endl;
      cout<<"shoes stock according to usa is:"<<endl;
      for(int i=4;i<=12;i++)
      {
        cout<<i<<"\t";
          while(!(cin>>usa_w[i]))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
       
        women=women+usa_w[i];
          }
     cout<<"size chart of boys is 3 /4 /5 /6 /7 /8 /9 /10 /11"<<endl;
     cout<<"enter the amount of boy's shoes according to size"<<endl;
        for(int j=3;j<=11;j++)
        {
            cout<<j<<"\t";
              while(!(cin>>usa_b[j]))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
       
            boy=boy+usa_b[j];
        }
   ofstream my_file("nike.txt",ios::app);
     my_file<<"usa shoes stock is"<<endl;
     my_file<<"total number of shoes available of girls in usa size is"<<"\t"<<women<<endl;
     my_file<<"the number of shoes according to girl's size is"<<endl;
     for(int i=4;i<=10;i++)

     {
        my_file<<endl<<"size"<<"\t"<<i<<"\t"<<"number of shoes"<<"\t"<<usa_w[i]<<endl;
     }
     my_file<<"the number of shoes according to boy's size  in usa is"<<"\t"<<boy<<endl;
          my_file<<"the number of shoes according to boys's size is"<<endl;

     for(int j=3;j<11;j++)
     {
        my_file<<endl<<"size"<<"\t"<<j<<"\t"<<"number of shoes is"<<"\t"<<usa_b[j]<<endl;
     }
          my_file.close();
     cout<<"data is stored in file successfully"<<endl;
     }
     else
     {
        cout<<"invalid data  please! try again"<<endl;
        goto jump;
     }
     }
void shoes::puma()
{
    int x[50],y=0,sum=0,z[50],usa_w[50],usa_b[50],women=0,boy=0;
   cout<<"\t\t\t\t\t***************************************"<<endl;
   cout<<"\t\t\t\t\twelcome to puma shoes inventory"<<endl;
   cout<<"\t\t\t\t\t***************************************"<<endl;
   jump:  
   cout<<"enter the size is according to usa or uk"<<endl;
   cin>>f;
    if(f=="uk" || f=="uk")
   {     
     cout<<"sie chart for girls is 3 /4 /5 /6 /7 /8 /9 /10"<<endl;
     cout<<"enter the amount of girl's shoes according to size"<<endl;
     for(int i=3;i<=10;i++)
     {
        cout<<i<<"\t";
          while(!(cin>>x[i]))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
              y=y+x[i];
     }
         cout<<"size chart of boys is 3 /4 /5 /6 /7 /8 /9 /10"<<endl;
     cout<<"enter the amount of boy's shoes according to size"<<endl;
        for(int j=3;j<=10;j++)
        {
            cout<<j<<"\t";
              while(!(cin>>z[j]))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
       
            sum=sum+z[j];
        }
        {
       cout<<"data is updated successfully"<<endl;
       ofstream my_file("puma.txt",ios::app);
     my_file<<"uk shoes stock is"<<endl;
     my_file<<"total number of shoes available  of girls in uk size is"<<"\t"<<y<<endl;
     my_file<<"the number of shoes according to girl's size is"<<endl;
     for(int i=3;i<=10;i++)

     {
        my_file<<endl<<"size"<<"\t"<<i<<"\t"<<"number of shoes"<<"\t"<<x[i]<<endl;
     }
     my_file<<"the number of shoes according to boy's in uk size is"<<"\t"<<sum<<endl;
          my_file<<"the number of shoes according to boys's size is"<<endl;

     for(int j=3;j<10;j++)
     {
        my_file<<endl<<"size"<<"\t"<<j<<"\t"<<"number of shoes is"<<"\t"<<z[j]<<endl;
     }
     
     my_file.close();
     cout<<"data is stored in file successfully"<<endl;
     }
}
   else if(f=="usa" || f=="usa")
   {
      jump2:
      cout<<"size chart of girls is 4 /5 /6 /7 /8 /9 /10 /11 /12"<<endl;
      cout<<"enter the amount of girl's shoes according to size"<<endl;
      cout<<"shoes stock according to usa is:"<<endl;
      for(int i=4;i<=12;i++)
      {
        cout<<i<<"\t";
          while(!(cin>>usa_w[i]))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
       
        women=women+usa_w[i];
      }
     cout<<"size chart of boys is 3 /4 /5 /6 /7 /8 /9 /10 /11"<<endl;
     cout<<"enter the amount of boy's shoes according to size"<<endl;
        for(int j=3;j<=11;j++)
        {
            cout<<j<<"\t";
              while(!(cin>>usa_b[j]))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
       
            boy=boy+usa_b[j];
        }
   ofstream my_file("puma.txt",ios::app);
     my_file<<"usa shoes stock is"<<endl;
     my_file<<"total number of shoes available of girls in usa size is"<<"\t"<<women<<endl;
     my_file<<"the number of shoes according to girl's size is"<<endl;
     for(int i=4;i<=10;i++)
     {
        my_file<<endl<<"size"<<"\t"<<i<<"\t"<<"number of shoes"<<"\t"<<usa_w[i]<<endl;
     }
     my_file<<"the number of shoes according to boy's size  in usa is"<<"\t"<<boy<<endl;
          my_file<<"the number of shoes according to boys's size is"<<endl;
for(int j=3;j<11;j++)
     {
        my_file<<endl<<"size"<<"\t"<<j<<"\t"<<"number of shoes is"<<"\t"<<usa_b[j]<<endl;
     }
          my_file.close();
     cout<<"data is stored in file successfully"<<endl;
    }
     else
     {
        cout<<"invalid data  please! try again"<<endl;
        goto jump;
     }
     
}
void shoes::adidas()
{
    int x[50],y=0,sum=0,z[50],usa_w[50],usa_b[50],women=0,boy=0;
   cout<<"\t\t\t\t\t***************************************"<<endl;
   cout<<"\t\t\t\t\twelcome to adidas shoes inventory"<<endl;
   cout<<"\t\t\t\t\t***************************************"<<endl;
    jump:  
   cout<<"enter the size is according to usa or uk"<<endl;
   cin>>f;
    if(f=="uk" || f=="uk")
   {     
     cout<<"sie chart for girls is 3 /4 /5 /6 /7 /8 /9 /10"<<endl;
     cout<<"enter the amount of girl's shoes according to size"<<endl;
     for(int i=3;i<=10;i++)
     {
        cout<<i<<"\t";
          while(!(cin>>x[i]))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
       
        y=y+x[i];
     }
      cout<<"size chart of boys is 3 /4 /5 /6 /7 /8 /9 /10"<<endl;
     cout<<"enter the amount of boy's shoes according to size"<<endl;
        for(int j=3;j<=10;j++)
        {
            cout<<j<<"\t";
              while(!(cin>>z[j]))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
       
            sum=sum+z[j];
        }
        {
       cout<<"data is updated successfully"<<endl;
       ofstream my_file("adidas.txt",ios::app);
     my_file<<"uk shoes stock is"<<endl;
     my_file<<"total number of shoes available  of girls in uk size is"<<"\t"<<y<<endl;
     my_file<<"the number of shoes according to girl's size is"<<endl;
     for(int i=3;i<=10;i++)
       {
        my_file<<endl<<"size"<<"\t"<<i<<"\t"<<"number of shoes"<<"\t"<<x[i]<<endl;
     }
     my_file<<"the number of shoes according to boy's in uk size is"<<"\t"<<sum<<endl;
          my_file<<"the number of shoes according to boys's size is"<<endl;
for(int j=3;j<10;j++)
     {
        my_file<<endl<<"size"<<"\t"<<j<<"\t"<<"number of shoes is"<<"\t"<<z[j]<<endl;
     }
          my_file.close();
     cout<<"data is stored in file successfully"<<endl;
     }
}
   else if(f=="usa" || f=="usa")
   {
      jump2:
      cout<<"size chart of girls is 4 /5 /6 /7 /8 /9 /10 /11 /12"<<endl;
      cout<<"enter the amount of girl's shoes according to size"<<endl;
      cout<<"shoes stock according to usa is:"<<endl;
      for(int i=4;i<=12;i++)
      {
        cout<<i<<"\t";
          while(!(cin>>usa_w[i]))
                         {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
       
        women=women+usa_w[i];
      }
     cout<<"size chart of boys is 3 /4 /5 /6 /7 /8 /9 /10 /11"<<endl;
     cout<<"enter the amount of boy's shoes according to size"<<endl;
        for(int j=3;j<=11;j++)
        {
            cout<<j<<"\t";
              while(!(cin>>usa_b[j]))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
       
            boy=boy+usa_b[j];
        }
   ofstream my_file("adidas.txt",ios::app);
     my_file<<"usa shoes stock is"<<endl;
     my_file<<"total number of shoes available of girls in usa size is"<<"\t"<<women<<endl;
     my_file<<"the number of shoes according to girl's size is"<<endl;
     for(int i=4;i<=10;i++)
{
        my_file<<endl<<"size"<<"\t"<<i<<"\t"<<"number of shoes"<<"\t"<<usa_w[i]<<endl;
     }
     my_file<<"the number of shoes according to boy's size  in usa is"<<"\t"<<boy<<endl;
          my_file<<"the number of shoes according to boys's size is"<<endl;
     for(int j=3;j<11;j++)
     {
        my_file<<endl<<"size"<<"\t"<<j<<"\t"<<"number of shoes is"<<"\t"<<usa_b[j]<<endl;
     }
          my_file.close();
     cout<<"data is stored in file successfully"<<endl;
    }
     else
     {
        cout<<"invalid data  please! try again"<<endl;
        goto jump;
     }
     }
void shoes::display()
 { 
    string line;
    fstream file_a;
    fstream file_b;
    fstream file_c;
    fstream file_d;
      int choice;
      system("cls");
        cout<<"1: hush pupppies"<<endl<<"2:adidas"<<endl<<"3:puma"<<endl<<"4:nike"<<endl;
        cout<<"enter the number according to the file"<<endl;
          while(!(cin>>choice))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
                       
      switch(choice)
      {
       case 1: 
         file_a.open("hush_puppies.txt");
          if(file_a.is_open())
          {
             while(getline(file_a,line))
             {
                cout<<line<<endl;
             }
             file_a.close();
          }
          else
          {
            cout<<"file is not opened"<<endl;
          }
           break;
            case 2:
          file_b.open("adidas.txt");
           if(file_b.is_open())
           {
              while(getline(file_b,line))
              {
                 cout<<line<<endl;
              }
              file_b.close();
           }
           else
           {
             cout<<"file is not opened"<<endl;
           }
           break;
           case 3:
          file_c.open("puma.txt");
           if(file_c.is_open())
           {
              while(getline(file_c,line))
              {
                 cout<<line<<endl;
              }
              file_c.close();
           }
           else
          {
            cout<<"file is not opened"<<endl;
          }
          break;
          case 4:
           file_d.open("nike.txt");
          if(file_d.is_open())
          {
             while(getline(file_d,line))
             {
                cout<<line<<endl;
             }
             file_d.close();
          }
          else
          {
            cout<<"file is not opened"<<endl;
          }
          break;
          default:
              cout<<"error"<<endl;
    } 
  }
  class buyer{
    string address,email,sneaker,gender,usa_uk;
    char name[20],color[15];
    int id=0,number[10],shoe_size,company;
public:
    void input();
    void menu();
    void display();
    void delete_buyer();
};
void buyer::menu()
{
    int choice;
    cout<<"\t\t\t***********************************************************************************************"<<endl;
    cout<<"\t\t\t*                                        welcome buyer                                         *"<<endl;
    cout<<"\t\t\t***********************************************************************************************"<<endl;

    jump:
    cout<<"\t\t\t\t\t||enter the choice ||"<<endl<<"\t\t\t\t\t|| 1:for buyer details and order ||"<<endl<<"\t\t\t\t\t|| 2:for display ||"<<endl<<"\t\t\t\t\t|| 3:add more items ||"<<endl<<"\t\t\t\t\t|| 4:delete ||"<<endl<<"\t\t\t\t\t|| 5:exit ||"<<endl;
  
  while(!(cin>>choice))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
                            switch(choice)
    {
        case 1:
              system("cls");
              input();
              break;
        case 2:
             system("cls");
            display();
             break;
        case 3: 
            system("cls");
             goto jump;
             break;
        case 4:
             system("cls");
             delete_buyer();
             break;
        case 5:
              system("cls");
              cout<<"you are exit successfully"<<endl;
              exit(0);
        default:
              cout<<"error"<<endl;
            }
}
void buyer::delete_buyer()
{
   ofstream b;
    b.open("buyer.txt", std::ofstream::out | std::ofstream::trunc);
         b.close();
   cout<<"data is delete successfully"<<endl;
}
void buyer::input()
{
  string check;
  int f=0;
  cout<<"enter the name: "<<endl;
      do{
             cin>>name;
             for(int i=0;name[i]!='\0';i++)
             {
             if(isalpha(name[i]))
             {
                 f=1;   
                 break;
             }
             else
             {
                 cout<<"invalid, sir numbers not accepted"<<endl;
                 cout<<"re enter ur name:"<<endl;
                 f=0;
                 break;
             }
             }
        }while(f==0);

  cout<<"enter the address: "<<endl;
    cin>>address;
    cout<<"email id: "<<endl;
    cin>>email;
    cout<<"\t\t\t\t\tenter details to place your order: "<<endl;
 cout<<"color preference: "<<endl;
        do{
             cin>>color;
             for(int j=0;color[j]!='\0';j++)
             {
             if(isalpha(color[j]))
             {
                 f=1;
                 break;
             }
             else
             {
                 cout<<"invalid, sir numbers not accepted"<<endl;
                 cout<<"re enter ur color:"<<endl;
                 f=0;
                 break;
             }
             }
        }while(f==0);

    cout<<"sneaker type: "<<endl;
          do{
             cin>>sneaker;
             for(int i=0;sneaker[i]!='\0';i++)
             {
             if(isalpha(sneaker[i]))
             {
                 f=1;
                 break;
             }
             else
             {
                 cout<<"invalid, sir numbers not accepted"<<endl;
                 cout<<"re enter ur sneaker type:"<<endl;
                 f=0;
                 break;
             }
             }
        }while(f==0);

    out:
    cout<<"size is according to (usa/uk)"<<endl;
    cin>>usa_uk;
    if(usa_uk=="usa" || usa_uk=="usa")
   {
          jump6:
          cout<<"gender: (boys/girl) "<<endl;
          cin>>gender;
          if(gender=="boys" || gender =="boys")
            {
               cout<<"select company given below:"<<endl<<"1 :hush_puppies"<<endl<<"2: puma"<<endl<<"3 :adidas"<<endl<<"4: nike"<<endl;
                 while(!(cin>>company))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
                       
               switch(company)
                 {
                    case 1:
                           cout<<"size chart of boys is 3 /4 /5 /6 /7 /8 /9 /10 /11"<<endl;
                           while(!(cin>>shoe_size))
                            {
                             cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                            }
                           break;
                    case 2:
                           cout<<"size chart of boys is 3 /4 /5 /6 /7 /8 /9 /10 /11"<<endl;
                           while(!(cin>>shoe_size))
                            {
                             cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
                          break;
                     case 3:
                           cout<<"size chart of boys is 3 /4 /5 /6 /7 /8 /9 /10 /11"<<endl;
                           while(!(cin>>shoe_size))
                              {
                                cout<<"error:enter the number"<<endl;
                                cin.clear();
                                cin.ignore(123,'\n');
                              }
                           break;
                     case 4:
                            cout<<"size chart of boys is 3 /4 /5 /6 /7 /8 /9 /10 /11"<<endl;
                            while(!(cin>>shoe_size))
                              {
                               cout<<"error:enter the number"<<endl;
                               cin.clear();
                               cin.ignore(123,'\n');
                              }
                           break;
                     default:
                           cout<<"error";
                 }
            }
      else if(gender=="girl" || gender=="girl")
        {
             cout<<"select company given below:"<<endl<<"1 :hush_puppies"<<endl<<"2: puma"<<endl<<"3 :adidas"<<endl<<"4: nike"<<endl;
               while(!(cin>>company))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
                       
             switch(company)
              {
                 case 1:
                     cout<<"size chart of girls is 4 /5 /6 /7 /8 /9 /10 /11 /12"<<endl;
                     while(!(cin>>shoe_size))
                         {
                            cout<<"error:enter the number"<<endl;
                            cin.clear();
                           cin.ignore(123,'\n');
                         }
                         break;
                 case 2:
                        cout<<"size chart of girls is 4 /5 /6 /7 /8 /9 /10 /11 /12"<<endl;
                         while(!(cin>>shoe_size))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
                         break;
                case 3:
                        cout<<"size chart of girls is 4 /5 /6 /7 /8 /9 /10 /11 /12"<<endl;
                        while(!(cin>>shoe_size))
                         {
                           cout<<"error:enter the number"<<endl;
                            cin.clear();
                            cin.ignore(123,'\n');
                          }
                         break;
               case 4:
                         cout<<"size chart of girls is 4 /5 /6 /7 /8 /9 /10 /11 /12"<<endl;
                         while(!(cin>>shoe_size))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
                       break;
                default:
                       cout<<"error"; 
             }
         }
         else
         {
            cout<<"invalid input"<<endl;
            goto jump6;
         }
  } 
    else if(usa_uk=="uk" || usa_uk=="uk")
    {
               jump5:
              cout<<"gender: (boys/girl) "<<endl;
              cin>>gender;
              if(gender=="boys")
                  {
                      cout<<"select company given below:"<<endl<<"1 :hush_puppies"<<endl<<"2: puma"<<endl<<"3 :adidas"<<endl<<"4: nike"<<endl;
                      while(!(cin>>shoe_size))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
                       
                      switch(company)
                          {
                            case 1:
                                   cout<<"size chart of boys is 3 /4 /5 /6 /7 /8 /9 /10"<<endl;
                                   while(!(cin>>shoe_size))
                                   {
                                       cout<<"error:enter the number"<<endl;
                                       cin.clear();
                                       cin.ignore(123,'\n');
                                    }
                                  break;
                           case 2:
                                  cout<<"size chart of boys is 3 /4 /5 /6 /7 /8 /9 /10"<<endl;
                                  while(!(cin>>shoe_size))
                                  {
                                     cout<<"error:enter the number"<<endl;
                                     cin.clear();
                                    cin.ignore(123,'\n');
                                   }
                                 break;
                            case 3:
                                    cout<<"size chart of boys is 3 /4 /5 /6 /7 /8 /9 /10"<<endl;
                                    while(!(cin>>shoe_size))
                                    {
                                       cout<<"error:enter the number"<<endl;
                                        cin.clear();
                                         cin.ignore(123,'\n');
                                    }
                                break;
                           case 4:
                                    cout<<"size chart of boys is 3 /4 /5 /6 /7 /8 /9 /10"<<endl;
                                     while(!(cin>>shoe_size))
                                    {
                                       cout<<"error:enter the number"<<endl;
                                       cin.clear();
cin.ignore(123,'\n');
                                     }
                                 break;
                          default:
                                   cout<<"error";
                        } 
                  }
           else if(gender =="girl" || gender ==" girl")
               {
                   cout<<"select company given below:"<<endl<<"1 :hush_puppies"<<endl<<"2: puma"<<endl<<"3 :adidas"<<endl<<"4: nike"<<endl;
                    while(!(cin>>shoe_size))
                           {
                              cout<<"error:enter the number"<<endl;
                              cin.clear();
                              cin.ignore(123,'\n');
                          }
                       
                   switch(company)
                     {
                       case 1:
                             cout<<"sie chart for girls is 3 /4 /5 /6 /7 /8 /9 /10"<<endl;
                             while(!(cin>>shoe_size))
                               {
                                 cout<<"error:enter the number"<<endl;
                                 cin.clear();
                                 cin.ignore(123,'\n');
                              }
                            break;
                         case 2:
                               cout<<"sie chart for girls is 3 /4 /5 /6 /7 /8 /9 /10"<<endl;
                               while(!(cin>>shoe_size))
                                 {
                                    cout<<"error:enter the number"<<endl;
                                    cin.clear();
                                    cin.ignore(123,'\n');
                                  }
                               break;
                         case 3:
                                 cout<<"sie chart for girls is 3 /4 /5 /6 /7 /8 /9 /10"<<endl;
                                 while(!(cin>>shoe_size))
                                 {
                                    cout<<"error:enter the number"<<endl;
                                    cin.clear();
                                    cin.ignore(123,'\n');
                                 }
                                break;
                         case 4:
                                cout<<"sie chart for girls is 3 /4 /5 /6 /7 /8 /9 /10"<<endl;
                                while(!(cin>>shoe_size))
                                {
                                     cout<<"error:enter the number"<<endl;
                                     cin.clear();
                                    cin.ignore(123,'\n');
                                 }
                         break;
                              default:
                               cout<<"error"; 
                     }
               }
            else
            {
               cout<<"invalid input"<<endl;
               goto jump5;
            }
         }
     
      else
      {
       cout<<"invalid input"<<endl;
       goto out;
     }
  
    ofstream my_file("buyer.txt",ios::app);
     my_file<<"\t\t\t\t\tbuyer information and order details are"<<endl;
     my_file<<" name:"<<endl;
    my_file<<name<<endl;
    my_file<<"address: "<<endl;
    my_file<<address<<endl;
    my_file<<"email id:"<<endl;
    my_file<<email<<endl;
    my_file<<"\t\t\t\t\tdetails of your order: "<<endl;
    my_file<<"gender: "<<endl;
    my_file<<gender<<endl;
    my_file<<"color preference: "<<endl;
    my_file<<color<<endl;
    my_file<<"sneaker type: "<<endl;
    my_file<<sneaker<<endl;
    my_file<<"company:"<<endl;
    my_file<<company<<endl;
    my_file<<"usa/uk"<<endl;
    my_file<<usa_uk<<endl;
    my_file<<"size"<<endl;
    my_file<<shoe_size<<endl;
    my_file.close();
     
}
void buyer::display()
{
   string line;
   system("cls");
       ifstream file("buyer.txt");
          if(file.is_open())
          {
             while(getline(file,line))
             {
                cout<<line<<endl;
             }
             file.close();
          }
          else
          {
            cout<<"file is not opened"<<endl;
          }
   
}

void shoes::staff()
{
    string name,gender,work,staff; 
    long int salary;
    again2:
    cout<<"\t\t\t\t\t****************************************"<<endl;
    cout<<"\t\t\t\t\twelcome to staff information file"<<endl;
   cout<<"\t\t\t\t\t****************************************"<<endl;
   cout<<"enter the name"<<"\t"<<endl;
   cin>>name;
   cout<<"enter the salary of staff"<<"\t"<<endl;
     while(!(cin>>salary))
             {
               cout<<"error:enter the number"<<endl;
               cin.clear();
               cin.ignore(123,'\n');
             }
            cout<<"enter the gender"<<"\t"<<endl;
   cin>>gender;
   cout<<"enter the work"<<"\t"<<endl;
   cin>>work;
     ofstream my_file("staff_information.txt",ios::app);
    my_file<<"name of staff is"<<name<<endl;
    my_file<<"salary of file is"<<salary<<endl;
    my_file<<"gender is"<<gender<<endl;
    my_file<<"work of the staff is"<<work<<endl;
    cout<<"your data is successfully updated in the file"<<endl;
     cout<<"do you want to add more staff"<<endl<<"then type yes else type no"<<endl;
   cin>>staff;

   if(staff=="yes"||staff=="yes")
   {
      goto again2;
   }
   else
   {
      cout<<"you staff information is updated successfully"<<endl;
   }
}
void shoes::display_staff()
{
  string line;
       ifstream file("staff_information.txt");
          if(file.is_open())
          {
             while(getline(file,line))
             {
                cout<<line<<endl;
             }
             file.close();
          }
          else
          {
            cout<<"file is not opened"<<endl;
          }
       
}
      int main()
{
    shoes a;
    buyer b;
    string username;
    string password;
    string admin;
    cout<<"**********************************************************************************************************"<<endl;
   jump3:
    cout<<"are you admin or user"<<endl;
    cin>>admin;
    if(admin == "user" || admin=="user")
    {
    cout<<"enter the username"<<endl;
    cin>>username;
    cout<<"enter the password"<<endl;
    cin>>password;
    if(password == "password")
    {
        cout<<"congratulation login successfully"<<endl;
        system("cls");
        b.menu();

    }
    else
    {
        cout<<"invalid password"<<endl;
        goto jump3;
    }
    }
    else if(admin == "admin" || admin=="admin")
    {
        cout<<"enter the username"<<endl;
    cin>>username;
    cout<<"enter the password"<<endl;
    cin>>password;
    if(password == "admin" || password=="admin")
    {
        cout<<"congratulation log in successfully"<<endl;
        system("cls");
        a.menu();
        system("cls");
    }
    else
    {
        cout<<"invalid password"<<endl;
        goto jump3;
    }
    }
    else
    {
        cout<<"invalid information"<<endl;
        goto jump3;
    }

} 

