/*
 send data to desktop
 */

//variables for sampling rate logic
long frameCount = 0;
//specifies the number of samples to be taken per second
int targetRate = 60;
float targetFrameLen = (float) 1000000 / targetRate;

//250000 baudrate can handle approximately 120 sensors worth of data (in strings) 40 times in one second
void setup() {
  Serial.begin(250000);
}

//defines what will be sampled and transmitted each frame
void Update() {
  Serial.print(String(frameCount));
  Serial.print(',');
  Serial.print(String(micros()));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.print(String(analogRead(A5)));
  Serial.print(',');
  Serial.print(String(analogRead(A0)));
  Serial.print(',');
  Serial.print(String(analogRead(A1)));
  Serial.print(',');
  Serial.print(String(analogRead(A2)));
  Serial.print(',');
  Serial.print(String(analogRead(A3)));
  Serial.print(',');
  Serial.print(String(analogRead(A4)));
  Serial.print(',');
  Serial.println(String(analogRead(A5)));
  
  Serial.flush();
}

void loop() {
  
  //if the number of samples taken is ahead of the scheduled number of samples, do nothing
  if ((frameCount) > floor((float)micros() / targetFrameLen)){
    NULL;
  }
  
  //else if the number of samples taken is equal to the scheduled number of samples, 
  //take a new sample and increment number of samples taken
  else if ((frameCount) == floor((float)micros() / targetFrameLen)){
    Update();
    
    //wait for signal from desktop before continuing to next sample
    while (!Serial.available()) {
      NULL;
    }
    //empty received byte
    Serial.read();
    
    frameCount += 1;
  }
  
  //else if the number of samples taken is behind the scheduled number of samples, 
  //notify that this sample will be skipped and then increment number of samples taken
  else if ((frameCount) < floor((float)micros() / targetFrameLen)){
    Serial.println('N');
    
    while (!Serial.available()) {
      NULL;
    }
    Serial.read();
    
    frameCount += 1;
  }
}





