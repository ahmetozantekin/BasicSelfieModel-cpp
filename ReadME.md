BasicSelfieModel-cpp
========================

cpp barzo tutorial. inspired by @ahmetozantekin

options
--------

- [x]  Gender:    :banana: stores the faggotlevel
- [x]  Instagram: :underage: represents the kilogram
- [x]  Selfie:    :v: Lets roll

usage
----------

```cpp
Selfie* cache;

cout << "MALE TEST" << endl;
(cache = new Selfie(MALE))-> takePhoto();
delete cache;

cout << "FEMALE TEST" << endl;
(cache = new Selfie(FEMALE))-> takePhoto();
delete cache;


cout << "BOOBS TEST" << endl;
cache = new Selfie(FEMALE);
cache-> setShowBoobs(true);
cache-> takePhoto();
delete cache;

return 1;
```