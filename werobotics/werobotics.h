/** @file
 *  @brief MAVLink comm protocol generated from werobotics.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_WEROBOTICS_H
#define MAVLINK_WEROBOTICS_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_WEROBOTICS.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 4

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{12001, 161, 8, 0, 0, 0}, {12002, 157, 26, 0, 0, 0}, {12003, 1, 1, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_WEROBOTICS

// ENUM DEFINITIONS


/** @brief Status of the onboard mechanism */
#ifndef HAVE_ENUM_WER_ONBOARD_HEALTH
#define HAVE_ENUM_WER_ONBOARD_HEALTH
typedef enum WER_ONBOARD_HEALTH
{
   LOGGING_THREAD_STARTED_AND_WORKING=1, /*  | */
   I2C_PORT_THREAD_STARTED_AND_WORKING=2, /*  | */
   I2C_SWITCH_THREAD_STARTED_AND_WORKING=4, /*  | */
   COMMANDER_THREAD_STARTED_AND_WORKING=8, /*  | */
   WER_ONBOARD_HEALTH_ENUM_END=9, /*  | */
} WER_ONBOARD_HEALTH;
#endif

/** @brief Type of order to send to the motor */
#ifndef HAVE_ENUM_WER_MOTOR_CMD_TYPE
#define HAVE_ENUM_WER_MOTOR_CMD_TYPE
typedef enum WER_MOTOR_CMD_TYPE
{
   WER_MOTOR_TURN_ANG_SPD=0, /*  | */
   WER_MOTOR_TURN_TIME_SPD=1, /*  | */
   WER_MOTOR_SET_SPEED=2, /*  | */
   WER_MOTOR_CMD_TYPE_ENUM_END=3, /*  | */
} WER_MOTOR_CMD_TYPE;
#endif

/** @brief ID of the differents motors in the system */
#ifndef HAVE_ENUM_WER_PART_ID
#define HAVE_ENUM_WER_PART_ID
typedef enum WER_PART_ID
{
   WER_CYL_1=0, /*  | */
   WER_CYL_2=1, /*  | */
   WER_CYL_3=2, /*  | */
   WER_CYL_4=3, /*  | */
   WER_TM=4, /*  | */
   WER_CAN_1=5, /*  | */
   WER_CAN_2=6, /*  | */
   WER_CAN_3=7, /*  | */
   WER_CAN_4=8, /*  | */
   WER_PART_ID_ENUM_END=9, /*  | */
} WER_PART_ID;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_wer_motor_cmd.h"
#include "./mavlink_msg_wer_onboard_status.h"
#include "./mavlink_msg_wer_hb.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 4

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_WER_MOTOR_CMD, MAVLINK_MESSAGE_INFO_WER_ONBOARD_STATUS, MAVLINK_MESSAGE_INFO_WER_HB}
# define MAVLINK_MESSAGE_NAMES {{ "WER_HB", 12003 }, { "WER_MOTOR_CMD", 12001 }, { "WER_ONBOARD_STATUS", 12002 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_WEROBOTICS_H
