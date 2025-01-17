/****************************************************************************
 *
 *   Copyright (C) 2013-2015 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file /home/ares/work2/ardupilot/modules/PX4Firmware/msg/vehicle_command.msg */


#pragma once

#include <stdint.h>
#include <uORB/uORB.h>


#ifndef __cplusplus
#define VEHICLE_CMD_CUSTOM_0 0
#define VEHICLE_CMD_CUSTOM_1 1
#define VEHICLE_CMD_CUSTOM_2 2
#define VEHICLE_CMD_NAV_WAYPOINT 16
#define VEHICLE_CMD_NAV_LOITER_UNLIM 17
#define VEHICLE_CMD_NAV_LOITER_TURNS 18
#define VEHICLE_CMD_NAV_LOITER_TIME 19
#define VEHICLE_CMD_NAV_RETURN_TO_LAUNCH 20
#define VEHICLE_CMD_NAV_LAND 21
#define VEHICLE_CMD_NAV_TAKEOFF 22
#define VEHICLE_CMD_NAV_ROI 80
#define VEHICLE_CMD_NAV_PATHPLANNING 81
#define VEHICLE_CMD_NAV_GUIDED_LIMITS 90
#define VEHICLE_CMD_NAV_GUIDED_MASTER 91
#define VEHICLE_CMD_NAV_GUIDED_ENABLE 92
#define VEHICLE_CMD_NAV_LAST 95
#define VEHICLE_CMD_CONDITION_DELAY 112
#define VEHICLE_CMD_CONDITION_CHANGE_ALT 113
#define VEHICLE_CMD_CONDITION_DISTANCE 114
#define VEHICLE_CMD_CONDITION_YAW 115
#define VEHICLE_CMD_CONDITION_LAST 159
#define VEHICLE_CMD_DO_SET_MODE 176
#define VEHICLE_CMD_DO_JUMP 177
#define VEHICLE_CMD_DO_CHANGE_SPEED 178
#define VEHICLE_CMD_DO_SET_HOME 179
#define VEHICLE_CMD_DO_SET_PARAMETER 180
#define VEHICLE_CMD_DO_SET_RELAY 181
#define VEHICLE_CMD_DO_REPEAT_RELAY 182
#define VEHICLE_CMD_DO_SET_SERVO 183
#define VEHICLE_CMD_DO_REPEAT_SERVO 184
#define VEHICLE_CMD_DO_FLIGHTTERMINATION 185
#define VEHICLE_CMD_DO_CONTROL_VIDEO 200
#define VEHICLE_CMD_DO_MOUNT_CONFIGURE 204
#define VEHICLE_CMD_DO_MOUNT_CONTROL 205
#define VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST 206
#define VEHICLE_CMD_DO_FENCE_ENABLE 207
#define VEHICLE_CMD_DO_PARACHUTE 208
#define VEHICLE_CMD_DO_INVERTED_FLIGHT 210
#define VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT 220
#define VEHICLE_CMD_DO_GUIDED_MASTER 221
#define VEHICLE_CMD_DO_GUIDED_LIMITS 222
#define VEHICLE_CMD_DO_LAST 240
#define VEHICLE_CMD_PREFLIGHT_CALIBRATION 241
#define VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS 242
#define VEHICLE_CMD_PREFLIGHT_STORAGE 245
#define VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN 246
#define VEHICLE_CMD_OVERRIDE_GOTO 252
#define VEHICLE_CMD_MISSION_START 300
#define VEHICLE_CMD_COMPONENT_ARM_DISARM 400
#define VEHICLE_CMD_START_RX_PAIR 500
#define VEHICLE_CMD_DO_TRIGGER_CONTROL 2003
#define VEHICLE_CMD_DO_VTOL_TRANSITION 3000
#define VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY 30001
#define VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY 30002
#define VEHICLE_CMD_PREFLIGHT_UAVCAN 243
#define VEHICLE_CMD_RESULT_ACCEPTED 0
#define VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED 1
#define VEHICLE_CMD_RESULT_DENIED 2
#define VEHICLE_CMD_RESULT_UNSUPPORTED 3
#define VEHICLE_CMD_RESULT_FAILED 4
#define VEHICLE_CMD_RESULT_ENUM_END 5
#define VEHICLE_MOUNT_MODE_RETRACT 0
#define VEHICLE_MOUNT_MODE_NEUTRAL 1
#define VEHICLE_MOUNT_MODE_MAVLINK_TARGETING 2
#define VEHICLE_MOUNT_MODE_RC_TARGETING 3
#define VEHICLE_MOUNT_MODE_GPS_POINT 4
#define VEHICLE_MOUNT_MODE_ENUM_END 5

#endif

/**
 * @addtogroup topics
 * @{
 */


#ifdef __cplusplus
struct __EXPORT vehicle_command_s {
#else
struct vehicle_command_s {
#endif
	float param1;
	float param2;
	float param3;
	float param4;
	double param5;
	double param6;
	float param7;
	uint32_t command;
	uint32_t target_system;
	uint32_t target_component;
	uint32_t source_system;
	uint32_t source_component;
	uint8_t confirmation;
#ifdef __cplusplus
	static const uint32_t VEHICLE_CMD_CUSTOM_0 = 0;
	static const uint32_t VEHICLE_CMD_CUSTOM_1 = 1;
	static const uint32_t VEHICLE_CMD_CUSTOM_2 = 2;
	static const uint32_t VEHICLE_CMD_NAV_WAYPOINT = 16;
	static const uint32_t VEHICLE_CMD_NAV_LOITER_UNLIM = 17;
	static const uint32_t VEHICLE_CMD_NAV_LOITER_TURNS = 18;
	static const uint32_t VEHICLE_CMD_NAV_LOITER_TIME = 19;
	static const uint32_t VEHICLE_CMD_NAV_RETURN_TO_LAUNCH = 20;
	static const uint32_t VEHICLE_CMD_NAV_LAND = 21;
	static const uint32_t VEHICLE_CMD_NAV_TAKEOFF = 22;
	static const uint32_t VEHICLE_CMD_NAV_ROI = 80;
	static const uint32_t VEHICLE_CMD_NAV_PATHPLANNING = 81;
	static const uint32_t VEHICLE_CMD_NAV_GUIDED_LIMITS = 90;
	static const uint32_t VEHICLE_CMD_NAV_GUIDED_MASTER = 91;
	static const uint32_t VEHICLE_CMD_NAV_GUIDED_ENABLE = 92;
	static const uint32_t VEHICLE_CMD_NAV_LAST = 95;
	static const uint32_t VEHICLE_CMD_CONDITION_DELAY = 112;
	static const uint32_t VEHICLE_CMD_CONDITION_CHANGE_ALT = 113;
	static const uint32_t VEHICLE_CMD_CONDITION_DISTANCE = 114;
	static const uint32_t VEHICLE_CMD_CONDITION_YAW = 115;
	static const uint32_t VEHICLE_CMD_CONDITION_LAST = 159;
	static const uint32_t VEHICLE_CMD_DO_SET_MODE = 176;
	static const uint32_t VEHICLE_CMD_DO_JUMP = 177;
	static const uint32_t VEHICLE_CMD_DO_CHANGE_SPEED = 178;
	static const uint32_t VEHICLE_CMD_DO_SET_HOME = 179;
	static const uint32_t VEHICLE_CMD_DO_SET_PARAMETER = 180;
	static const uint32_t VEHICLE_CMD_DO_SET_RELAY = 181;
	static const uint32_t VEHICLE_CMD_DO_REPEAT_RELAY = 182;
	static const uint32_t VEHICLE_CMD_DO_SET_SERVO = 183;
	static const uint32_t VEHICLE_CMD_DO_REPEAT_SERVO = 184;
	static const uint32_t VEHICLE_CMD_DO_FLIGHTTERMINATION = 185;
	static const uint32_t VEHICLE_CMD_DO_CONTROL_VIDEO = 200;
	static const uint32_t VEHICLE_CMD_DO_MOUNT_CONFIGURE = 204;
	static const uint32_t VEHICLE_CMD_DO_MOUNT_CONTROL = 205;
	static const uint32_t VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST = 206;
	static const uint32_t VEHICLE_CMD_DO_FENCE_ENABLE = 207;
	static const uint32_t VEHICLE_CMD_DO_PARACHUTE = 208;
	static const uint32_t VEHICLE_CMD_DO_INVERTED_FLIGHT = 210;
	static const uint32_t VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT = 220;
	static const uint32_t VEHICLE_CMD_DO_GUIDED_MASTER = 221;
	static const uint32_t VEHICLE_CMD_DO_GUIDED_LIMITS = 222;
	static const uint32_t VEHICLE_CMD_DO_LAST = 240;
	static const uint32_t VEHICLE_CMD_PREFLIGHT_CALIBRATION = 241;
	static const uint32_t VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS = 242;
	static const uint32_t VEHICLE_CMD_PREFLIGHT_STORAGE = 245;
	static const uint32_t VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN = 246;
	static const uint32_t VEHICLE_CMD_OVERRIDE_GOTO = 252;
	static const uint32_t VEHICLE_CMD_MISSION_START = 300;
	static const uint32_t VEHICLE_CMD_COMPONENT_ARM_DISARM = 400;
	static const uint32_t VEHICLE_CMD_START_RX_PAIR = 500;
	static const uint32_t VEHICLE_CMD_DO_TRIGGER_CONTROL = 2003;
	static const uint32_t VEHICLE_CMD_DO_VTOL_TRANSITION = 3000;
	static const uint32_t VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY = 30001;
	static const uint32_t VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY = 30002;
	static const uint32_t VEHICLE_CMD_PREFLIGHT_UAVCAN = 243;
	static const uint32_t VEHICLE_CMD_RESULT_ACCEPTED = 0;
	static const uint32_t VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED = 1;
	static const uint32_t VEHICLE_CMD_RESULT_DENIED = 2;
	static const uint32_t VEHICLE_CMD_RESULT_UNSUPPORTED = 3;
	static const uint32_t VEHICLE_CMD_RESULT_FAILED = 4;
	static const uint32_t VEHICLE_CMD_RESULT_ENUM_END = 5;
	static const uint32_t VEHICLE_MOUNT_MODE_RETRACT = 0;
	static const uint32_t VEHICLE_MOUNT_MODE_NEUTRAL = 1;
	static const uint32_t VEHICLE_MOUNT_MODE_MAVLINK_TARGETING = 2;
	static const uint32_t VEHICLE_MOUNT_MODE_RC_TARGETING = 3;
	static const uint32_t VEHICLE_MOUNT_MODE_GPS_POINT = 4;
	static const uint32_t VEHICLE_MOUNT_MODE_ENUM_END = 5;

#endif
};

/**
 * @}
 */

/* register this as object request broker structure */
ORB_DECLARE(vehicle_command);
