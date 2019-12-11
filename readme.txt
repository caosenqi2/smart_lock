This file tells you how to set up and run the smart lock system:

First, setup the camera on the raspberry pi with motion:
For details, look at the tutorial:
https://www.instructables.com/id/How-to-Make-Raspberry-Pi-Webcam-Server-and-Stream-/

Second, for face recognition program:

requirements:
linux or macOS
python 3.7 or 2.7
opencv 4.1.2 (pip install opencv-python)
tensorflow 1.14
you may create a virtual environment using conda create

cd into face_recognition/
run the following command: 
pip install requirements.txt

after installing the requirements, cd into examples/ and run:
python facerec_from_webcam_faster.py


Third, to enable sending analyzing results to another computer or raspberrypi, cd into examples/ and run:
sh ./loop.sh
after running this command, you keep sending a.txt to another computer in real time


Fourth, for object detection program:
requirements:
linux or macOS
python 3.7 or 2.7
tensorflow 1.14
opencv 4.1.2 (pip install opencv-python)
basically, after you install all requiements,
cd into tensorflow-yolov3/ and run
python video_demo.py

For more details, please read the RRADME.md file under tensorflow-yolov3/ 


Fifth, to enable SMS message sending,
you need to first create your own twilio account and get the account and keys, you will get a free phone number for sending messages
cd into tensorflow-yolov3/ and run:
python send.py


Sixth, to enable lock control, you need to ssh into your raspberry pi or another computer,
requirements:
arduino
Blynk

run face_rec.ino in arduino IDE
run sh ./test.sh

On the other hand, your phone also need to install Blynk and create an app project to get an authorization code where you will replace with in face_rec.ino
Then you will also need to create a button and a video stream window on the app with blynk

Enjoy the smart lock!

