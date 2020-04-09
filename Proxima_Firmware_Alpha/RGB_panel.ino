void RGB_Panel_routine(){
  if(panelMode == "Auto"){
      panelSet(0);
      display_mode_auto();
  }
}

void panelSet(byte wait){
  RGBpanel.setBrightness(brightness[brightness_Level]);
  for(byte index = 0; index < RGBpanel.numPixels(); index++){
    RGBpanel.setPixelColor(index, red, green, blue);
    RGBpanel.show();                          
    delay(wait);
  }
}
