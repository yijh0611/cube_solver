// 스텝모터 예제
// https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=ktdong61&logNo=221397726683
// 코드 참고

// 수정할 것들 - 파이썬으로부터 신호 받으면, 원하는 만큼 모터 돌리게 만들기.

const int stepPin = 4; //
const int dirPin = 12; // 

void setup() {

  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);

}

void loop() {

  digitalWrite(dirPin,HIGH);      // 시계방향

  for(int x = 0; x <200; x++) {   // 두바퀴 회전
    digitalWrite(stepPin,HIGH); 
    delay(5); 
    digitalWrite(stepPin,LOW); 
    delay(5); 

  }

  delay(1000); 
 
  digitalWrite(dirPin,LOW); //반시계방향 

  for(int x = 0; x < 200; x++) {  // 한바퀴회전
    digitalWrite(stepPin,HIGH);  
    delay(5);
    digitalWrite(stepPin,LOW);

    delay(5);

  }

  delay(1000);

}