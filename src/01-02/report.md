
## Part 1. Ready-made docker

##### 1) Take the official docker image from nginx and download it using docker pull
![1.1](./images/part_1/1.1.png)
##### 2) Check for the docker image with docker images.
![1.2](./images/part_1/1.2.png)
##### 3) Run docker image with docker run -d [image_id|repository].
![1.3](./images/part_1/1.3.png)
##### 4) Check that the image is running with docker ps.
![1.4](./images/part_1/1.4.png)
##### 5) View container information with docker inspect [container_id|container_name].
![1.5](./images/part_1/1.5.png)
##### 6) From the command output define and write in the report the container size, list of mapped ports and container ip.
![1.6](./images/part_1/1.6.png)

![1.6](./images/part_1/1.6.1.png)

![1.6](./images/part_1/1.6.2.png)
##### 7) Stop docker image with docker stop [container_id|container_name].
![1.7](./images/part_1/1.7.png)
##### 8) Check that the image has stopped with docker ps.
![1.8](./images/part_1/1.8.png)
##### 9) Run docker with ports 80 and 443 in container, mapped to the same ports on the local machine, with run command.
![1.9](./images/part_1/1.9.png)
##### 10) Check that the nginx start page is available in the browser at localhost:80.
![1.10](./images/part_1/1.10.png)
##### 11) Restart docker container with docker restart [container_id|container_name].
##### 12) Check in any way that the container is running.
![1.11](./images/part_1/1.11.png)

## Part 2. Operations with container

##### 1) Read the  _nginx.conf_  configuration file inside the docker container with the  _exec_  command.
![2.1](./images/part_2/2.1.png)
##### 2) Create a  _nginx.conf_  file on a local machine.
##### 3) Configure it on the  _/status_  path to return the  **nginx**  server status page.
![2.3](./images/part_2/2.3.png)
##### 4) Copy the created  _nginx.conf_  file inside the docker image using the  `docker cp`  command.
![2.1](./images/part_2/2.4.png)
##### 5) Restart **nginx**  inside the docker image with  _exec_.
![2.1](./images/part_2/2.5.png)
##### 6) Check that  _localhost:80/status_  returns the  **nginx**  server status page.
![2.1](./images/part_2/2.6.png)
##### 7) Export the container to a  _container.tar_  file with the  _export_  command.
![2.1](./images/part_2/2.7.png)
##### 8) Stop the container.
![2.1](./images/part_2/2.8.png)
##### 9) Delete the image with  `docker rmi [image_id|repository]`without removing the container first.
![2.1](./images/part_2/2.9.png)
##### 10) Delete stopped container.
![2.1](./images/part_2/2.10.png)
##### 11) Import the container back using the  _import_command.
![2.1](./images/part_2/2.11.png)
##### 12) Run the imported container.
![2.1](./images/part_2/2.12.png)
##### 13) Check that  _localhost:80/status_  returns the  **nginx**  server status page.
![2.1](./images/part_2/2.13.png)
