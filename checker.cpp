#include <assert.h>
bool bpm_check(float bpm){
   return bpm < 70 || bpm > 150;
}
bool spo2_check(float spo2){
return spo2 < 90;
}
bool respRate_check(float respRate){
return respRate < 30 || respRate > 95;  
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return bpm_check(bpm)&&spo2_check(spo2)&&respRate_check(respRate);
}
int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
}
