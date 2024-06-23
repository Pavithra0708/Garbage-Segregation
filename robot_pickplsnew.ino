int m1p=2,m1n=3,m2p=4,m2n=5,m3p=8,m3n=9,m4p=10,m4n=11;

char in;


void rs()
{
  digitalWrite(m1p,LOW);
  digitalWrite(m1n,LOW);
  digitalWrite(m2p,LOW);
  digitalWrite(m2n,LOW);  
}

void rf()
{
  digitalWrite(m1p,LOW);
  digitalWrite(m1n,HIGH);
  digitalWrite(m2p,LOW);
  digitalWrite(m2n,HIGH);
}

void rr()
{
  digitalWrite(m1p,HIGH);
  digitalWrite(m1n,LOW);
  digitalWrite(m2p,LOW);
  digitalWrite(m2n,LOW);
}

void rL()
{
  digitalWrite(m1p,LOW);
  digitalWrite(m1n,HIGH);
  digitalWrite(m2p,LOW);
  digitalWrite(m2n,LOW);
}

void rR()
{
  digitalWrite(m1p,HIGH);
  digitalWrite(m1n,LOW);
  digitalWrite(m2p,HIGH);
  digitalWrite(m2n,LOW);
}

void ru()
{
  digitalWrite(m3p,LOW);
  digitalWrite(m3n,HIGH);
}

void rd()
{
  digitalWrite(m3p,HIGH);
  digitalWrite(m3n,LOW);
}

void rus()
{
  digitalWrite(m3p,LOW);
  digitalWrite(m3n,LOW);
}

void ro()
{
  digitalWrite(m4p,LOW);
  digitalWrite(m4n,HIGH);
}

void rC()
{
  digitalWrite(m4p,HIGH);
  digitalWrite(m4n,LOW);
}

void rh()
{
  digitalWrite(m4p,LOW);
  digitalWrite(m4n,LOW);
}

void setup() {
  pinMode(13,OUTPUT);
 pinMode(m1p,OUTPUT);
 pinMode(m1n,OUTPUT);

 pinMode(m2p,OUTPUT);
 pinMode(m2n,OUTPUT);

 pinMode(m3p,OUTPUT);
 pinMode(m3n,OUTPUT);

 pinMode(m4p,OUTPUT);
 pinMode(m4n,OUTPUT);

delay(3000);

 Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0)
      {
       in = Serial.read(); 
      
      if(in=='m')
      {
 
        ro();
        delay(1500);
        rh();
        delay(1000); 
        ru();
        delay(1800);
        rus();
        delay(1000);
        rC();
        delay(1500);
        rh();
        delay(1000);
        rd();
        delay(2000);
        rus();
        delay(500);
        
        rf();
        delay(1500);
        rs();
        delay(1000);
        ro();
        delay(1500);
        rh();
        delay(1000);
        rC();
        delay(2000);
        rh();
        delay(1000);
        rR();
        delay(1500);
        rs();        
        in=0;
        
           
      }
      else if(in=='d')
      {
        ro();
        delay(1500);
        rh();
        delay(1000); 
        ru();
        delay(1800);
        rus();
        delay(1000);
        rC();
        delay(1500);
        rh();
        delay(1000);
        rd();
        delay(2000);
        rus();
        delay(500);
        
        rr();
        delay(2000);
        rs();
        delay(500);
        rf();
        delay(2000);
        rs();
        delay(1000);
        ro();
        delay(1500);
        rh();
        delay(1000);
        rC();
        delay(2000);
        rh();
        delay(1000);
        
        rR();
        delay(2000);
        rs();
        delay(500);
        rL();
        delay(2000);
        rs();        
        in=0;
    
      }
       else if(in=='k')
       
      {
        ro();
        delay(1500);
        rh();
        delay(1000); 
        ru();
        delay(1800);
        rus();
        delay(1000);
        rC();
        delay(1500);
        rh();
        delay(1000);
        rd();
        delay(2000);
        rus();
        delay(500);
        
        rL();
        delay(2000);
        rs();
        delay(1000);
        ro();
        delay(1500);
        rh();
        delay(1000);
        rC();
        delay(2000);
        rh();
        delay(1000);
        
        rr();
        delay(2000);
        rs();        
        in=0;
        
      }
       else if(in=='w')
      {
        ro();
        delay(1500);
        rh();
        delay(1000); 
        ru();
        delay(1800);
        rus();
        delay(1000);
        rC();
        delay(1500);
        rh();
        delay(1000);
        rd();
        delay(2000);
        rus();
        delay(500);
        
        rL();
        delay(4500);
        rs();
        delay(1000);
        ro();
        delay(1500);
        rh();
        delay(1000);
        rC();
        delay(2000);
        rh();
        delay(1000);
        
        rr();
        delay(4500);
        rs();        
        in=0;
       
      }
      else if(in=='u')
      {
        rd();
        delay(500);
        rus();
        delay(3000);
        in=0;
      }
          else if(in=='D')
      {
        ru();
        delay(500);
        rus();
        delay(3000);
        in=0;
      }

            else if(in=='o')
      {
        ro();
        delay(500);
        rh();
        delay(3000);
        in=0;
      }

      else if(in=='c')
      {
        rC();
        delay(500);
        rh();
        delay(3000);
        in=0;
      }
      
      else
      {
        rs();
        rus();
        rh();
      }
      
      }
      

 
}
