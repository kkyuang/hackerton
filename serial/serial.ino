#include<Servo.h> //Servo �쇱씠釉뚮윭由щ� 異붽�
Servo servo;      //Servo �대옒�ㅻ줈 servo媛앹껜 �앹꽦
int value = 0;    // 媛곷룄瑜� 議곗젅�� 蹂��� value

//시리얼 신호로 0 -> 7번핀 서보모터 120도로 움직임
//시리얼 신호로 1 -> 8번핀 서보모터 120도로 움직임
//시리얼 신호로 2 -> 9번핀 서보모터 120도로 움직임

//시리얼 신호로 3 -> 7번핀 서보모터 0도로 움직임
//시리얼 신호로 4 -> 8번핀 서보모터 0도로 움직임
//시리얼 신호로 5 -> 9번핀 서보모터 0도로 움직임




void setup() {
  servo.attach(8);     //留대쾭�⑥닔�� attach : �� �ㅼ젙
  servo.attach(9);     //留대쾭�⑥닔�� attach : �� �ㅼ젙
  Serial.begin(9600); //�쒕━�� 紐⑤땲�� �ъ슜 怨좉퀬
}

void loop() {
  if(Serial.available())      //�쒕━�� 紐⑤땲�곗뿉 �곗씠�곌� �낅젰�섎㈃
  {
    char in_data;             // �낅젰�� �곗씠�곕� �댁쓣 蹂��� in_data
    in_data = Serial.read(); //�쒕━�쇰え�덊꽣濡� �낅젰�� �곗씠�� in_data濡� ����
    if(in_data == '1')        //�낅젰�� �곗씠�곌� 1�대씪硫�
    {
      servo.detach();
      servo.attach(7);     //留대쾭�⑥닔�� attach : �� �ㅼ젙
      servo.write(120); //value媛믪쓽 媛곷룄濡� �뚯쟾. ex) value媛� 90�대씪硫� 90�� �뚯쟾
    }
    else if(in_data == '2')        //�낅젰�� �곗씠�곌� 1�대씪硫�
    {
      servo.detach();
      servo.attach(8);     //留대쾭�⑥닔�� attach : �� �ㅼ젙
      servo.write(120); //value媛믪쓽 媛곷룄濡� �뚯쟾. ex) value媛� 90�대씪硫� 90�� �뚯쟾
    }
    else if(in_data == '3')        //�낅젰�� �곗씠�곌� 1�대씪硫�
    {
      servo.detach();
      servo.attach(12);     //留대쾭�⑥닔�� attach : �� �ㅼ젙
      servo.write(120); //value媛믪쓽 媛곷룄濡� �뚯쟾. ex) value媛� 90�대씪硫� 90�� �뚯쟾
    }


    if(in_data == '4')        //�낅젰�� �곗씠�곌� 1�대씪硫�
    {
      servo.detach();
      servo.attach(7);     //留대쾭�⑥닔�� attach : �� �ㅼ젙
      servo.write(0); //value媛믪쓽 媛곷룄濡� �뚯쟾. ex) value媛� 90�대씪硫� 90�� �뚯쟾
    }
    else if(in_data == '5')        //�낅젰�� �곗씠�곌� 1�대씪硫�
    {
      servo.detach();
      servo.attach(8);     //留대쾭�⑥닔�� attach : �� �ㅼ젙
      servo.write(0); //value媛믪쓽 媛곷룄濡� �뚯쟾. ex) value媛� 90�대씪硫� 90�� �뚯쟾
    }
    else if(in_data == '6')        //�낅젰�� �곗씠�곌� 1�대씪硫�
    {
      servo.detach();
      servo.attach(12);     //留대쾭�⑥닔�� attach : �� �ㅼ젙
      servo.write(0); //value媛믪쓽 媛곷룄濡� �뚯쟾. ex) value媛� 90�대씪硫� 90�� �뚯쟾
    }


    Serial.print(value);
  }
}