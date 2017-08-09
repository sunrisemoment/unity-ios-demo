#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AutoFocus
struct  AutoFocus_t1688459817  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean AutoFocus::isbackCamera
	bool ___isbackCamera_3;
	// System.Single AutoFocus::cameraFoucusTime
	float ___cameraFoucusTime_4;

public:
	inline static int32_t get_offset_of_isbackCamera_3() { return static_cast<int32_t>(offsetof(AutoFocus_t1688459817, ___isbackCamera_3)); }
	inline bool get_isbackCamera_3() const { return ___isbackCamera_3; }
	inline bool* get_address_of_isbackCamera_3() { return &___isbackCamera_3; }
	inline void set_isbackCamera_3(bool value)
	{
		___isbackCamera_3 = value;
	}

	inline static int32_t get_offset_of_cameraFoucusTime_4() { return static_cast<int32_t>(offsetof(AutoFocus_t1688459817, ___cameraFoucusTime_4)); }
	inline float get_cameraFoucusTime_4() const { return ___cameraFoucusTime_4; }
	inline float* get_address_of_cameraFoucusTime_4() { return &___cameraFoucusTime_4; }
	inline void set_cameraFoucusTime_4(float value)
	{
		___cameraFoucusTime_4 = value;
	}
};

struct AutoFocus_t1688459817_StaticFields
{
public:
	// System.Boolean AutoFocus::m_bIsFocus
	bool ___m_bIsFocus_2;

public:
	inline static int32_t get_offset_of_m_bIsFocus_2() { return static_cast<int32_t>(offsetof(AutoFocus_t1688459817_StaticFields, ___m_bIsFocus_2)); }
	inline bool get_m_bIsFocus_2() const { return ___m_bIsFocus_2; }
	inline bool* get_address_of_m_bIsFocus_2() { return &___m_bIsFocus_2; }
	inline void set_m_bIsFocus_2(bool value)
	{
		___m_bIsFocus_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
