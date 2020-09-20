void setup() 
{
  // Set pins as outputs 
  for (int i = 0; i < 3; i++) 
    {pinMode(digit[i], OUTPUT);}

  for (int i = 2; i < 6; i++) 
    {pinMode(i, OUTPUT);}

  //turn on all 3 digits 
  turnON_Digit(DIGIT_ONE);
  turnON_Digit(DIGIT_TWO);
  turnON_Digit(DIGIT_THREE);
} // end setup()
