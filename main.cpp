 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   - you should be left with only your UDTs.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */



/*
1)  car
5 properties:
    1)  doors
    2)  wheels
    3)  engine
    4)  steering wheel
    5)  fuel tank
3 things it can do:
    1)  start
    2)  move
    3)  turn
 */

struct Car
{
    unsigned int numDoors = 5;
    unsigned int numWheels = 4;
    unsigned int sizeOfEngine = 2500;
    bool LeftHandDriving = true;
    float volumeGasTank = 70.0f;

    bool startEngine();
    void moveCar(Car car, float speed, float duration);
    void turnCar(Car car, float angleSteeringWheel, float speed, float duration);

};

/*
2)  dog head
5 properties:
    1)  eyes
    2)  ears
    3)  teeth
    4)  nose colour
    5)  hair colour
3 things it can do:
    1)  bark
    2)  eat
    3)  lick
 */

struct DogHead
{
    struct Colour
    {
        int red   = 0,
            green = 0,
            blue  = 0;
    };

    int numEye = 2;
    int numEar = 2;
    int numTeeth = 42;
    Colour nostrilColour = {255, 0, 255};
    Colour hairColour = {0, 255, 0};

    void dogBark(int barkTimes, float loudBark);
    void dogEat(float quantityFood, float speed);
    void dogLick(int lickTimes, float lengthTongue);

};

/*
3)  computer
5 properties:
    1)  keyboard
    2)  screen
    3)  CPU
    4)  sound card
    5)  mouse
3 things it can do:
    1)  boot
    2)  play sound
    3)  show stuff on the screen
 */

struct Computer
{
    struct PixelSize
    {
        int xSize = 1920,
            ySize = 1080;
    };

    int numKeys = 103;
    PixelSize screenSize = {1920, 1080};
    int numCores = 8;
    int numChannels = 16;
    bool laserMouse = true;

    bool bootComputer(int startMode);
    void playSound(float soundLevel, int frequency);
    void displayNumber(Computer myComputer, float number2Display);

};

/*
4)  bird
5 properties:
    1)  wings
    2)  legs
    3)  beak
    4)  tail
    5)  eyes
3 things it can do:
    1)  fly
    2)  walk
    3)  sleep
 */

struct Bird
{
    struct Limb
    {
        int numDigits = 5;
        float lengthLimb = 20.0f;
    };

    Limb wing = {0, 30.0f};
    Limb leg  = {5, 15.0f};
    float lengthBeak = 3.5f;
    int numTailFeather = 5;
    bool sideFacingEyes = true;

    void birdFly(Bird bird, int flapsPerSecond);
    void birdWalk(bool startWithLeftLeg, float stepsPerSecond);
    void birdSleep(bool sleepStanding, float sleepDuration);

};

/*
5)  Input
5 properties:
    1)  assigned preamp socket in patch
    2)  gain
    3)  phantom power
    4)  low cut filter
    5)  -20dB pad
3 things it can do:
    1)  adjust input level
    2)  power static microphones and active DIs
    3)  send signal to input channel
 */

struct InputChannel
{
    struct InputPad
    {
        float attenuation = -20.0f;
        bool engaged = false;
    };

    int preampSocket = 0;
    float gain = 10;
    bool phantomePower = false;
    bool loCut = true;
    InputPad inputPad {-20.0f, true};

    float setGain(InputChannel inputChan, float targetGain);
    bool switchP48(InputChannel inputChan, bool p48active);
    void getSignal(InputChannel inputChan);

};

/*
6)  Eq
5 properties:
    1)  eq active
    2)  type of filter
    3)  frequency
    4)  Q or slope
    5)  gain (cut or boost)
3 things it can do:
    1)  modify timber/tone of signal
    2)  cascade several filter bands
    3)  indicate clipping
 */

struct Equaliser
{
    struct EqBand
    {
    int typeFilter = 0;
    float frequency = 200.0f;
    float qiuSlope = 0.7f;
    float gain = 0.0f;
    };

    bool eqActive = true;
    EqBand eqBand_1 = {0, 100.0f, 0.7f, 0.0f};
    EqBand eqBand_2 = {1, 500.0f, 0.7f, 0.0f};
    EqBand eqBand_3 = {1, 1000.0f, 0.7f, 0.0f};
    EqBand eqBand_4 = {2, 5000.0f, 0.7f, 0.0f};
    
    bool setEqParams(int selectBand, EqBand newEqParam);
    void cascadeEq(EqBand eqBand1, EqBand eqBand2, EqBand eqBand3, EqBand eqBand4);
    bool clipping(float signal);

};

/*
7) compressor
5 properties:
    1)  threshold
    2)  ratio
    3)  knee
    4)  attack time
    5)  release time
3 things it can do:
    1)  detect if signal is above level
    2)  reduce signal if above level
    3)  progressively release signal reduction once signal is below threshold
 */

struct Compressor
{
    float threshold = -30.0f;
    float ratio = 2.0f;
    int kneeCurve = 0;
    int attackTime = 10;
    int releaseTime = 50;

    bool aboveThreshold(float signal, float threshold);
    float compressSignal(float signal, float threshold, float ratio, int kneeCurve, int attackTime);
    float releaseSignal(float signal, Compressor compressor);

};

struct EightFloats
{
    float v1 = 0.0f,
          v2 = 0.0f,
          v3 = 0.0f,
          v4 = 0.0f,
          v5 = 0.0f,
          v6 = 0.0f,
          v7 = 0.0f,
          v8 = 0.0f;
};

struct EightInts
{
    int v1 = 0.0f,
        v2 = 0.0f,
        v3 = 0.0f,
        v4 = 0.0f,
        v5 = 0.0f,
        v6 = 0.0f,
        v7 = 0.0f,
        v8 = 0.0f;
};

/*
8)  routing
5 properties:
    1)  assign to master channel
    2)  assign to sub groups
    3)  master pan
    4)  aux sends level
    5)  aux sends pan
3 things it can do:
    1)  send to master channel
    2)  send to sub groups
    3)  send to aux channels
 */

struct Routing
{
    bool assign2master = true;
    EightInts assign2groups = {0, 0, 0, 0, 0, 0, 0, 0};
    float panMaster = 0.5f;
    EightFloats sendLevels = {-60.0f, -60.0f, -60.0f, -60.0f, -60.0f, -60.0f, -60.0f, -60.0f};
    EightFloats sendPans = {0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f};

    float send2Master(float signal, bool assign2master);
    void send2groups(float signal, EightInts assign2groups);
    void send2auxes(float signal, EightFloats sendLevels);
    
};

/*
9)  output channel
5 properties:
    1)  output level
    2)  delay
    3)  Eq
    4)  matrix sends
    5)  output patch
3 things it can do:
    1)  sum all input signals sent to it
    2)  adjust level
    3)  send summed signal to outputs
 */

struct OutputChannel
{
    float outputLevel = -60.0f;
    unsigned int delaySamples = 0;
    Equaliser outputEq;
    EightFloats matrixSend = {-60.0f, -60.0f, -60.0f, -60.0f, -60.0f, -60.0f, -60.0f, -60.0f};
    int outputPatch = 0;

    void sumSignals(float signal1, float signal2, float signal3);
    float adjustOutputLevel(float signal, float outputLevel);
    void send2output(float signal, int outputPatch);

};

/*
10) digital console
5 properties:
    1) input channel
    2) eq
    3) compressor
    4) routing
    5) output channel
3 things it can do:
    1) adjust level and tone
    2) mix different inputs to the output channels
    3) patch inputs and outputs
 */

struct DigitalConsole
{
    InputChannel inputChannels;
    Equaliser inputEqualisers;
    Compressor inputCompressors;
    Routing inputRouting;
    OutputChannel outputChannels;

    float adjustLevelAndEq(float signal, InputChannel inputSettings, Equaliser eqSettings);
    void send2GroupsAndAuxes(float signal, Routing inputSends);
    void assignPatch(bool isInput, int channelNumber, int socketNumber);

};

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
