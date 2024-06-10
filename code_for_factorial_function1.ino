// C++ code
//
int factorial(int n);
void setup()
{
  Serial.begin(9600);
  int num=5;
  Serial.print("Factorial of");
  Serial.print(num);
  Serial.print("is");
  int m=factorial(num);
  Serial.println(m);
  

}

void loop()
{
  
}
int factorial(int n){
  if(n==0||n==1){
    return 1;
  }
  else{
    return n*factorial(n-1);
  }
}