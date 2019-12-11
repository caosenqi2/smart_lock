from twilio.rest import Client
import time
client = Client("AC4209960caed588f68abe44", "ec3b17f2f8600913fbf")
while(1):
    f = open("./b.txt", "r+")
    contents = f.read()
    if (contents == "person\n"):
      print(contents)
      f = open("./b.txt", "r+")
      print("nothing",file=f)
      client.messages.create(to="+191700000", from_="+17259990367",  body="A person is at the door!")
      time.sleep(8)



