
int fsrPin1 = 0;     // the 1st sensor 320 ohm pulldown are connected to a0
int fsrReading1;     // the analog reading from the FSR1 resistor divider

int fsrPin2 = 1;     // the 2nd sensor pulldown are connected to a1
int fsrReading2;     // the analog reading from the FSR2 resistor divider
 
void setup(void) {

  Serial.begin(9600);   
}
 
void loop(void) {
 
  fsrReading1 = analogRead(fsrPin1);  
  Serial.println(fsrReading1);     

  delay(10); 
  
  fsrReading2 = analogRead(fsrPin2);   
  Serial.println(fsrReading2);  
  Serial.print(" \t");
 // Serial.print("  ");
  delay(10);
