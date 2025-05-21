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
  //GreenRed = false, means that the current player is red
  bool Pos1 = false, Pos2 = false, Pos3 = false, Pos4 = false, Pos5 = false, Pos6 = false, Pos7 = false, Pos8 = false, Pos9 = false, GreenRed = false;
  string Pos;
}

void loop()
{
  //Outputs Current Player to Console
  if (GreenRed = false) {
    cout << "Current Player: Red\n";
    cout << "Please Select a Valid Square\n":
    //add a grid here?
    cin >> Pos;
    //determines which square is chosen
    if (Pos = '1') {
      Pos1 = true;
    }
    else if (Pos = '2') {
      Pos2 = true;
    }
    else if (Pos = '3') {
      Pos2 = true;
    }
    else if (Pos = '4') {
      Pos2 = true;
    }
    else if (Pos = '5') {
      Pos2 = true;
    }
    else if (Pos = '6') {
      Pos2 = true;
    }
    else if (Pos = '7') {
      Pos2 = true;
    }
    else if (Pos = '8') {
      Pos2 = true;
    }
    else if (Pos = '9') {
      Pos2 = true;
    }    
  }
  else if (GreenRed = true) {
    cout << "Current Player: Green\n";
    cout << "Please Select a Valid Square\n":
    cin >> Pos;  

    if (Pos = '1') {
      Pos1 = true;
    }
    else if (Pos = '2') {
      Pos2 = true;
    }
    else if (Pos = '3') {
      Pos2 = true;
    }
    else if (Pos = '4') {
      Pos2 = true;
    }
    else if (Pos = '5') {
      Pos2 = true;
    }
    else if (Pos = '6') {
      Pos2 = true;
    }
    else if (Pos = '7') {
      Pos2 = true;
    }
    else if (Pos = '8') {
      Pos2 = true;
    }
    else if (Pos = '9') {
      Pos2 = true;
    }  
  }

  //if current player is green/red and a posistion 1 is selected, then 
  if (Pos1 = true && GreenRed = false) {
    digitalWrite(13, HIGH);
    GreenRed = true;
    Pos1 = false;
  }
  else if (Pos1 = true && GreenRed = true) {
     digitalWrite(12, HIGH);
    GreenRed = false;
    Pos1 = false;
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