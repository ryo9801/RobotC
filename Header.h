void setL(int p){ 
  setMotoSpeed(ML,p);
}
void setR(int p){ 
  setMotorSpeed(MR,p);
}
void drive(int p){
  setL(p);
  setR(p);
}
