void lights_off()
// Turns off all three digits  
{
  for (int i = 0; i < 3; i++) 
  {digitalWrite(digit[i], LOW);}
}


void turnON_Digit(int number) 
{ // Turns on a single digit 
  switch (number) 
  {
    // first digit
    case DIGIT_ONE:  
      digitalWrite(DIGIT_ONE, HIGH);
      break;
    // second digit 
    case DIGIT_TWO:
      digitalWrite(DIGIT_TWO, HIGH);
      break;
    // third digit 
    case DIGIT_THREE:
      digitalWrite(DIGIT_THREE, HIGH);
      break;
  }
}


void turnOFF_Digit(int number) 
{ // Turns OFF a single digit 
  switch (number) 
  {
    // first digit
    case DIGIT_ONE:  
      digitalWrite(DIGIT_ONE, LOW);
      break;
    // second digit 
    case DIGIT_TWO:
      digitalWrite(DIGIT_TWO, LOW);
      break;
    // third digit 
    case DIGIT_THREE:
      digitalWrite(DIGIT_THREE, LOW);
      break;
    }
}

void displayNum(int number) 
{ // displays a number 0-9
  switch (number) 
  {
    case 0:
      digitalWrite(BIT_D, LOW);
      digitalWrite(BIT_C, LOW);
      digitalWrite(BIT_B, LOW);
      digitalWrite(BIT_A, LOW);
      break;
    case 1:
      digitalWrite(BIT_D, LOW);
      digitalWrite(BIT_C, LOW);
      digitalWrite(BIT_B, LOW);
      digitalWrite(BIT_A, HIGH);
      break;
    case 2:
      digitalWrite(BIT_D, LOW);
      digitalWrite(BIT_C, LOW);
      digitalWrite(BIT_B, HIGH);
      digitalWrite(BIT_A, LOW);
      break;  
   case 3:
      digitalWrite(BIT_D, LOW);
      digitalWrite(BIT_C, LOW);
      digitalWrite(BIT_B, HIGH);
      digitalWrite(BIT_A, HIGH);
      break;
   case 4:
      digitalWrite(BIT_D, LOW);
      digitalWrite(BIT_C, HIGH);
      digitalWrite(BIT_B, LOW);
      digitalWrite(BIT_A, LOW);
      break;
  case 5:
      digitalWrite(BIT_D, LOW);
      digitalWrite(BIT_C, HIGH);
      digitalWrite(BIT_B, LOW);
      digitalWrite(BIT_A, HIGH);
      break;  
  case 6:
      digitalWrite(BIT_D, LOW);
      digitalWrite(BIT_C, HIGH);
      digitalWrite(BIT_B, HIGH);
      digitalWrite(BIT_A, LOW);
      break;   
  case 7:
      digitalWrite(BIT_D, LOW);
      digitalWrite(BIT_C, HIGH);
      digitalWrite(BIT_B, HIGH);
      digitalWrite(BIT_A, HIGH);
      break;
  case 8:
      digitalWrite(BIT_D, HIGH);
      digitalWrite(BIT_C, LOW);
      digitalWrite(BIT_B, LOW);
      digitalWrite(BIT_A, LOW);
      break;
  case 9:
      digitalWrite(BIT_D, HIGH);
      digitalWrite(BIT_C, LOW);
      digitalWrite(BIT_B, LOW);
      digitalWrite(BIT_A, HIGH);
      break;
  }
}

