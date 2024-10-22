void squareWaveGen()
{
  TCCR2A = _BV(COM2A0) | _BV(WGM21) | _BV(WGM20);
  TCCR2B = _BV(WGM22) | _BV(CS20);
  OCR2A = B01100011; 
}

void setup()
{
pinMode(11, OUTPUT);
squareWaveGen();
}

void loop()
{
}