#pragma once
// MESSAGE WER_HB PACKING

#define MAVLINK_MSG_ID_WER_HB 12003

MAVPACKED(
typedef struct __mavlink_wer_hb_t {
 uint8_t onboardHealth; /*< Heartbeat status*/
}) mavlink_wer_hb_t;

#define MAVLINK_MSG_ID_WER_HB_LEN 1
#define MAVLINK_MSG_ID_WER_HB_MIN_LEN 1
#define MAVLINK_MSG_ID_12003_LEN 1
#define MAVLINK_MSG_ID_12003_MIN_LEN 1

#define MAVLINK_MSG_ID_WER_HB_CRC 1
#define MAVLINK_MSG_ID_12003_CRC 1



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WER_HB { \
    12003, \
    "WER_HB", \
    1, \
    {  { "onboardHealth", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_wer_hb_t, onboardHealth) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WER_HB { \
    "WER_HB", \
    1, \
    {  { "onboardHealth", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_wer_hb_t, onboardHealth) }, \
         } \
}
#endif

/**
 * @brief Pack a wer_hb message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param onboardHealth Heartbeat status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wer_hb_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t onboardHealth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WER_HB_LEN];
    _mav_put_uint8_t(buf, 0, onboardHealth);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WER_HB_LEN);
#else
    mavlink_wer_hb_t packet;
    packet.onboardHealth = onboardHealth;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WER_HB_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WER_HB;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WER_HB_MIN_LEN, MAVLINK_MSG_ID_WER_HB_LEN, MAVLINK_MSG_ID_WER_HB_CRC);
}

/**
 * @brief Pack a wer_hb message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param onboardHealth Heartbeat status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wer_hb_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t onboardHealth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WER_HB_LEN];
    _mav_put_uint8_t(buf, 0, onboardHealth);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WER_HB_LEN);
#else
    mavlink_wer_hb_t packet;
    packet.onboardHealth = onboardHealth;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WER_HB_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WER_HB;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WER_HB_MIN_LEN, MAVLINK_MSG_ID_WER_HB_LEN, MAVLINK_MSG_ID_WER_HB_CRC);
}

/**
 * @brief Encode a wer_hb struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param wer_hb C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wer_hb_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_wer_hb_t* wer_hb)
{
    return mavlink_msg_wer_hb_pack(system_id, component_id, msg, wer_hb->onboardHealth);
}

/**
 * @brief Encode a wer_hb struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param wer_hb C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wer_hb_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_wer_hb_t* wer_hb)
{
    return mavlink_msg_wer_hb_pack_chan(system_id, component_id, chan, msg, wer_hb->onboardHealth);
}

/**
 * @brief Send a wer_hb message
 * @param chan MAVLink channel to send the message
 *
 * @param onboardHealth Heartbeat status
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_wer_hb_send(mavlink_channel_t chan, uint8_t onboardHealth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WER_HB_LEN];
    _mav_put_uint8_t(buf, 0, onboardHealth);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WER_HB, buf, MAVLINK_MSG_ID_WER_HB_MIN_LEN, MAVLINK_MSG_ID_WER_HB_LEN, MAVLINK_MSG_ID_WER_HB_CRC);
#else
    mavlink_wer_hb_t packet;
    packet.onboardHealth = onboardHealth;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WER_HB, (const char *)&packet, MAVLINK_MSG_ID_WER_HB_MIN_LEN, MAVLINK_MSG_ID_WER_HB_LEN, MAVLINK_MSG_ID_WER_HB_CRC);
#endif
}

/**
 * @brief Send a wer_hb message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_wer_hb_send_struct(mavlink_channel_t chan, const mavlink_wer_hb_t* wer_hb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_wer_hb_send(chan, wer_hb->onboardHealth);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WER_HB, (const char *)wer_hb, MAVLINK_MSG_ID_WER_HB_MIN_LEN, MAVLINK_MSG_ID_WER_HB_LEN, MAVLINK_MSG_ID_WER_HB_CRC);
#endif
}

#if MAVLINK_MSG_ID_WER_HB_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_wer_hb_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t onboardHealth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, onboardHealth);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WER_HB, buf, MAVLINK_MSG_ID_WER_HB_MIN_LEN, MAVLINK_MSG_ID_WER_HB_LEN, MAVLINK_MSG_ID_WER_HB_CRC);
#else
    mavlink_wer_hb_t *packet = (mavlink_wer_hb_t *)msgbuf;
    packet->onboardHealth = onboardHealth;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WER_HB, (const char *)packet, MAVLINK_MSG_ID_WER_HB_MIN_LEN, MAVLINK_MSG_ID_WER_HB_LEN, MAVLINK_MSG_ID_WER_HB_CRC);
#endif
}
#endif

#endif

// MESSAGE WER_HB UNPACKING


/**
 * @brief Get field onboardHealth from wer_hb message
 *
 * @return Heartbeat status
 */
static inline uint8_t mavlink_msg_wer_hb_get_onboardHealth(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a wer_hb message into a struct
 *
 * @param msg The message to decode
 * @param wer_hb C-struct to decode the message contents into
 */
static inline void mavlink_msg_wer_hb_decode(const mavlink_message_t* msg, mavlink_wer_hb_t* wer_hb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    wer_hb->onboardHealth = mavlink_msg_wer_hb_get_onboardHealth(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WER_HB_LEN? msg->len : MAVLINK_MSG_ID_WER_HB_LEN;
        memset(wer_hb, 0, MAVLINK_MSG_ID_WER_HB_LEN);
    memcpy(wer_hb, _MAV_PAYLOAD(msg), len);
#endif
}
