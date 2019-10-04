# -*- coding: utf-8 -*-
import numpy as np
import cv2

# SD9161-H

cap = cv2.VideoCapture('rtsp://root:asilla2015@192.168.0.19/live.sdp')
​
​
while(True):
​
    ret, frame = cap.read()
    cv2.imshow('frame',frame)
​
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
​
cap.release()
cv2.destroyAllWindows()
