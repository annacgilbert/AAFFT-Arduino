#include "generate_signal.h" //including sig_struct and the function generate_signal

void setup(){
  Serial.begin(9600);
	sig_struct x; //initializing the sig_struct
  x = generate_signal(10, 2, 1.1); //generating a signal with arbitrary parameters for testing
  
  //printing the values returned by generate_signal();
  Serial.print("   Indices: "); //intentionally pre-spaced the word so it will align with Amplitudes
  for(int i = 0 ; i < x.inds.length ; i++){
    Serial.print(x.inds[i]);
    Serial.print(" ");
  }
  Serial.print('\n');
  
  Serial.print("Amplitudes: ");
  for(int i = 0 ; i < x.spx.length ; i++){
    Serial.print(x.spx[i]);
    Serial.print(" ");
  }
  Serial.print('\n');

  Serial.print("Noise: ");
  Serial.println(x.nu);
}
void loop(){
  
}
