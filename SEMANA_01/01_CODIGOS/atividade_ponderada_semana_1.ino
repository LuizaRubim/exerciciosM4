//Atividade ponderada semana 1 - Luiza Souza Rubim
// RA: A2023.1A.0206

void setup()
{
  pinMode(2, OUTPUT);
}
void piscar(int pin, int time, int sleep){
  digitalWrite(pin, HIGH);
  delay(time);
  digitalWrite(pin, LOW);
  delay(sleep);
}
void loop()
{
  piscar(2,20,400);
  piscar(2,20,200);
  piscar(2,20,200);
  piscar(2,20,200);
  piscar(2,20,800);
  piscar(2,20,300);
  piscar(2,20,2000);
}