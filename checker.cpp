#include <assert.h>

bool isInRange(float value,int lowerLimit,int upperLimit){
return (value>=lowerLimit||value<=upperLimit);
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {

  return (isInRange(bpm,70,150) && isInRange(spo2,90,100) && isInRange(respRate,30,95));

}



int main() {

  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
  assert(vitalsAreOk(60,95,103)==false);
  assert(vitalsAreOk(80,82,28)==false);
}
