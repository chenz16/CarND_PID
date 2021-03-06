#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {

  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;
  //this->dt = dt;
  this->p_error = 0;
  this->i_error = 0;
  this->d_error = 0;

}

void PID::UpdateError(double cte) {
  i_error = i_error + cte;
  d_error = (cte - p_error);
  p_error = cte;
  //PID::TotalError();
}

double PID::TotalError() {

  return -Ki*i_error - Kd*d_error - Kp*p_error;

}
