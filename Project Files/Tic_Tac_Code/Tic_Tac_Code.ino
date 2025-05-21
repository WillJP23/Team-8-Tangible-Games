// C++ code
//
void setup()
{
  pinMode(A5, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  //greenred = false, means that the current player is red
  bool pos1 = false, pos2 = false, pos3 = false, pos4 = false, pos5 = false, pos6 = false, pos7 = false, pos8 = false, pos9 = false, greenred = false;
  //variables for tracking greenred posisitions, used for calculating winner
  bool r1 = false, r2 = false, r3 = false, r4 = false, r5 = false, r6 = false, r7 = false, r8 = false, r9 = false;
  bool g1 = false, g2 = false, g3 = false, g4 = false, g5 = false, g6 = false, g7 = false, g8 = false, g9 = false;
  string pos;
}

void loop()
{
  //Outputs Current Player to Console
  if (greenred = false) {
    cout << "Current Player: Red\n";
    cout << "Please Select a Valid Square\n":
    //add a grid here?
    cin >> pos;
    //determines which square is chosen
    if (pos = '1') {
      if 
      pos1 = true;
    }
    else if (Pos = '2') {
      pos2 = true;
    }
    else if (Pos = '3') {
      pos3 = true;
    }
    else if (Pos = '4') {
      pos4 = true;
    }
    else if (Pos = '5') {
      pos5 = true;
    }
    else if (Pos = '6') {
      pos6 = true;
    }
    else if (Pos = '7') {
      pos7 = true;
    }
    else if (Pos = '8') {
      pos8 = true;
    }
    else if (Pos = '9') {
      pos9 = true;
    }    
  } 
  else if (greenred = true) {
    cout << "Current Player: Green\n";
    cout << "Please Select a Valid Square\n":
    cin >> pos;  

    if (pos = '1') {
      pos1 = true;
    }
    else if (Pos = '2') {
      pos2 = true;
    }
    else if (Pos = '3') {
      pos3 = true;
    }
    else if (Pos = '4') {
      pos4 = true;
    }
    else if (Pos = '5') {
      pos5 = true;
    }
    else if (Pos = '6') {
      pos6 = true;
    }
    else if (Pos = '7') {
      pos7 = true;
    }
    else if (Pos = '8') {
      pos8 = true;
    }
    else if (Pos = '9') {
      pos9 = true;
    }  
  }

  //if current player is green/red and a posistion 1 is selected, then 
  if (pos1 = true && greenred = false) {
    digitalWrite(13, HIGH);
    greenred = true;
    pos1 = false;
    r1 = true;
  }
  else if (pos1 = true && greenred = true) {
     digitalWrite(12, HIGH);
    greenred = false;
    pos1 = false;
    g1 = true;
  }

  //need to work out the rest
  digitalWrite(A5, HIGH);
  digitalWrite(A4, HIGH);
  digitalWrite(A3, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A0, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  delay(10); // Delay a little bit to improve simulation performance
}