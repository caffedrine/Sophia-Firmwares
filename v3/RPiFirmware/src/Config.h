#ifndef DRIVERSCONTAINER_CONFIG_H
#define DRIVERSCONTAINER_CONFIG_H

#define ENCODER_MASTER_GPIO		23
#define ENCODER_SLAVE_GPIO		24

#define MOTOR_MASTER_PWM_GPIO	10
#define MOTOR_MASTER_DIR_GPIO	9

#define MOTOR_SLAVE_PWM_GPIO	20
#define MOTOR_SLAVE_DIR_GPIO	21

#define MOTOR_CUTTER_DIR_GPIO	26
#define MOTOR_CUTTER_PWM_GPIO	19

#define RELAY_CUTTER_ENB_GPIO		12
#define RELAY_ELECTROVALVES_GPIO	16

#define SENSOR_INIT_VERTICAL_SLAVE_GPIO		17
#define SENSOR_INIT_VERTICAL_MASTER_GPIO	4
#define SENSOR_INIT_HORIZONTAL_LEFT_GPIO	6
#define SENSOR_INIT_HORIZONTAL_RIGHT_GPIO	5
#define SENSOR_LASER_CUT_GPIO	18

#define LED_TRAFFIC				27
#define LED_CONNECTION			22

#define TCP_ACK_INTERVAL_MS		3000

#endif //DRIVERSCONTAINER_CONFIG_H
