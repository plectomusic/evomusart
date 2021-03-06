# ctrnnSynth

This project is a Javascript, C and Max/MSP package for audio synthesis using Continuous Time Recurrent Neural Networks (CTRNN).
The code and documentation are still under development.

## Motivation

This is a research project that explores the use of Continuous Time Recurrent Neural Networks (CTRNN) as an audio synthesis algorithm. Included is both a Javascript implementation of a CTRNN synthesis algorithm, a C library for use on a Teensy, and a Max/MSP external that allows CTRNN configurations to be imported and played within the Max/MSP environment. This research is still under way and will be updated regularly.

## Installation

- **Javascript**

  Include the **ctrnn.js**, **leaky-integrator.js** and **map-params.js** files into your project.

- **C**

  Include the **ctrnn.h**, **leakyIntegrator.h** and **mapParams.h** and **ctrnnConfig.h** files into your project.

- **JSON CTRNN configuration**

  A sample JSON CTRNN configuration can be found in the root directory of this project.
  We are working on an interface that will allow users to search for CTRNN configurations
  and download them for use in either the Javascript or Max/MSP environment.

- **NS Algorithm**

  The NS algorithm has the JS CTRNN library included. To run the algorithm, run the following commands.
  ``` Javascript
  npm install
  npm start
  ```

**Further documentation to come!**  

## Javascript Reference

```javascript
// Create a CTRNN structure.
var ctrnnStruct = new ctrnn.CTRNNStructure(0.1);
// Pass in your CTRNN configuration.
ctrnnStruct.setConfiguration(CTRNNconfiguration);

// Initialise network with new configuration.
ctrnnStruct.initialiseCTRNN(deltaTime, numberOfInputs);

// Feed input into network. Each element of the array is fed into all CTRNN Input Neurons.
// Length of array must match the number of CTRNN inputs.
ctrnnStruct.feedInputs(inputArray);

// Update network state.
ctrnnStruct.updateCTRNN();

// Get network output as an array.
var outputs = ctrnnStruct.getOutputs();

// Sets network back to start state.
ctrnnStruct.resetCTRNN();
```

