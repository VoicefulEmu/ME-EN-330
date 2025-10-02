# ME-EN-330
Class Labs and Projects

Mission Overview 
The objective of your four-person team is to create a robotic rover to explore the surface of Mars and complete 
important tasks autonomously. Points will be awarded for each completed task, which will include autonomously 
navigating a pre-specified course, collecting and analyzing a rock sample, navigating a canyon, returning to the lander, 
and transmitting data to a satellite in orbit around Mars. 
Mars Environment 
Your rover will explore a section of Mars in which scientists have laid out a GPS course that will take the rover past key 
task locations. After exiting the lander, your rover is to proceed in a clockwise direction around the course, following the 
GPS waypoints (represented by a 1-inch painted white line) to each task location, returning to the lander at the end of 
the course. The Mars environment will be built on black foam tiles, which can be reconfigured to create different 
mission courses. Each mission will require the rover to navigate 22 tiles. In addition to the course tiles, there will be one 
tile where the lander is located and two tiles where other task-related hardware is located. A sample course is shown in 
Figure 1. Although the course can be rearranged, the lander will always be the first and last tile in the course, and the 
sample-return tile will always be later in the course than the sample-collection tile. 
Figure 1. Sample mission course. Blue tiles are generic GPS navigation zones. Yellow tiles are the start and end point, 
including the lander and satellite target. Orange tiles are part of the sample collection and return task. Pink tiles are the 
canyon, where GPS navigation (white line) is not available. Green tiles represent an equipment servicing task, which is 
no longer be a part of the mission requirements. 
Revised 9/9/25 
Mission Tasks 
1. Sample Collection and Return 
One of the key tasks in the mission profile is to collect a rock sample (represented by a ping-pong ball) and deposit it in a 
bin for a later return to earth for analysis.1 The location of the sample collection area will be indicated by an infrared 
beacon, the details of which will be given later. The rock wall containing the rock sample is located to the right of your 
rover’s path. Your rover must push on a section of the rock wall with just enough force to dislodge the sample and cause 
it to roll into a storage area on your rover. The optimal height for pushing on the rock wall has been determined to be 
3.5” above the ground. The sample will roll off the rock wall at a height of 7.5” above the ground, as shown in Figure 2.  
After collecting a sample, it must be deposited in one of two sample-return bins, located on both sides of the rover’s 
path. Your rover must determine the color of the rock sample that it collected and deposit it into the left bin if it is a 
white rock sample or into the right bin if it is a black rock sample. The sample return bins are 1.5” tall. The tile with the 
sample-return bins will always be later in the course than the sample-collection tile. 
Figure 2. Left: Dispenser for Sample Collection task, including the infrared LED emitter. The rover 
must press on the grey lever to retrieve the sample (ball) from the dispenser on the top. Right: 
Sample return bins. 
2. Canyon Navigation 
The desired path to the tasks and back to the lander requires that the rover pass through a small canyon. Because of the 
high canyon walls, your rover cannot receive GPS signals while in the canyon. This situation is called a GPS-denied 
environment, so waypoints (the white line) will not be available in the canyon. The canyon will be made up of five tiles: 
a. Three right-angle tiles with canyon walls on two adjacent sides. 
b. One straight canyon tile with walls on opposite sides. 
c. One exit tile, with a wall on one side and a white line extending perpendicular to the wall. 
The wall thickness in each case will be 0.75”. The entrance tile will be the first that the rover encounters, followed by the 
four intermediate tiles arranged in an arbitrary order, followed by the exit tile. The exit direction (whether the lander 
must turn right or left at the exit) may be varied and must be determined by the rover. 
1See https://en.wikipedia.org/wiki/Mars_sample-return_mission for the NASA equivalent mission. 
Revised 9/9/25 
3. Data Transmission 
At the completion of the assigned navigation path, the rover must re-enter the lander, aim its high-gain antenna at the 
satellite in orbit, and transmit the results of its mission for relay to earth. The horizontal location of the satellite is 
centered on the tile directly across the white line from the lander. The vertical location is unknown but will be between 
45 degrees and 75 degrees from the horizontal, as shown in Figure 4. Your rover must determine the vertical location by 
sensing an IR emitter in the center of the target satellite. Note that the IR emitter from the satellite will be aimed at the 
lander in approximately the same location, regardless of its elevation from the horizontal (see Figure 4). 
When the antenna is properly aligned, the rover must begin data communication by turning on (and leaving on) the 
laser communication feed (a laser module will be provided). The mission ends at this point or when the allowed time 
expires. Points will be awarded for proper alignment of the antenna, as determined by whether a laser dot is seen on 
the receiving antenna on the satellite. Details of the dimensions and shape of the satellite can be seen in the lab. 
Target 
(satellite) 
Lander 
IR from satellite 
will point here 
regardless of 
satellite elevation.  
�
�
 𝜃 
Figure 4. Location of satellite relative to lander. Left: General view. Right: Angle 
definition. For the mission 45° ≤ 𝜃𝜃 ≤ 75° 
Mission Parameters 
1. Mission Rules 
• The rover must start the mission from within the lander. 
• The mission will begin when the team activates the rover. 
• The mission must be completed within 60 seconds after the rover is initially activated. 
• The mission will end when the rover turns on its laser communication feed or when the mission time expires, 
whichever comes first. 
• The rover must be completely inside the lander at the end of the mission. 
• The rover may complete the mission twice. The final score will be the best of the two mission scores. 
• All actions must be accomplished by the rover autonomously, without human intervention. The exception is in 
the case of failed tasks, as described below. 
• The order of the tiles and the direction of turns will be set on the day of the mission. Your rover must be able to 
handle different turn directions and tile orders. 
• The rover must complete the mission in the clockwise direction. 
• There will be natural variability in line thickness and darkness, and obstacle and task dimensions, as well as 
inadvertent bumps and discontinuities in the track. Your rover must be able to handle variability of this sort. 
Revised 9/9/25 
• During the round, between rounds, or before the start of the round, the team may not enter any information 
into the rover about the course layout, turn directions, sensor values, height of satellite, etc. In other words, 
your robot must function autonomously regardless of the course layout. 
• The use of artificial intelligence (AI) in any form or for any purpose is prohibited on this project. 
• The decisions of the instructor and TAs regarding these rules and the conduct of the mission shall be final. 
2. Scoring 
Points will be awarded for each task, as shown in Table 1. Partial points will be given for partial completion of tasks. 
Table 1. Points earned for successful completion of each task 
Task 
Success Condition 
Sample Collection 
Points 
The rover collects a rock sample and returns to travel along the white line 
in the correct direction. 
Sample Return 
12.5 
The rover deposits the rock sample in the correct bin, according to color, 
and continues motion along the white line in the correct direction. 
Canyon Navigation 
10 
The rover successfully navigates through the canyon and, upon exiting the 
canyon, continues motion along the white line in the correct direction. 
Data Transmission 
10 
The rover enters the lander and turns on the laser with the beam 
impinging on the target portion of the satellite. 
Total 
12.5 
45 
3. Failed Tasks 
If the rover is unable to accomplish a task, the team has two options: 
a. Reattempt the task. This is done by placing the rover on the tile preceding the first tile of the failed task and 
letting the rover try the failed task again. This can be done once per task after the initial attempt. Points for 
successfully completed portions of the task will be awarded. The mission clock will not be paused. If a rover 
partially completes a task and the team decides to reattempt the task, the partial points for the previous 
attempt will be replaced by partial or complete points earned in the new attempt. 
b. Skip the task. This is done by placing the rover on the white line on the final tile of the failed task, and letting the 
rover proceed along the course. If the task is skipped after attempting the task, the partial points earned in 
previous attempt are retained. If the task is skipped without attempting the task, the points for the task will not 
be earned. In either case, the mission clock will not be paused. 
In reattempting or skipping the task, keep this in mind: 
a. The robot cannot be reset or turned on or off 
b. The team cannot push any buttons or enter any information into the robot of any sort 
c. In other words, the robot must continue in its programming without interruption and cannot receive any “hints” 
from the team 
There are four special cases: 
a. If the robot successfully navigates the canyon, but turns the wrong direction on the exit tile, the team may 
choose to reattempt the exit tile only by placing the robot in the final canyon tile, rather than at the entrance to 
the canyon. 
b. For the Data Transmission task, no reattempts are allowed after the rover has entered the lander. If the rover 
does not successfully enter the lander, the team may choose to reattempt the task by placing the robot on the 
tile preceding the task tile. 
Revised 9/9/25 
c. If the rover leaves the white line between tasks, you may either let it find its way back onto the line or place it 
on the previous tile and try again. This may be done up to three times in the entire mission. 
d. If the rover attempts to collect a sample but is unsuccessful, you will be able to manually place the sample on 
your rover, without pausing it or interacting with it in any other way, so it can then attempt the Sample Return 
task. 
To illustrate how failed tasks are to be handled, here are some non-exhaustive examples: 
a. For the Sample Collection task, the rover successfully obtains a rock sample but is unable to reacquire the white 
line and continue along the track. The team has two options at this point: 
a. Reattempt the task, starting from the tile before the task tile. They will lose the partial points they 
earned for collecting the sample in the first attempt, but they will have the possibility of earning full 
points if, in the second attempt, they are able to collect the sample and reacquire the line and continue 
along the track. 
b. Skip the remainder of the task by placing the rover on the white line of the tile task, beyond the task 
markers. They will keep the partial points they earned for collecting the sample, but they will not have 
the possibility of earning full points for the task because their robot did not successfully reacquire the 
line and continue along the track without human intervention. 
b. For the Canyon Navigation task, the rover does not successfully navigate the canyon. The team chooses to 
reattempt by placing the rover on the tile preceding the canyon tiles. On this second attempt, the robot 
successfully navigates the canyon, but turns the wrong direction on the canyon exit tile. The team has one more 
attempt left, so they choose to reattempt just the exit tile (one of the special cases listed above). They do not 
successfully complete the exit tile, so they earn the partial points from successfully navigating the canyon but 
they do not earn the partial points from completing the exit tile correctly. 
c. For the Sample Collection task, the rover is able to find the sample collection area but is unable to collect the 
sample (ball). The team chooses to not attempt again, so they place the robot beyond the turnoff for the Sample 
Collection task. They receive partial credit for what their rover achieved on that task, but they do not have a 
sample in the rover. To make it possible to attempt the Sample Return task, they place a sample of the same 
color on their rover as it is moving between the Sample Collection and Sample Return task. 
4. Grading 
The project is worth 45% of your grade. The breakdown is given in Table 2. 
Table 2. Project grading breakdown 
Milestones: 
20% Points awarded on a weekly basis as a function of how well you achieve the milestones. 
Mission 
Performance: 
15% Points awarded based on the point breakdown in Table 1. For example, if you get 35/45 
Engineering 
and Video: 
10% 
points, your Mission Performance score will be (35/45)(15%) = 11.7%. 
Engineering points awarded based on quality of design and construction, including 
mechanical subsystems and electrical subsystems, aesthetics, and innovation. Video 
points awarded based on quality, thoroughness, and style. Video guidelines will be given 
later. 
Rover Parameters 
1. Rover Rules 
• The only power source allowed for your rover is battery power. 
• Each rover must have a power button/switch that disconnects power from all motor circuits. 
Revised 9/9/25 
• All rovers must be controlled using a PIC microcontroller. Multiple PICs are allowed, but probably unnecessary. 
• No prebuilt rovers or significant prebuilt chunks of rovers will be allowed. 
• No prebuilt sensor arrays or mechanical mechanisms may be used. 
• You must use at least one QRD1114 sensor on your rover. 
• The rover must be fully autonomous. 
• If there are questions about whether a particular approach or pieces of hardware may be used, these must be 
addressed to the instructor before deciding to incorporate them into your design. 
2. Materials 
Some of the materials that you will use for your project will be provided as a team kit, which will include motors, motor 
drivers, batteries, and certain sensors. Additional materials are available for check-out from on-hand supplies. You may 
also check out or purchase materials from the Project Support Center (PSC) or the EE Experiential Learning Center (ELC). 
Although there is not a limit on what you can spend on your rover, experience has shown that teams that spend a lot of 
money are no more likely to succeed than teams who spend little. Focus on quality and testing. 
Mission Timeline 
Milestones are extremely important in engineering work–they force a team to design, build, and test components and 
subsystems in a way that will lead to a successful product. We have provided basic milestones to help you progress in 
the project. All milestones are indicated in Learning Suite. The more successful you are at achieving the milestones, the 
more successful you will be in the final mission. 
Working in parallel as a team can be very effective, with some team members working on future milestones while others 
work on the current milestone. Remember that subsystem integration (combining and testing the subsystems, refining 
the whole system, debugging, and iterating on the system design) takes as much time as developing the individual 
subsystems. Try to get ahead of the milestones to give yourself more integration time at the end. 
Revised 9/9/25 
