
char tempSymbol = 'null';
char symbol[6];

void  matchLetter(char letter) {

  for (int i = 0; i <= 6; i++) {
      switch (letter) {
         case 'A': {
         symbol[]= {'.', '-'};
          }
            break;
    
         case 'B': {
          symbol[] = {'_...'};
//         symbol[] = {'-', '.', '.','.'};
         }
            break;
         case 'C': {
          symbol[] = {'-.-.'};
//         symbol[] = {'-', '.', '-', '.'};
         }
            break;
//        case 
//            "D": 
//            symbol = "-..";
//            break;
//        case 
//            "E": 
//            symbol = ".";
//            break;
//        case 
//            "F": 
//            symbol = "..-.";
//            break;
//        case
//            "G": 
//            symbol = "--.";
//            break;
//        case
//            "H": 
//            symbol = "....";
//            break;
//        case 
//            "I": 
//            symbol = "..";
//            break;
//        case
//            "J": 
//            symbol = ".---";
//            break;
//        case
//            "K": 
//            symbol = "-.-";
//            break;
//        case
//            "L": 
//            symbol = ".-..";
//            break;
//        case
//            "M": 
//            symbol = "--";
//            break;
//        case
//            "N": 
//            symbol = "-.";
//            break;
//        case
//            "O": 
//            symbol = "---";
//            break;
//        case
//            "P": 
//            symbol = ".--.";
//            break;
//        case
//            "Q": 
//            symbol = "--.-";
//            break;
//        case
//            "R": 
//            symbol = ".-.";
//            break;
//        case
//            "S": 
//            symbol = "...";
//            break;
//        case
//            "T": 
//            symbol = "-";
//            break;
//        case
//            "U": 
//            symbol = "..-";
//            break;
//        case
//            "V": 
//            symbol = "...-";
//            break;
//        case
//            "W": 
//            symbol = ".--";
//            break;
//        case
//            "X": 
//            symbol = "-..-";
//            break;
//        case
//            "Y": 
//            symbol = "-.--";
//            break;
//        case    
//            "Z": 
//            symbol = "--..";
//            break;
//        case
//            "0": 
//            symbol = "-----";
//            break;
//        case
//            "1": 
//            symbol = ".----";
//            break;
//        case
//            "2": 
//            symbol = "..---";
//            break;
//        case
//            "3": 
//            symbol = "...--";
//            break;
//        case
//            "4": 
//            symbol = "....-";
//            break;
//        case
//            "5": 
//            symbol = ".....";
//            break;
//        case
//            "6": 
//            symbol = "-....";
//            break;    
//        case
//            "7": 
//            symbol = "--...";
//            break;
//        case
//            "8": 
//            symbol = "---..";
//            break;
//        case
//            "9": 
//            symbol = "----.";
//            break;
    }

  }

    while (i <= 6) {
        tempSymbol = symbol[i];
        if (tempSymbol == "."); {
          dot();
        } else if (tempSymbol == "-") {
          dash();
        } else {
          pause();
        }
      }
    }  


void setup() {
  // put your setup code here, to run once:
  // Declare Morse code variables
  
//  char letter = '';
//  char dot = '.';
//  char dash = '-';
//  char space = ' ';

matchLetter('A');

}




void loop() {
  // put your main code here, to run repeatedly:
  // matchLetter function matches the taps(dot and slash) with equivalent letter or number        


  }
  
    void dot()
    {
      Bean.setLed(255, 0, 0);
      Bean.sleep(500);
      Bean.setLed(0, 0, 0);
    }
    
    void dash()
    {
      Bean.setLed(0, 255, 0);
      Bean.sleep(2000);
      Bean.setLed(0, 0, 0);
    }   

    void pause() {
      Bean.setLed(0, 0, 0);
      Bean.sleep(30000);
    }
  
}
