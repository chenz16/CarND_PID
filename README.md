# CarND_PID
Self-Driving Car Engineer Nanodegree Program

## Dependencies

 cmake >= 3.5
 All OSes: click here for installation instructions
 
 make >= 4.1
 
 gcc/g++ >= 5.4

 uWebSockets
    
    Run either ./install-mac.sh or ./install-ubuntu.sh.

## Build
  Clone this repo.
  
  Make a build directory: mkdir build && cd build
  
  Compile: cmake .. && make
  
  Run it: ./pid. (make sure you open udaicty simulator, which you can download here: https://github.com/udacity/self-driving-car-sim/releases)
  
## Go through rubics

### Your code should compile.

The code has been tested without any error.
    
### The PID procedure follows what was taught in the lessons. 

The PID design follows what is taught in course material.
     
### Describe the effect each of the P, I, D components had in your implementation.
small P term causes more steady state error meaning the vehicle may drive out of track. Big p term may cause overshooting and ossification meaning it may also drive out of track. 

small I term may not eliminate steady state error meaning the vehicle may drive out of track. Big I term may cause overshooting and ossification meaning it may also drive out of track.

Adding D term in general is good, however, in reality, the D term may introduce much undesired ossification due to the noise nature of D term. 
### Describe how the final hyperparameters were chosen.

i tried to analyze the hyperparameter s through classic control method. However, the system does not have sufficient parameters to let me do so. Then i manually tuned the parameters and picked the one which can keep the vehicle within the boundary of the track. Finally, the hyperparameters are chosen as:

Kp= 0.2;

Ki= 0.0009;

Kd= 8;
    
### The vehicle must successfully drive a lap around the track.

The vehicle successfully drives a lap around the track.
  

