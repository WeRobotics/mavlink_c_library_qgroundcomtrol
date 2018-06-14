/** @file
 *    @brief MAVLink comm protocol testsuite generated from werobotics.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef WEROBOTICS_TESTSUITE_H
#define WEROBOTICS_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_werobotics(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_werobotics(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_wer_motor_cmd(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_WER_MOTOR_CMD >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_wer_motor_cmd_t packet_in = {
        17235,17339,17443,151,218
    };
    mavlink_wer_motor_cmd_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.speed = packet_in.speed;
        packet1.angle = packet_in.angle;
        packet1.time = packet_in.time;
        packet1.cmdType = packet_in.cmdType;
        packet1.cylinder = packet_in.cylinder;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_WER_MOTOR_CMD_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_WER_MOTOR_CMD_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wer_motor_cmd_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_wer_motor_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wer_motor_cmd_pack(system_id, component_id, &msg , packet1.cmdType , packet1.cylinder , packet1.speed , packet1.angle , packet1.time );
    mavlink_msg_wer_motor_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wer_motor_cmd_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cmdType , packet1.cylinder , packet1.speed , packet1.angle , packet1.time );
    mavlink_msg_wer_motor_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_wer_motor_cmd_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wer_motor_cmd_send(MAVLINK_COMM_1 , packet1.cmdType , packet1.cylinder , packet1.speed , packet1.angle , packet1.time );
    mavlink_msg_wer_motor_cmd_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_wer_onboard_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_WER_ONBOARD_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_wer_onboard_status_t packet_in = {
        { 17235, 17236, 17237, 17238, 17239, 17240 },{ 17859, 17860, 17861, 17862, 17863, 17864 },77,144
    };
    mavlink_wer_onboard_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.componentId = packet_in.componentId;
        packet1.nbSensors = packet_in.nbSensors;
        
        mav_array_memcpy(packet1.temperature, packet_in.temperature, sizeof(uint16_t)*6);
        mav_array_memcpy(packet1.humidity, packet_in.humidity, sizeof(uint16_t)*6);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_WER_ONBOARD_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_WER_ONBOARD_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wer_onboard_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_wer_onboard_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wer_onboard_status_pack(system_id, component_id, &msg , packet1.componentId , packet1.nbSensors , packet1.temperature , packet1.humidity );
    mavlink_msg_wer_onboard_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wer_onboard_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.componentId , packet1.nbSensors , packet1.temperature , packet1.humidity );
    mavlink_msg_wer_onboard_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_wer_onboard_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wer_onboard_status_send(MAVLINK_COMM_1 , packet1.componentId , packet1.nbSensors , packet1.temperature , packet1.humidity );
    mavlink_msg_wer_onboard_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_wer_hb(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_WER_HB >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_wer_hb_t packet_in = {
        5
    };
    mavlink_wer_hb_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.onboardHealth = packet_in.onboardHealth;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_WER_HB_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_WER_HB_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wer_hb_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_wer_hb_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wer_hb_pack(system_id, component_id, &msg , packet1.onboardHealth );
    mavlink_msg_wer_hb_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wer_hb_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.onboardHealth );
    mavlink_msg_wer_hb_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_wer_hb_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_wer_hb_send(MAVLINK_COMM_1 , packet1.onboardHealth );
    mavlink_msg_wer_hb_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_werobotics(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_wer_motor_cmd(system_id, component_id, last_msg);
    mavlink_test_wer_onboard_status(system_id, component_id, last_msg);
    mavlink_test_wer_hb(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // WEROBOTICS_TESTSUITE_H
