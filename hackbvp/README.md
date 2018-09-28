# CraSOS
### So you do not lie like trash after you crash…..


Our project is designed to reduce the number of casualties due to road accidents by using accident prevention, detection and recovery.

**Theme – Road Safety**
It consists of a driver rating system which can rate drivers on the basis of their speed, driving behaviour, braking intensity etc.
CraSOS is a standalone device which can be fitted inside a car or on a helmet of the two-wheeler rider. The device is equipped with accelerometer, gyroscopic sensors, an onboard camera etc.

For more info about the project, please read this [document](../master/description.docx).

**DRIVER RATING:** With an accelerometer and a gyroscopic sensor our product is able to monitor the velocity variations the vehicle undergoes, thus giving information about driving speed, lane changing behaviour and braking intensity which is used to **rate the driver**.

## About the repository :
## * [Lane-Detection](../master/Lane_Detection)
The code for lane changing detection is here. To know more about it, checkout the [README](../master/Lane_Detection/README.md).

![LaneDetection](https://github.com/vinayakkgarg/Lane-Detection-App/blob/master/lane_detected.png)


## * [vehicle_detection](../master/vehicle_detection)
This detects the license plate of the car, reads it and stores it in a SQL Database which can be later used for processing. To know more about it, checkout the [README](../master/vehicle_detection/README.md).

![vehicleDetection](https://github.com/vinayakkgarg/challan_project/blob/master/vehicle_detection/car_detect.png)


## * [CraSOS (Arduino Code)](../master/CraSOS (Arduino Code))
After the collision or accident is detected, this code is used to generate a SOS message containing the **location of the accident** and **important medical details (like blood group)**, and send it nearby helpline numbers and emergency family contacts.


## * [pics](../master/pics)
Contains pictures of the hardware and our project that we worked upon. Few of them are here..... 


<img src="../master/pics/pic4.jpeg" width="40%" alt="prototype">

<img src="../master/pics/pic1.jpeg" width="40%" alt="helmet">
