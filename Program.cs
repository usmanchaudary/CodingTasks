using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication2
{
    class Program
    {
        static int midpoint(int x, int y)
        {
            return (x + y) >> 1;
        }

       
        static void Main(string[] args)
        {
          

             top:
            try
            {
                Console.WriteLine("enter frst number: ");
                int x = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("enter scnd number: ");
                int y = Convert.ToInt32(Console.ReadLine());
                System.Console.Write("mid point is : ");
                Console.WriteLine(midpoint(x, y));
                Console.ReadKey();
            }
            catch (Exception e)
            {
                Console.WriteLine("input is not correct!");
                Console.ReadKey();
                goto top;
            }

        }
      


    }

}
