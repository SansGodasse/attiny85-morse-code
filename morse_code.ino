
const int TI_DURATION = 250;

/**
 * Turn on the LED
 */
void turnOnTheLED() {
  
  digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
}

/**
 * Turn off the LED
 */
void turnOffTheLED() {
  
  digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW);
}

/**
 * Short bip
 */
void bip() {

  turnOnTheLED();
  delay(TI_DURATION);
  turnOffTheLED();
}

/**
 * Long bip
 */
void lgBip() {

  turnOnTheLED();
  delay(3 * TI_DURATION);
  turnOffTheLED();
}

/**
 * Space between 2 characters
 */
void charSpace() {

  delay(3 * TI_DURATION);
}

/**
 * Space between 2 words
 */
void wordSpace() {

  delay(5 * TI_DURATION);
}

/**
 * Translate a character in morse code
 *
 * @param {Char} character the character wanted
 */
void translateChar(char character) {

  switch (character) {
    case 'a':
      bip();
      lgBip();
      break;
    case 'b':
      lgBip();
      bip();
      bip();
      bip();
      break;
    case 'c':
      lgBip();
      bip();
      lgBip();
      bip();
      break;
    case 'd':
      lgBip();
      bip();
      bip();
      break;
    case 'e':
      bip();
      break;
    case 'f':
      bip();
      bip();
      lgBip();
      bip();
      break;
    case 'g':
      lgBip();
      lgBip();
      bip();
      break;
    case 'h':
      bip();
      bip();
      bip();
      bip();
      break;
    case 'i':
      bip();
      bip();
      break;
    case 'j':
      bip();
      lgBip();
      lgBip();
      lgBip();
      break;
    case 'k':
      lgBip();
      bip();
      lgBip();
      break;
    case 'l':
      bip();
      lgBip();
      bip();
      bip();
      break;
    case 'm':
      lgBip();
      lgBip();
      break;
    case 'n':
      lgBip();
      bip();
      break;
    case 'o':
      lgBip();
      lgBip();
      lgBip();
      break;
    case 'p':
      bip();
      lgBip();
      lgBip();
      bip();
      break;
    case 'q':
      lgBip();
      lgBip();
      bip();
      lgBip();
      break;
    case 'r':
      bip();
      lgBip();
      bip();
      break;
    case 's':
      bip();
      bip();
      bip();
      break;
    case 't':
      lgBip();
      break;
    case 'u':
      bip();
      bip();
      lgBip();
      break;
    case 'v':
      bip();
      bip();
      bip();
      lgBip();
      break;
    case 'w':
      bip();
      lgBip();
      lgBip();
      break;
    case 'x':
      lgBip();
      bip();
      bip();
      lgBip();
      break;
    case 'y':
      lgBip();
      bip();
      lgBip();
      lgBip();
      break;
    case 'z':
      lgBip();
      lgBip();
      bip();
      bip();
      break;
  }
  charSpace();
}

/**
 * Code un mot
 *
 * @param {Char} *word un pointeur vers le premier caractère du mot
 * @param {Int} size le nombre de caractères du mot
 */
void showWord(char *word) {

  int i, size = strlen(word);

  for (i = 0 ; i < size ; i++) {
    translateChar(word[i]);
  }

  wordSpace();
}

/*
  Programme
  =========
 */

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(0, OUTPUT); //LED on Model B
  pinMode(1, OUTPUT); //LED on Model A   
}

// the loop routine runs over and over again forever:
void loop() {

  char word1[] = "hello";
  showWord(word1);
  char word2[] = "world";
  showWord(word2);
}
