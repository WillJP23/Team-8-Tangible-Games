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
  Serial.begin(9600);
}

  //put outside loop?
  bool r1 = false; 
  bool r2 = false; 
  bool r3 = false; 
  bool r4 = false; 
  bool r5 = false; 
  bool r6 = false; 
  bool r7 = false; 
  bool r8 = false; 
  bool r9 = false; 
  //green
  bool g1 = false;
  bool g2 = false;
  bool g3 = false;
  bool g4 = false;
  bool g5 = false;
  bool g6 = false;
  bool g7 = false;
  bool g8 = false;
  bool g9 = false;
    //greenred = false, means that the current player is red - Maybe redundant?
  bool pos1 = false;
  bool pos2 = false;
  bool pos3 = false; 
  bool pos4 = false; 
  bool pos5 = false; 
  bool pos6 = false; 
  bool pos7 = false; 
  bool pos8 = false; 
  bool pos9 = false; 
  bool greenred = false;
  //variables for tracking greenred posisitions, used for calculating winner
  bool redwin = false;
  bool greenwin = false;
  bool message = false;
  int gwins = 0;
  int rwins = 0;
  char pos = 0;

void loop()
{
  //sequence determining if a winner is here
  //Green Win Conditions
  // - Horizontals
  if ((g1 == true) && (g2 == true) && (g3 == true)) {
    greenwin = true;
  }
  if ((g4 == true) && (g5 == true) && (g6 == true)){
    greenwin = true;
  }
  if ((g7 == true) && (g8 == true) && (g9 == true)) {
    greenwin = true;
  }
  // - Verticals
  if ((g1 == true) && (g4 == true) && (g7 == true)) {
    greenwin = true;
  }
  if ((g2 == true) && (g5 == true) && (g8 == true)) {
    greenwin = true;
  }
  if ((g3 == true) && (g6 == true) && (g9 == true)) {
    greenwin = true;
  }
  // - Diagonals
  if ((g1 == true) && (g5 == true) && (g9 == true)) {
    greenwin = true;
  }
  if ((g3 == true) && (g5 == true) && (g7 == true)) {
    greenwin = true;
  }
  //Red Win Conditions
  if ((r1 == true) && (r2 == true) && (r3 == true)) {
    redwin = true;
  }
  if ((r4 == true) && (r5 == true) && (r6 == true)) {
    redwin = true;
  }
  if ((r7 == true) && (r8 == true) && (r9 == true)) {
    redwin = true;
  }
  if ((r1 == true) && (r4 == true) && (r7 == true)) {
    redwin = true;
  }
  if ((r2 == true) && (r5 == true) && (r8 == true)) {
    redwin = true;
  }
  if ((r3 == true) && (r6 == true) && (r9 == true)) {
    redwin = true;
  }
  if ((r1 == true) && (r5 == true) && (r9 == true)) {
    redwin = true;
  }
  if ((r3 == true) && (r5 == true) && (r7 == true)) {
    redwin = true;
  }

  //winner script
  if (greenwin == true) {
    Serial.println ("Winner: Green Player\n");
    gwins++;
    Serial.print ("Green Win Total: ");
    Serial.println (gwins);
    Serial.print ("Red Win Total: ");
    Serial.println (rwins);
    //need to add other positions after
    digitalWrite(12, HIGH);
  }
  if (redwin == true) {
    Serial.println ("Winner: Red Player\n");
    rwins++;
    Serial.print ("Green Win Total: ");
    Serial.println (gwins);
    Serial.print ("Red Win Total: ");
    Serial.println (rwins);
    //need to add other positions after
    digitalWrite(13, HIGH);
  }

  //Outputs Current Player to Console, greenred false means current player is red
  if ((greenred == false) && (message == false)) {
    Serial.println ("Current Player: Red");
    message = true;
  } 
  if ((greenred == true) && (message == false)) {
    Serial.println ("Current Player: Green");
    message = true;
  }

  if (Serial.available() > 0) {
    Serial.println ("Please Select a Valid Square");
    //add a grid here?
    pos = Serial.read();
    Serial.println(pos);
  }
  //determines which square is chosen
  //can add code below this section into this part to make more effecient
  if ((pos == '1') && (greenred == false)) {
    
    digitalWrite(13, HIGH);
    greenred = true;
    message = false;
    pos1 = false;
    r1 = true;
  else if 
  
  }
    //here for example: if / else if
  else if (pos == '1') {
    pos2 == true;
  }
  else if (pos = '3') {
    pos3 == true;
  }
  else if (pos = '4') {
    pos4 == true;
  }
  else if (pos = '5') {
    pos5 == true;
  }
  else if (pos == '6') {
    pos6 == true;
  }
  else if (pos == '7') {
    pos7 == true;
  }
  else if (pos = '8') {
    pos8 = true;
  }
  else if (pos == '9') {
    pos9 == true;
  }
  else {
    //make sure this works
    Serial.print ("Please Input a Valid Posistion\n");
  }

  //if current player is green/red and a posistion 1 is selected, then 

  if ((pos1 == true) && (greenred == true)) {
     digitalWrite(12, HIGH);
    greenred = false;
    message = false;
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