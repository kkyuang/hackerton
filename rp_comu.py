##시리얼 통신
import serial

#시리얼포트 객체 ser을 생성
#pc와 스위치 시리얼포트 접속정보
ser = serial.Serial(
    port = 'COM7', 
    baudrate=9600, 
    parity='N',
    stopbits=1,
    bytesize=8,
    timeout=8
    )

#시리얼포트 접속
ser.isOpen()

#시리얼포트 번호 출력
print(ser.name)

number = '1'

ser.write(number.encode())





#소켓 통신

import socketio

HOST = "http://localhost"
point = 4


### 쓰레기 투입이 끝났을 때 서버에 QR코드 링크를 요청하는 코드

# standard Python
sio = socketio.SimpleClient()

sio.connect(HOST)

sio.emit('endTrash', {'point': point})

event = sio.receive()
print(f'received event: "{event[0]}" with arguments {event[1:]}')