from subprocess import Popen, PIPE
import serial

shift_down = '''keydown Shift_R
'''

shift_up = '''keyup Shift_R
'''

def keypress(sequence):
    p = Popen(['xte'], stdin=PIPE)
    p.communicate(input=sequence)

ser = serial.Serial('/dev/ttyACM1', 19200, timeout=1)
while True:
	ser.flushInput()
	inp = ser.read(1)
	if len(inp) > 0:
		if ord(inp[0]) > 0:
			keypress(shift_down)
		else:
			keypress(shift_up)
