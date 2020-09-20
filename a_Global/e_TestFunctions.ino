void count2nine()
// Counts from 0-9 
{ 
  for (int i = 0; i<10; i++)
  {displayNum(i);
    delay(500);} 
}


void displayNum3(int one, int two, int three)
// Displays 3 different numbers simultaneously 
{ 
  //display first number on digit 3
  turnON_Digit(DIGIT_THREE);
  turnOFF_Digit(DIGIT_TWO);
  turnOFF_Digit(DIGIT_ONE); 
  displayNum(one); 
  delay(5);
  //display second number on digit 2
  turnOFF_Digit(DIGIT_THREE);
  turnON_Digit(DIGIT_TWO);
  turnOFF_Digit(DIGIT_ONE); 
  displayNum(two); 
  delay(5);
  //display third number on digit 1
  turnOFF_Digit(DIGIT_THREE);
  turnOFF_Digit(DIGIT_TWO);
  turnON_Digit(DIGIT_ONE); 
  displayNum(three); 
  delay(5);
}

