# PUSH BUTTON COUNTER

*COMPANY*: CODETECH IT SOLUTIONS

*NAME*: THIRUNAM ASHISH KUMAR

*INTERN ID*: CTIS8681

*DOMAIN*: EMBEDDEB SYSTEMS

*DURATION*: 8 WEEKS

*MENTOR*: NEELA SANTHOSH

# DESCRIPTION

Simple Arduino project that counts the number of push button presses and displays the count using LCD/Serial Monitor. Useful for learning digital input handling, counters, and embedded systems basics.

The project demonstrates how an Arduino Uno can be used to detect button presses, maintain a running count, and display the count on a 16×2 LCD screen. This type of project is commonly used to teach beginners the fundamentals of digital input handling, output display control, and programming logic in embedded systems.

At the center of the circuit is an Arduino Uno microcontroller board, which serves as the main processing unit. The Arduino is connected to a 16×2 LCD display using the LiquidCrystal library. The code visible in the sketch begins with the inclusion of the LiquidCrystal.h library and the declaration of LCD pin connections. The LCD is initialized using six digital pins from the Arduino, allowing it to display text and numerical values. The screen currently shows the title “Button Counter” on the first row and “Count: 12” on the second row, indicating that the push button has been pressed twelve times during the simulation.

A push button is connected to digital pin 7 of the Arduino. The code defines variables such as buttonPin, buttonState, lastButtonState, and count to monitor the state of the button and store the number of valid presses. The button acts as a digital input device. When pressed, it changes the voltage level at the assigned pin, allowing the Arduino to detect the action. The circuit also includes a resistor connected to the push button, which is likely configured as a pull-down resistor. This resistor ensures that the input pin remains at a stable logic level when the button is not pressed, preventing false triggering caused by floating inputs.

Another important feature visible in the code is the implementation of software debouncing. Mechanical push buttons often generate multiple rapid electrical signals when pressed or released due to physical contact bouncing. To address this issue, the program uses debounce variables such as lastDebounceTime and debounceDelay. The debounce delay is set to 50 milliseconds, which helps filter out unwanted signals and ensures that each physical press is counted only once.

The setup function initializes the button pin as an input, starts serial communication at 9600 baud, and configures the LCD display. Initial text is printed to the screen, providing a clear user interface. During operation, the program continuously checks the button state. When a valid press is detected, the counter value is incremented and the updated count is displayed on the LCD.

The Wokwi simulation environment provides a visual representation of both the code and hardware connections, making it easy to test and verify the circuit without physical components. This project effectively demonstrates key embedded system concepts, including digital input processing, state monitoring, debouncing techniques, LCD interfacing, and real-time display updates. It serves as an excellent educational example for students learning Arduino programming and basic electronics.
