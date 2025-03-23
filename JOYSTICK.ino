#define X_PIN A0  
#define Y_PIN A1  
#define SW_PIN 2  

void setup() {
    Serial.begin(115200);       
    pinMode(SW_PIN, INPUT_PULLUP); 
  
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);


}
void loop(){
    int xValue = analogRead(X_PIN); 
    int yValue = analogRead(Y_PIN); 
    int swState = digitalRead(SW_PIN); 

    Serial.print("X: ");
    Serial.print(xValue);
    Serial.print(" | Y: ");
    Serial.print(yValue);
    Serial.print(" | Switch: ");
    Serial.println(swState);


    digitalWrite(3, xValue <= 500);
     
     digitalWrite(4, xValue >= 600);

      digitalWrite(5, yValue <= 500);

       digitalWrite(6, yValue >= 600);

       digitalWrite(7, swState == LOW );

    delay(100);
}
