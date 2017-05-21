'''
receive data from one arduino uno;
it will be revised to accomate multile arduinos
'''


import time
import serial

print "In 3..."
time.sleep(1)
print "2..."
time.sleep(1)
print "1..."
time.sleep(1)
print "Start!"

#initialize arduino
ser = serial.Serial("COM4", 250000)
#append all incoming data to a string object
string = ''
startTime = time.time()
#specify how long the program will receive samples
while (time.time() - startTime) < 3:
    string = ''.join((string, ser.readline()))
    #send a byte to arduino to signal that it is ready for the next sample
    ser.write("b")

ser.flush()
#print out the result; eventually it will be output to a txt or csv file
print string
