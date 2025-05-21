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
  bool r1 = false, r2 = false, r3 = false, r4 = false, r5 = false, r6 = false, r7 = false, r8 = false, r9 = false, redwin = false;
  bool g1 = false, g2 = false, g3 = false, g4 = false, g5 = false, g6 = false, g7 = false, g8 = false, g9 = false, greenwin = false;
  int gwins = 0, rwins = 0;
  char pos;
}

void loop()
{
  //sequence determining if a winner is here
  //Green Win Conditions
  // - Horizontals
  if (g1 = true && g2 = true && g3 = true )
    greenwin = true;
  if (g4 = true && g5 = true && g6 = true )
    greenwin = true;
  if (g7 = true && g8 = true && g9 = true )
    greenwin = true;
  // - Verticals
  if (g1 = true && g4 = true && g7 = true )
    greenwin = true;
  if (g2 = true && g5 = true && g8 = true )
    greenwin = true;
  if (g3 = true && g6 = true && g9 = true )
    greenwin = true;
  // - Diagonals
  if (g1 = true && g5 = true && g9 = true )
    greenwin = true;
  if (g3 = true && g5 = true && g7 = true )
    greenwin = true;

  //Red Win Conditions
    if (r1 = true && r2 = true && r3 = true )
    redwin = true;
  if (r4 = true && r5 = true && r6 = true )
    redwin = true;
  if (r7 = true && r8 = true && r9 = true )
    redwin = true;
  if (r1 = true && r4 = true && r7 = true )
    redwin = true;
  if (r2 = true && r5 = true && r8 = true )
    redwin = true;
  if (r3 = true && r6 = true && r9 = true )
    redwin = true;
  if (r1 = true && r5 = true && r9 = true )
    redwin = true;
  if (r3 = true && r5 = true && r7 = true )
    redwin = true;

  //winner script
  if (greenwin = true) {
    cout << "Winner: Green Player""\n";
    gwins++;
    cout << "Green Wins: " << gwins << "\n";
    cout << "Red Wins: " << rwins << "\n";
    //need to add other positions after
    digitalWrite(12, HIGH);
  }
  if (redwin = true) {
    cout << "Winner: Red Player\n";
    rwins++;
    cout << "Green Win Total: " << gwins << "\n";
    cout << "Red Win Total: " << rwins << "\n";
    //need to add other positions after
    digitalWrite(13, HIGH);
  }

//---------------------------------------------------------------------------------------------------
  //Outputs Current Player to Console, greenred false means current player is red
  if (greenred = false) {
    cout << "Current Player: Red\n";
  } 
  else if (greenred = true) {
    cout << "Current Player: Green\n";
  }
  else {
    cout << "Somethings Gone Wrong with the Current Player Tracker";
  }

//---------------------------------------------------------------------------------------------------
  cout << "Please Select a Valid Square\n":
  //add a grid here?
  cin >> pos;
  //determines which square is chosen
  //can add code below this section into this part to make more effecient
  if (pos = '1') {
    pos1 = true;
    //here for example: if / else if
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
  else {
    //make sure this works
    cout << "Please Input a Valid Posistion\n";
  }

//---------------------------------------------------------------------------------------------------
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