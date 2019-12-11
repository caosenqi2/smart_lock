import serial
import time

f=open("a.txt","r")
if(f.read() == 'Senqi\n'):
    ser = serial.Serial('/dev/tty.usbmodem1411',9600,timeout=5)


    ser.flush()
    #if(f.read() == 'Senqi\n'):
    ser.write(b'a')
    print('a')
    ser.close()
    f.close()
f.close()


