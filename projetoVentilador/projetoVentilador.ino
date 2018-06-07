const int portaVentilador = 7;
int valorLidoSerial;

void setup() {
  Serial.begin(9600);
  pinMode(portaVentilador, OUTPUT);
  digitalWrite(portaVentilador, HIGH); 
}

void loop() {
  if(Serial.available())
  {
    Serial.println("Serial está disponível...");
    
    valorLidoSerial = Serial.parseInt();
    if(valorLidoSerial > 0)
    {
      digitalWrite(portaVentilador, LOW); 
      Serial.println("Ligando o ventilador...");
    } 
    else
    {
      digitalWrite(portaVentilador, HIGH);
      Serial.println("Desligando o ventilador...");
    }
  }
  
}
