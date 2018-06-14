#pragma once
// MESSAGE WER_ONBOARD_STATUS PACKING

#define MAVLINK_MSG_ID_WER_ONBOARD_STATUS 12002

MAVPACKED(
typedef struct __mavlink_wer_onboard_status_t {
 uint16_t temperature[6]; /*< Temperature of the components*/
 uint16_t humidity[6]; /*< Humidity of the components*/
 uint8_t componentId; /*< Part ID the system the readings are related to*/
 uint8_t nbSensors; /*< Number of sensors link to this components*/
}) mavlink_wer_onboard_status_t;

#define MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN 26
#define MAVLINK_MSG_ID_WER_ONBOARD_STATUS_MIN_LEN 26
#define MAVLINK_MSG_ID_12002_LEN 26
#define MAVLINK_MSG_ID_12002_MIN_LEN 26

#define MAVLINK_MSG_ID_WER_ONBOARD_STATUS_CRC 157
#define MAVLINK_MSG_ID_12002_CRC 157

#define MAVLINK_MSG_WER_ONBOARD_STATUS_FIELD_TEMPERATURE_LEN 6
#define MAVLINK_MSG_WER_ONBOARD_STATUS_FIELD_HUMIDITY_LEN 6

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WER_ONBOARD_STATUS { \
    12002, \
    "WER_ONBOARD_STATUS", \
    4, \
    {  { "componentId", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_wer_onboard_status_t, componentId) }, \
         { "nbSensors", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_wer_onboard_status_t, nbSensors) }, \
         { "temperature", NULL, MAVLINK_TYPE_UINT16_T, 6, 0, offsetof(mavlink_wer_onboard_status_t, temperature) }, \
         { "humidity", NULL, MAVLINK_TYPE_UINT16_T, 6, 12, offsetof(mavlink_wer_onboard_status_t, humidity) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WER_ONBOARD_STATUS { \
    "WER_ONBOARD_STATUS", \
    4, \
    {  { "componentId", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_wer_onboard_status_t, componentId) }, \
         { "nbSensors", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_wer_onboard_status_t, nbSensors) }, \
         { "temperature", NULL, MAVLINK_TYPE_UINT16_T, 6, 0, offsetof(mavlink_wer_onboard_status_t, temperature) }, \
         { "humidity", NULL, MAVLINK_TYPE_UINT16_T, 6, 12, offsetof(mavlink_wer_onboard_status_t, humidity) }, \
         } \
}
#endif

/**
 * @brief Pack a wer_onboard_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param componentId Part ID the system the readings are related to
 * @param nbSensors Number of sensors link to this components
 * @param temperature Temperature of the components
 * @param humidity Humidity of the components
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wer_onboard_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t componentId, uint8_t nbSensors, const uint16_t *temperature, const uint16_t *humidity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN];
    _mav_put_uint8_t(buf, 24, componentId);
    _mav_put_uint8_t(buf, 25, nbSensors);
    _mav_put_uint16_t_array(buf, 0, temperature, 6);
    _mav_put_uint16_t_array(buf, 12, humidity, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN);
#else
    mavlink_wer_onboard_status_t packet;
    packet.componentId = componentId;
    packet.nbSensors = nbSensors;
    mav_array_memcpy(packet.temperature, temperature, sizeof(uint16_t)*6);
    mav_array_memcpy(packet.humidity, humidity, sizeof(uint16_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WER_ONBOARD_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_MIN_LEN, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_CRC);
}

/**
 * @brief Pack a wer_onboard_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param componentId Part ID the system the readings are related to
 * @param nbSensors Number of sensors link to this components
 * @param temperature Temperature of the components
 * @param humidity Humidity of the components
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wer_onboard_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t componentId,uint8_t nbSensors,const uint16_t *temperature,const uint16_t *humidity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN];
    _mav_put_uint8_t(buf, 24, componentId);
    _mav_put_uint8_t(buf, 25, nbSensors);
    _mav_put_uint16_t_array(buf, 0, temperature, 6);
    _mav_put_uint16_t_array(buf, 12, humidity, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN);
#else
    mavlink_wer_onboard_status_t packet;
    packet.componentId = componentId;
    packet.nbSensors = nbSensors;
    mav_array_memcpy(packet.temperature, temperature, sizeof(uint16_t)*6);
    mav_array_memcpy(packet.humidity, humidity, sizeof(uint16_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WER_ONBOARD_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_MIN_LEN, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_CRC);
}

/**
 * @brief Encode a wer_onboard_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param wer_onboard_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wer_onboard_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_wer_onboard_status_t* wer_onboard_status)
{
    return mavlink_msg_wer_onboard_status_pack(system_id, component_id, msg, wer_onboard_status->componentId, wer_onboard_status->nbSensors, wer_onboard_status->temperature, wer_onboard_status->humidity);
}

/**
 * @brief Encode a wer_onboard_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param wer_onboard_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wer_onboard_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_wer_onboard_status_t* wer_onboard_status)
{
    return mavlink_msg_wer_onboard_status_pack_chan(system_id, component_id, chan, msg, wer_onboard_status->componentId, wer_onboard_status->nbSensors, wer_onboard_status->temperature, wer_onboard_status->humidity);
}

/**
 * @brief Send a wer_onboard_status message
 * @param chan MAVLink channel to send the message
 *
 * @param componentId Part ID the system the readings are related to
 * @param nbSensors Number of sensors link to this components
 * @param temperature Temperature of the components
 * @param humidity Humidity of the components
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_wer_onboard_status_send(mavlink_channel_t chan, uint8_t componentId, uint8_t nbSensors, const uint16_t *temperature, const uint16_t *humidity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN];
    _mav_put_uint8_t(buf, 24, componentId);
    _mav_put_uint8_t(buf, 25, nbSensors);
    _mav_put_uint16_t_array(buf, 0, temperature, 6);
    _mav_put_uint16_t_array(buf, 12, humidity, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WER_ONBOARD_STATUS, buf, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_MIN_LEN, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_CRC);
#else
    mavlink_wer_onboard_status_t packet;
    packet.componentId = componentId;
    packet.nbSensors = nbSensors;
    mav_array_memcpy(packet.temperature, temperature, sizeof(uint16_t)*6);
    mav_array_memcpy(packet.humidity, humidity, sizeof(uint16_t)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WER_ONBOARD_STATUS, (const char *)&packet, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_MIN_LEN, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_CRC);
#endif
}

/**
 * @brief Send a wer_onboard_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_wer_onboard_status_send_struct(mavlink_channel_t chan, const mavlink_wer_onboard_status_t* wer_onboard_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_wer_onboard_status_send(chan, wer_onboard_status->componentId, wer_onboard_status->nbSensors, wer_onboard_status->temperature, wer_onboard_status->humidity);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WER_ONBOARD_STATUS, (const char *)wer_onboard_status, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_MIN_LEN, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_wer_onboard_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t componentId, uint8_t nbSensors, const uint16_t *temperature, const uint16_t *humidity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 24, componentId);
    _mav_put_uint8_t(buf, 25, nbSensors);
    _mav_put_uint16_t_array(buf, 0, temperature, 6);
    _mav_put_uint16_t_array(buf, 12, humidity, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WER_ONBOARD_STATUS, buf, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_MIN_LEN, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_CRC);
#else
    mavlink_wer_onboard_status_t *packet = (mavlink_wer_onboard_status_t *)msgbuf;
    packet->componentId = componentId;
    packet->nbSensors = nbSensors;
    mav_array_memcpy(packet->temperature, temperature, sizeof(uint16_t)*6);
    mav_array_memcpy(packet->humidity, humidity, sizeof(uint16_t)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WER_ONBOARD_STATUS, (const char *)packet, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_MIN_LEN, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE WER_ONBOARD_STATUS UNPACKING


/**
 * @brief Get field componentId from wer_onboard_status message
 *
 * @return Part ID the system the readings are related to
 */
static inline uint8_t mavlink_msg_wer_onboard_status_get_componentId(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Get field nbSensors from wer_onboard_status message
 *
 * @return Number of sensors link to this components
 */
static inline uint8_t mavlink_msg_wer_onboard_status_get_nbSensors(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  25);
}

/**
 * @brief Get field temperature from wer_onboard_status message
 *
 * @return Temperature of the components
 */
static inline uint16_t mavlink_msg_wer_onboard_status_get_temperature(const mavlink_message_t* msg, uint16_t *temperature)
{
    return _MAV_RETURN_uint16_t_array(msg, temperature, 6,  0);
}

/**
 * @brief Get field humidity from wer_onboard_status message
 *
 * @return Humidity of the components
 */
static inline uint16_t mavlink_msg_wer_onboard_status_get_humidity(const mavlink_message_t* msg, uint16_t *humidity)
{
    return _MAV_RETURN_uint16_t_array(msg, humidity, 6,  12);
}

/**
 * @brief Decode a wer_onboard_status message into a struct
 *
 * @param msg The message to decode
 * @param wer_onboard_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_wer_onboard_status_decode(const mavlink_message_t* msg, mavlink_wer_onboard_status_t* wer_onboard_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_wer_onboard_status_get_temperature(msg, wer_onboard_status->temperature);
    mavlink_msg_wer_onboard_status_get_humidity(msg, wer_onboard_status->humidity);
    wer_onboard_status->componentId = mavlink_msg_wer_onboard_status_get_componentId(msg);
    wer_onboard_status->nbSensors = mavlink_msg_wer_onboard_status_get_nbSensors(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN? msg->len : MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN;
        memset(wer_onboard_status, 0, MAVLINK_MSG_ID_WER_ONBOARD_STATUS_LEN);
    memcpy(wer_onboard_status, _MAV_PAYLOAD(msg), len);
#endif
}
