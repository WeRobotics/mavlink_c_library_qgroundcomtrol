#pragma once
// MESSAGE WER_MOTOR_CMD PACKING

#define MAVLINK_MSG_ID_WER_MOTOR_CMD 12001

MAVPACKED(
typedef struct __mavlink_wer_motor_cmd_t {
 uint16_t speed; /*< Speed to apply in deg per sec time 100*/
 uint16_t angle; /*< Angle to rotate in deg time 100*/
 uint16_t time; /*< Time to rotate in second time 100*/
 uint8_t cmdType; /*< Command type*/
 uint8_t cylinder; /*< Part ID the motor is related to. This sould be the ID from one of the cylinder or the TM*/
}) mavlink_wer_motor_cmd_t;

#define MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN 8
#define MAVLINK_MSG_ID_WER_MOTOR_CMD_MIN_LEN 8
#define MAVLINK_MSG_ID_12001_LEN 8
#define MAVLINK_MSG_ID_12001_MIN_LEN 8

#define MAVLINK_MSG_ID_WER_MOTOR_CMD_CRC 161
#define MAVLINK_MSG_ID_12001_CRC 161



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WER_MOTOR_CMD { \
    12001, \
    "WER_MOTOR_CMD", \
    5, \
    {  { "cmdType", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_wer_motor_cmd_t, cmdType) }, \
         { "cylinder", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_wer_motor_cmd_t, cylinder) }, \
         { "speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_wer_motor_cmd_t, speed) }, \
         { "angle", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_wer_motor_cmd_t, angle) }, \
         { "time", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_wer_motor_cmd_t, time) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WER_MOTOR_CMD { \
    "WER_MOTOR_CMD", \
    5, \
    {  { "cmdType", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_wer_motor_cmd_t, cmdType) }, \
         { "cylinder", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_wer_motor_cmd_t, cylinder) }, \
         { "speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_wer_motor_cmd_t, speed) }, \
         { "angle", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_wer_motor_cmd_t, angle) }, \
         { "time", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_wer_motor_cmd_t, time) }, \
         } \
}
#endif

/**
 * @brief Pack a wer_motor_cmd message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cmdType Command type
 * @param cylinder Part ID the motor is related to. This sould be the ID from one of the cylinder or the TM
 * @param speed Speed to apply in deg per sec time 100
 * @param angle Angle to rotate in deg time 100
 * @param time Time to rotate in second time 100
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wer_motor_cmd_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t cmdType, uint8_t cylinder, uint16_t speed, uint16_t angle, uint16_t time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN];
    _mav_put_uint16_t(buf, 0, speed);
    _mav_put_uint16_t(buf, 2, angle);
    _mav_put_uint16_t(buf, 4, time);
    _mav_put_uint8_t(buf, 6, cmdType);
    _mav_put_uint8_t(buf, 7, cylinder);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN);
#else
    mavlink_wer_motor_cmd_t packet;
    packet.speed = speed;
    packet.angle = angle;
    packet.time = time;
    packet.cmdType = cmdType;
    packet.cylinder = cylinder;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WER_MOTOR_CMD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WER_MOTOR_CMD_MIN_LEN, MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN, MAVLINK_MSG_ID_WER_MOTOR_CMD_CRC);
}

/**
 * @brief Pack a wer_motor_cmd message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmdType Command type
 * @param cylinder Part ID the motor is related to. This sould be the ID from one of the cylinder or the TM
 * @param speed Speed to apply in deg per sec time 100
 * @param angle Angle to rotate in deg time 100
 * @param time Time to rotate in second time 100
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wer_motor_cmd_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t cmdType,uint8_t cylinder,uint16_t speed,uint16_t angle,uint16_t time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN];
    _mav_put_uint16_t(buf, 0, speed);
    _mav_put_uint16_t(buf, 2, angle);
    _mav_put_uint16_t(buf, 4, time);
    _mav_put_uint8_t(buf, 6, cmdType);
    _mav_put_uint8_t(buf, 7, cylinder);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN);
#else
    mavlink_wer_motor_cmd_t packet;
    packet.speed = speed;
    packet.angle = angle;
    packet.time = time;
    packet.cmdType = cmdType;
    packet.cylinder = cylinder;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WER_MOTOR_CMD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WER_MOTOR_CMD_MIN_LEN, MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN, MAVLINK_MSG_ID_WER_MOTOR_CMD_CRC);
}

/**
 * @brief Encode a wer_motor_cmd struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param wer_motor_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wer_motor_cmd_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_wer_motor_cmd_t* wer_motor_cmd)
{
    return mavlink_msg_wer_motor_cmd_pack(system_id, component_id, msg, wer_motor_cmd->cmdType, wer_motor_cmd->cylinder, wer_motor_cmd->speed, wer_motor_cmd->angle, wer_motor_cmd->time);
}

/**
 * @brief Encode a wer_motor_cmd struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param wer_motor_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wer_motor_cmd_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_wer_motor_cmd_t* wer_motor_cmd)
{
    return mavlink_msg_wer_motor_cmd_pack_chan(system_id, component_id, chan, msg, wer_motor_cmd->cmdType, wer_motor_cmd->cylinder, wer_motor_cmd->speed, wer_motor_cmd->angle, wer_motor_cmd->time);
}

/**
 * @brief Send a wer_motor_cmd message
 * @param chan MAVLink channel to send the message
 *
 * @param cmdType Command type
 * @param cylinder Part ID the motor is related to. This sould be the ID from one of the cylinder or the TM
 * @param speed Speed to apply in deg per sec time 100
 * @param angle Angle to rotate in deg time 100
 * @param time Time to rotate in second time 100
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_wer_motor_cmd_send(mavlink_channel_t chan, uint8_t cmdType, uint8_t cylinder, uint16_t speed, uint16_t angle, uint16_t time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN];
    _mav_put_uint16_t(buf, 0, speed);
    _mav_put_uint16_t(buf, 2, angle);
    _mav_put_uint16_t(buf, 4, time);
    _mav_put_uint8_t(buf, 6, cmdType);
    _mav_put_uint8_t(buf, 7, cylinder);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WER_MOTOR_CMD, buf, MAVLINK_MSG_ID_WER_MOTOR_CMD_MIN_LEN, MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN, MAVLINK_MSG_ID_WER_MOTOR_CMD_CRC);
#else
    mavlink_wer_motor_cmd_t packet;
    packet.speed = speed;
    packet.angle = angle;
    packet.time = time;
    packet.cmdType = cmdType;
    packet.cylinder = cylinder;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WER_MOTOR_CMD, (const char *)&packet, MAVLINK_MSG_ID_WER_MOTOR_CMD_MIN_LEN, MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN, MAVLINK_MSG_ID_WER_MOTOR_CMD_CRC);
#endif
}

/**
 * @brief Send a wer_motor_cmd message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_wer_motor_cmd_send_struct(mavlink_channel_t chan, const mavlink_wer_motor_cmd_t* wer_motor_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_wer_motor_cmd_send(chan, wer_motor_cmd->cmdType, wer_motor_cmd->cylinder, wer_motor_cmd->speed, wer_motor_cmd->angle, wer_motor_cmd->time);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WER_MOTOR_CMD, (const char *)wer_motor_cmd, MAVLINK_MSG_ID_WER_MOTOR_CMD_MIN_LEN, MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN, MAVLINK_MSG_ID_WER_MOTOR_CMD_CRC);
#endif
}

#if MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_wer_motor_cmd_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t cmdType, uint8_t cylinder, uint16_t speed, uint16_t angle, uint16_t time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, speed);
    _mav_put_uint16_t(buf, 2, angle);
    _mav_put_uint16_t(buf, 4, time);
    _mav_put_uint8_t(buf, 6, cmdType);
    _mav_put_uint8_t(buf, 7, cylinder);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WER_MOTOR_CMD, buf, MAVLINK_MSG_ID_WER_MOTOR_CMD_MIN_LEN, MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN, MAVLINK_MSG_ID_WER_MOTOR_CMD_CRC);
#else
    mavlink_wer_motor_cmd_t *packet = (mavlink_wer_motor_cmd_t *)msgbuf;
    packet->speed = speed;
    packet->angle = angle;
    packet->time = time;
    packet->cmdType = cmdType;
    packet->cylinder = cylinder;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WER_MOTOR_CMD, (const char *)packet, MAVLINK_MSG_ID_WER_MOTOR_CMD_MIN_LEN, MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN, MAVLINK_MSG_ID_WER_MOTOR_CMD_CRC);
#endif
}
#endif

#endif

// MESSAGE WER_MOTOR_CMD UNPACKING


/**
 * @brief Get field cmdType from wer_motor_cmd message
 *
 * @return Command type
 */
static inline uint8_t mavlink_msg_wer_motor_cmd_get_cmdType(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field cylinder from wer_motor_cmd message
 *
 * @return Part ID the motor is related to. This sould be the ID from one of the cylinder or the TM
 */
static inline uint8_t mavlink_msg_wer_motor_cmd_get_cylinder(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field speed from wer_motor_cmd message
 *
 * @return Speed to apply in deg per sec time 100
 */
static inline uint16_t mavlink_msg_wer_motor_cmd_get_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field angle from wer_motor_cmd message
 *
 * @return Angle to rotate in deg time 100
 */
static inline uint16_t mavlink_msg_wer_motor_cmd_get_angle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field time from wer_motor_cmd message
 *
 * @return Time to rotate in second time 100
 */
static inline uint16_t mavlink_msg_wer_motor_cmd_get_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Decode a wer_motor_cmd message into a struct
 *
 * @param msg The message to decode
 * @param wer_motor_cmd C-struct to decode the message contents into
 */
static inline void mavlink_msg_wer_motor_cmd_decode(const mavlink_message_t* msg, mavlink_wer_motor_cmd_t* wer_motor_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    wer_motor_cmd->speed = mavlink_msg_wer_motor_cmd_get_speed(msg);
    wer_motor_cmd->angle = mavlink_msg_wer_motor_cmd_get_angle(msg);
    wer_motor_cmd->time = mavlink_msg_wer_motor_cmd_get_time(msg);
    wer_motor_cmd->cmdType = mavlink_msg_wer_motor_cmd_get_cmdType(msg);
    wer_motor_cmd->cylinder = mavlink_msg_wer_motor_cmd_get_cylinder(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN? msg->len : MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN;
        memset(wer_motor_cmd, 0, MAVLINK_MSG_ID_WER_MOTOR_CMD_LEN);
    memcpy(wer_motor_cmd, _MAV_PAYLOAD(msg), len);
#endif
}
