import java.io.*;

class demo
 { 
  private int accno[]=new int[3];
   private String name[]=new String[3];
  private int balance[]=new int[3];
   int f1=0;
    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
  
   void set()throws Exception
     { for(int i=0;i<3;i++)
        {
       System.out.print("enter the accno :"); 
       accno[i]=Integer.parseInt(br.readLine());
       System.out.print("enter the name :"); 
       name[i]=br.readLine();
       System.out.print("enter the balance:"); 
       balance[i]=Integer.parseInt(br.readLine());
       }
     }   
 
   void display()throws Exception
     {         
     System.out.println("the accno is   "+accno[f1]);
     System.out.println("the name is    "+name[f1]);
     System.out.println("the balance is "+balance[f1]);
                
      }
    
     
   
   void deposit()throws Exception
      {
        System.out.println("enter amount to deposit "+br.readLine());
        balance[f1]+=Integer.parseInt(br.readLine());
         display();
      }
   void withdraw()throws Exception
      {
        
        System.out.println("enter amount to withdraw "+br.readLine());
         int withdraw=Integer.parseInt(br.readLine());
         if(balance[f1] < withdraw)
        System.out.println("INSUFECIENT balance[f1]");
          else
          balance[f1]-=withdraw;
            display();
      }

     void check()throws Exception
      {     int f=0;
            int c;
          System.out.print("enter the accno your account   ");
          c=Integer.parseInt(br.readLine());
    
         while(f < 3)  
         {
      if(c==accno[f])
         {
           f1=f;
         break;
         }
       else if(c !=accno[f] && f>=2)
        {
        System.out.println("INVALID ACC ");
        f1=4;
        } 
         f++;
         }
    
          

      }


  }

class demo1
{        
   public static void main(String args[])throws Exception

    {    demo obj = new demo();
        while(true)
        {
          
System.out.println("*************************************************** ");
          System.out.println("1.TO SET THE ACC DETAILS ");
          System.out.println("2.TO DISPLAY THE ACC DETAILS ");
          System.out.println("3.TO DEPOSIT THE ACC DETAILS ");
          System.out.println("4.TO WITHDRAW THE ACC DETAILS ");
           System.out.println("5.TO EXIT ");
      
      System.out.print("enter choice ");
      int choice=Integer.parseInt(obj.br.readLine());
      
                
System.out.println("*************************************************** ");
        switch(choice)
      {
      case 1:obj.set();
          break;
      case 2:obj.check();if(obj.f1==4)break;
             obj.display();
           break;
      case 3:obj.check();if(obj.f1==4)break;obj.deposit();
            break;
      case 4:obj.check();if(obj.f1==4)break;obj.withdraw();
            break;
      case 5:System.exit(0);break;
      default:System.out.println("the choice is invalid");
      }
     }
    }
  


}