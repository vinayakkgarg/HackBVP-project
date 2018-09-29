#!/usr/bin/python3
import subprocess
import time
import RPi.GPIO as GPIO

def start_advertising():
        print("STARTING ADVERTISEMENT")
        BLUETOOTH_ENABLE_CMD = "sudo hciconfig hci0 up".split(" ")
        BLUETOOTH_ADVERTISING_MODE_CMD = "sudo hciconfig hci0 leadv 3".split(" ")
        BLUETOOTH_ADVERTISING_DATA_CMD = "sudo hcitool -i hci0 cmd 0x08 0x0008 15 02 01 06 03 03 aa fe 0d 16 aa fe 10 00 03 67 6f 6f 67 6c 65 07 00 00 00 00 00 00 00 00 00 00".split(" ")
        enable_proc = subprocess.Popen(BLUETOOTH_ENABLE_CMD)
        enable_proc.wait()
        advertise_mode = subprocess.Popen(BLUETOOTH_ADVERTISING_MODE_CMD)
        advertise_mode.wait()
        adv_data = subprocess.Popen(BLUETOOTH_ADVERTISING_DATA_CMD)
        adv_data.wait()

def stop_advertising():
        print("STOPING ADVERTISEMENT")
        STOP_ADV = "sudo hcitool -i hci0 cmd 0x08 0x000a 00".split(" ")
        disable_proc = subprocess.Popen(STOP_ADV)
        disable_proc.wait()
        exit()

def check_input():
        INPUT_PIN = 4
        return GPIO.input(INPUT_PIN)

GPIO.setmode(GPIO.BCM)
GPIO.setup(4, GPIO.IN, pull_up_down = GPIO.PUD_DOWN)
while 1:
        print(check_input())
        if check_input() == 1:
                start_advertising()
                time.sleep(30)
                stop_advertising()
        time.sleep(0.1)

