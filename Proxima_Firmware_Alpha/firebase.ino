void firebaseInit() {
  // Connection to firebase
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  // Set API
  Firebase.setString("/Objects/09/id","09");
  Firebase.setString("/Objects/09/ref","PROXIMA ALPHA");
  Firebase.setString("/Objects/09/API/panelMode/", panelMode);
  Firebase.setInt("/Objects/09/API/red/", red);
  Firebase.setInt("/Objects/09/API/green/", green);
  Firebase.setInt("/Objects/09/API/blue/", blue);
  Firebase.setInt("/Objects/09/API/brightness_Level/", brightness_Level);
}

int firebase_getRGB(String key){
  int value = Firebase.getInt("/Objects/09/API/" + key + "/");
  return value;
}
