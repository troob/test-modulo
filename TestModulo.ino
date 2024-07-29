/* Test Modulo
 * specifically negative behavior
 */

float piApprox = 3.14,
  modulus = 2 * piApprox,
  dividend = -3 * piApprox / 2;

void setup() 
{
  Serial.begin(9600);

  while(!Serial);

  modulus *= 180 / piApprox; // [deg]
  dividend *= 180 / piApprox; // [deg]

  int remainder = (int) dividend % (int) modulus;

  Serial.print("Remainder (deg): ");
  Serial.println(remainder);
}

void loop() {
  // put your main code here, to run repeatedly:

}
