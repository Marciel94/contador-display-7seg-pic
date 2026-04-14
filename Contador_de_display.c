void main ()
{
   int cont=0, n, x[10];
   trisa=0;
   trisb=0;
   cmcon=7;
   porta=0;
   portb=0;
   x[0]=63;
   x[1]=6;
   x[2]=91;
   x[3]=79;
   x[4]=102;
   x[5]=109;
   x[6]=125;
   x[7]=7;
   x[8]=127;
   x[9]=111;
   while (1)
   {
      n=cont/100;
      porta=2;
      portb=x[n];
      delay_ms(10);
      n=cont/10%10;
      porta=4;
      portb=x[n];
      delay_ms(10);
      n=cont%10;
      porta=64;
      portb=x[n];
      delay_ms(10);
      cont++;
      if (cont>999)
      cont=0;
   }
}
