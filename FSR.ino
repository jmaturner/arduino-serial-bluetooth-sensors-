
int fsrPin1 = 0;     // the 1st sensor 320 ohm pulldown are connected to a0
int fsrReading1;     // the analog reading from the FSR1 resistor divider

int fsrPin2 = 1;     // the 2nd sensor pulldown are connected to a1
int fsrReading2;     // the analog reading from the FSR2 resistor divider

int fsrPin3 = 2;     
int fsrReading3; 

int fsrPin4 = 2;     
int fsrReading4;

int fsrPin5 = 4;     
int fsrReading5;

int fsrPin6 = 5;     
int fsrReading6;

int fsrPin7 = 6;     
int fsrReading7;

int fsrPin8 = 7;     
int fsrReading8;

int fsrPin9 = 8;     
int fsrReading9;

int fsrPin10 = 9;     
int fsrReading10;
 
void setup(void) {

  Serial.begin(9600);   
}
 
void loop(void) {
 
 
 
  fsrReading1 = analogRead(fsrPin1);  
  Serial.println(fsrReading1);     
 // Serial.print(" \t");
 
  delay(10); 
 
  
  
  fsrReading2 = analogRead(fsrPin2);   
  Serial.println(fsrReading2);  
  Serial.print(" \t");
 // Serial.print("  ");
  delay(10);

  fsrReading3 = analogRead(fsrPin3);   
  Serial.println(fsrReading3);  
  Serial.print(" \t");
  Serial.print(" \t");
  delay(10);

  fsrReading4 = analogRead(fsrPin4);   
  Serial.println(fsrReading4);  
  delay(10);

  fsrReading4 = analogRead(fsrPin4);   
  Serial.println(fsrReading4);  
  delay(10);

  fsrReading5 = analogRead(fsrPin5);   
  Serial.println(fsrReading5);  
  delay(10);

  fsrReading6 = analogRead(fsrPin6);   
  Serial.println(fsrReading6);  
  delay(10);

  fsrReading7 = analogRead(fsrPin7);   
  Serial.println(fsrReading7);  
  delay(10);

  fsrReading8 = analogRead(fsrPin8);   
  Serial.println(fsrReading8);  
  delay(10);

  fsrReading9 = analogRead(fsrPin9);   
  Serial.println(fsrReading9);  
  delay(10);

  fsrReading10 = analogRead(fsrPin10);   
  Serial.println(fsrReading10);  
  delay(10);
