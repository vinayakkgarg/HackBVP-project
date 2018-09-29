# PI3Beacon

A BLE(Bluetooth Low Energy) Beacon device that sends a notification to all devices in close proximity to the trigger using Google Nearby service. This notification carries a link that can redirect the user to a website, as per need.

[beacon_init.py](https://github.com/asterisk-bhanu/PI3Beacon/blob/master/beacon_init.py): Base beacon script that sends a notification to the user and the embedded link redirects the user to the Google Search page.

[beacon_final.py](https://github.com/asterisk-bhanu/PI3Beacon/blob/master/beacon_final.py): Modified beacon script that sends a notification with an embedded link to the [index.html](https://github.com/asterisk-bhanu/PI3Beacon/blob/master/index.html).

[index.html](https://github.com/asterisk-bhanu/PI3Beacon/blob/master/index.html): SOS page, including location of trigger.

[beacon.service](https://github.com/asterisk-bhanu/PI3Beacon/blob/master/beacon.service): Unit file to configure beacon engagement on boot as a system service.
