# Robotfish_ROS
Important Links to Consider
======
http://masc.cs.gmu.edu/wiki/ROS  
https://www.youtube.com/watch?v=T7X_p_KMwus  
http://wiki.ros.org/sw_urdf_exporter/Tutorials/Export%20an%20Assembly  
https://nu-msr.github.io/me495_site/lecture10_sdf_gazebo.html  
http://masc.cs.gmu.edu/wiki/ROS  

CSULA Robotic Fish Research
======
1. sudo apt-get update
2. sudo apt-get -y install nano
3. sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
4. sudo apt install curl
5. curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -
6. sudo apt update
7. sudo apt install ros-melodic-desktop
8. echo "source /opt/ros/melodic/setup.bash" >> ~/.bashrc
9. source ~/.bashrc
10. sudo apt install python-rosdep python-rosinstall python-rosinstall-generator python-wstool build-essential
11. sudo apt install python-rosdep
12. sudo rosdep init
13. rosdep update  

&emsp;**Check if ROS is Installed:**   
&emsp;&emsp; printenv | grep ROS