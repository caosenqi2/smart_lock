To operate the lock, download the "face_reg" code to the Arduino board first.
"senttoard.py" is a python code to read the txt file returned from the server and  send message to serial port. The Arduino board will read the message from port and determine weather to change the lock status.
"test.sh" is a shell continually run the python code.
