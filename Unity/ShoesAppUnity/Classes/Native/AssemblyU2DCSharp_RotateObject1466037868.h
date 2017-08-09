#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Queue
struct Queue_t1288490777;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RotateObject
struct  RotateObject_t1466037868  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 RotateObject::positionV
	Vector3_t2243707580  ___positionV_2;
	// System.Int32 RotateObject::stopSpeed
	int32_t ___stopSpeed_3;
	// System.Single RotateObject::speed
	float ___speed_4;
	// System.Single RotateObject::angleX
	float ___angleX_5;
	// System.Single RotateObject::angleY
	float ___angleY_6;
	// System.Single RotateObject::SpeedX
	float ___SpeedX_7;
	// System.Int32 RotateObject::direction
	int32_t ___direction_8;
	// System.Single RotateObject::direction2
	float ___direction2_9;
	// System.Single RotateObject::direction3
	float ___direction3_10;
	// System.Single RotateObject::SpeedY
	float ___SpeedY_11;
	// UnityEngine.Vector2 RotateObject::SpeedQ
	Vector2_t2243707579  ___SpeedQ_12;
	// UnityEngine.GameObject RotateObject::RotateAroundObject
	GameObject_t1756533147 * ___RotateAroundObject_13;
	// System.Boolean RotateObject::touchMissed
	bool ___touchMissed_14;
	// System.Boolean RotateObject::flagRotate
	bool ___flagRotate_15;
	// System.Collections.Queue RotateObject::q
	Queue_t1288490777 * ___q_16;
	// System.Boolean RotateObject::flagTouch
	bool ___flagTouch_17;
	// UnityEngine.Vector2 RotateObject::massiv
	Vector2_t2243707579  ___massiv_18;
	// System.Single RotateObject::currentAngle
	float ___currentAngle_19;
	// UnityEngine.Vector3 RotateObject::vector_direction
	Vector3_t2243707580  ___vector_direction_20;
	// UnityEngine.Quaternion RotateObject::start_rotation
	Quaternion_t4030073918  ___start_rotation_21;
	// System.Boolean RotateObject::flagSign
	bool ___flagSign_22;
	// System.Single RotateObject::rotationZ
	float ___rotationZ_23;
	// System.Boolean RotateObject::flagTrigger
	bool ___flagTrigger_24;
	// UnityEngine.Quaternion RotateObject::StartRotation
	Quaternion_t4030073918  ___StartRotation_25;
	// System.Single RotateObject::AngleBetweenQuaternions
	float ___AngleBetweenQuaternions_26;
	// System.Single RotateObject::step
	float ___step_27;
	// UnityEngine.Vector3 RotateObject::position
	Vector3_t2243707580  ___position_28;

public:
	inline static int32_t get_offset_of_positionV_2() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___positionV_2)); }
	inline Vector3_t2243707580  get_positionV_2() const { return ___positionV_2; }
	inline Vector3_t2243707580 * get_address_of_positionV_2() { return &___positionV_2; }
	inline void set_positionV_2(Vector3_t2243707580  value)
	{
		___positionV_2 = value;
	}

	inline static int32_t get_offset_of_stopSpeed_3() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___stopSpeed_3)); }
	inline int32_t get_stopSpeed_3() const { return ___stopSpeed_3; }
	inline int32_t* get_address_of_stopSpeed_3() { return &___stopSpeed_3; }
	inline void set_stopSpeed_3(int32_t value)
	{
		___stopSpeed_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_angleX_5() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___angleX_5)); }
	inline float get_angleX_5() const { return ___angleX_5; }
	inline float* get_address_of_angleX_5() { return &___angleX_5; }
	inline void set_angleX_5(float value)
	{
		___angleX_5 = value;
	}

	inline static int32_t get_offset_of_angleY_6() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___angleY_6)); }
	inline float get_angleY_6() const { return ___angleY_6; }
	inline float* get_address_of_angleY_6() { return &___angleY_6; }
	inline void set_angleY_6(float value)
	{
		___angleY_6 = value;
	}

	inline static int32_t get_offset_of_SpeedX_7() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___SpeedX_7)); }
	inline float get_SpeedX_7() const { return ___SpeedX_7; }
	inline float* get_address_of_SpeedX_7() { return &___SpeedX_7; }
	inline void set_SpeedX_7(float value)
	{
		___SpeedX_7 = value;
	}

	inline static int32_t get_offset_of_direction_8() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___direction_8)); }
	inline int32_t get_direction_8() const { return ___direction_8; }
	inline int32_t* get_address_of_direction_8() { return &___direction_8; }
	inline void set_direction_8(int32_t value)
	{
		___direction_8 = value;
	}

	inline static int32_t get_offset_of_direction2_9() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___direction2_9)); }
	inline float get_direction2_9() const { return ___direction2_9; }
	inline float* get_address_of_direction2_9() { return &___direction2_9; }
	inline void set_direction2_9(float value)
	{
		___direction2_9 = value;
	}

	inline static int32_t get_offset_of_direction3_10() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___direction3_10)); }
	inline float get_direction3_10() const { return ___direction3_10; }
	inline float* get_address_of_direction3_10() { return &___direction3_10; }
	inline void set_direction3_10(float value)
	{
		___direction3_10 = value;
	}

	inline static int32_t get_offset_of_SpeedY_11() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___SpeedY_11)); }
	inline float get_SpeedY_11() const { return ___SpeedY_11; }
	inline float* get_address_of_SpeedY_11() { return &___SpeedY_11; }
	inline void set_SpeedY_11(float value)
	{
		___SpeedY_11 = value;
	}

	inline static int32_t get_offset_of_SpeedQ_12() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___SpeedQ_12)); }
	inline Vector2_t2243707579  get_SpeedQ_12() const { return ___SpeedQ_12; }
	inline Vector2_t2243707579 * get_address_of_SpeedQ_12() { return &___SpeedQ_12; }
	inline void set_SpeedQ_12(Vector2_t2243707579  value)
	{
		___SpeedQ_12 = value;
	}

	inline static int32_t get_offset_of_RotateAroundObject_13() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___RotateAroundObject_13)); }
	inline GameObject_t1756533147 * get_RotateAroundObject_13() const { return ___RotateAroundObject_13; }
	inline GameObject_t1756533147 ** get_address_of_RotateAroundObject_13() { return &___RotateAroundObject_13; }
	inline void set_RotateAroundObject_13(GameObject_t1756533147 * value)
	{
		___RotateAroundObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___RotateAroundObject_13, value);
	}

	inline static int32_t get_offset_of_touchMissed_14() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___touchMissed_14)); }
	inline bool get_touchMissed_14() const { return ___touchMissed_14; }
	inline bool* get_address_of_touchMissed_14() { return &___touchMissed_14; }
	inline void set_touchMissed_14(bool value)
	{
		___touchMissed_14 = value;
	}

	inline static int32_t get_offset_of_flagRotate_15() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___flagRotate_15)); }
	inline bool get_flagRotate_15() const { return ___flagRotate_15; }
	inline bool* get_address_of_flagRotate_15() { return &___flagRotate_15; }
	inline void set_flagRotate_15(bool value)
	{
		___flagRotate_15 = value;
	}

	inline static int32_t get_offset_of_q_16() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___q_16)); }
	inline Queue_t1288490777 * get_q_16() const { return ___q_16; }
	inline Queue_t1288490777 ** get_address_of_q_16() { return &___q_16; }
	inline void set_q_16(Queue_t1288490777 * value)
	{
		___q_16 = value;
		Il2CppCodeGenWriteBarrier(&___q_16, value);
	}

	inline static int32_t get_offset_of_flagTouch_17() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___flagTouch_17)); }
	inline bool get_flagTouch_17() const { return ___flagTouch_17; }
	inline bool* get_address_of_flagTouch_17() { return &___flagTouch_17; }
	inline void set_flagTouch_17(bool value)
	{
		___flagTouch_17 = value;
	}

	inline static int32_t get_offset_of_massiv_18() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___massiv_18)); }
	inline Vector2_t2243707579  get_massiv_18() const { return ___massiv_18; }
	inline Vector2_t2243707579 * get_address_of_massiv_18() { return &___massiv_18; }
	inline void set_massiv_18(Vector2_t2243707579  value)
	{
		___massiv_18 = value;
	}

	inline static int32_t get_offset_of_currentAngle_19() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___currentAngle_19)); }
	inline float get_currentAngle_19() const { return ___currentAngle_19; }
	inline float* get_address_of_currentAngle_19() { return &___currentAngle_19; }
	inline void set_currentAngle_19(float value)
	{
		___currentAngle_19 = value;
	}

	inline static int32_t get_offset_of_vector_direction_20() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___vector_direction_20)); }
	inline Vector3_t2243707580  get_vector_direction_20() const { return ___vector_direction_20; }
	inline Vector3_t2243707580 * get_address_of_vector_direction_20() { return &___vector_direction_20; }
	inline void set_vector_direction_20(Vector3_t2243707580  value)
	{
		___vector_direction_20 = value;
	}

	inline static int32_t get_offset_of_start_rotation_21() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___start_rotation_21)); }
	inline Quaternion_t4030073918  get_start_rotation_21() const { return ___start_rotation_21; }
	inline Quaternion_t4030073918 * get_address_of_start_rotation_21() { return &___start_rotation_21; }
	inline void set_start_rotation_21(Quaternion_t4030073918  value)
	{
		___start_rotation_21 = value;
	}

	inline static int32_t get_offset_of_flagSign_22() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___flagSign_22)); }
	inline bool get_flagSign_22() const { return ___flagSign_22; }
	inline bool* get_address_of_flagSign_22() { return &___flagSign_22; }
	inline void set_flagSign_22(bool value)
	{
		___flagSign_22 = value;
	}

	inline static int32_t get_offset_of_rotationZ_23() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___rotationZ_23)); }
	inline float get_rotationZ_23() const { return ___rotationZ_23; }
	inline float* get_address_of_rotationZ_23() { return &___rotationZ_23; }
	inline void set_rotationZ_23(float value)
	{
		___rotationZ_23 = value;
	}

	inline static int32_t get_offset_of_flagTrigger_24() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___flagTrigger_24)); }
	inline bool get_flagTrigger_24() const { return ___flagTrigger_24; }
	inline bool* get_address_of_flagTrigger_24() { return &___flagTrigger_24; }
	inline void set_flagTrigger_24(bool value)
	{
		___flagTrigger_24 = value;
	}

	inline static int32_t get_offset_of_StartRotation_25() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___StartRotation_25)); }
	inline Quaternion_t4030073918  get_StartRotation_25() const { return ___StartRotation_25; }
	inline Quaternion_t4030073918 * get_address_of_StartRotation_25() { return &___StartRotation_25; }
	inline void set_StartRotation_25(Quaternion_t4030073918  value)
	{
		___StartRotation_25 = value;
	}

	inline static int32_t get_offset_of_AngleBetweenQuaternions_26() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___AngleBetweenQuaternions_26)); }
	inline float get_AngleBetweenQuaternions_26() const { return ___AngleBetweenQuaternions_26; }
	inline float* get_address_of_AngleBetweenQuaternions_26() { return &___AngleBetweenQuaternions_26; }
	inline void set_AngleBetweenQuaternions_26(float value)
	{
		___AngleBetweenQuaternions_26 = value;
	}

	inline static int32_t get_offset_of_step_27() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___step_27)); }
	inline float get_step_27() const { return ___step_27; }
	inline float* get_address_of_step_27() { return &___step_27; }
	inline void set_step_27(float value)
	{
		___step_27 = value;
	}

	inline static int32_t get_offset_of_position_28() { return static_cast<int32_t>(offsetof(RotateObject_t1466037868, ___position_28)); }
	inline Vector3_t2243707580  get_position_28() const { return ___position_28; }
	inline Vector3_t2243707580 * get_address_of_position_28() { return &___position_28; }
	inline void set_position_28(Vector3_t2243707580  value)
	{
		___position_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
