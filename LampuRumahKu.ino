int val2;
int val3;
int val4;
int val5;
int state2;
int state3;
int state4;
int state5;
long int time2;
long int time3;
long int time4;
long int time5;

void setup()
{
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);

  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  
  delay(10000);

}

void loop(){
  
  val2 = digitalRead(2);
  val3 = digitalRead(3);
  val4 = digitalRead(4);
  val5 = digitalRead(5);

  if (val2==HIGH)
  {
    digitalWrite(8,LOW);
    state2 = 1;
    time2 = 0;
  }
  
  if ( (val2==LOW) && (state2==1))
  {
    if(time2<=60000)
    {
      time2++;
    }
    else
    {
      digitalWrite(8,HIGH);
      state2 = 0;
      time2 = 0;
    }
  }
  
  if (val3==HIGH)
  {
    digitalWrite(9,LOW);
    state3 = 1;
    time3 = 0;
  }
  
  if ( (val3==LOW) && (state3==1))
  {
    if(time3<=60000)
    {
      time3++;
    }
    else
    {
      digitalWrite(9,HIGH);
      state3 = 0;
      time3 = 0;
    }
  }

  if (val4==HIGH)
  {
    digitalWrite(10,LOW);
    state4 = 1;
    time4 = 0;
  }
  
  if ( (val4==LOW) && (state4==1))
  {
    if(time4<=60000)
    {
      time4++;
    }
    else
    {
      digitalWrite(10,HIGH);
      state4 = 0;
      time4 = 0;
    }
  }
  
  if (val5==HIGH)
  {
    digitalWrite(11,LOW);
    state5 = 1;
    time5 = 0;
  }
  
  if ( (val5==LOW) && (state5==1))
  {
    if(time5<=60000)
    {
      time5++;
    }
    else
    {
      digitalWrite(11,HIGH);
      state5 = 0;
      time5 = 0;
    }
  }
  
  delay(1);
}
