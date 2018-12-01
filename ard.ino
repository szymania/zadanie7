int dioda = 13;
int czasK = 500;
int czasD = 1000;
int czasP = 3000;

void setup(){
    pinMode(dioda, OUTPUT);
}
void loop(){
    for (int i = 0; i < 3; i = i + 1){
        digitalWrite(dioda, HIGH); 
        delay(czasK);
        digitalWrite(dioda, LOW); 
        delay(czasK);
    }
    for (int i = 0; i < 3; i = i + 1){
        digitalWrite(dioda, HIGH); 
        delay(czasD);
        digitalWrite(dioda, LOW); 
        delay(czasD);
    }
    for (int i = 0; i < 3; i = i + 1){
        digitalWrite(dioda, HIGH); 
        delay(czasK);
        digitalWrite(dioda, LOW); 
        delay(czasK);
    }
    delay(czasP);
}
