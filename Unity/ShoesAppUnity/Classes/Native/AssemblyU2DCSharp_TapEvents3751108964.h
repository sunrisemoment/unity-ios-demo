#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Touch407273883.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TapEvents
struct  TapEvents_t3751108964  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TapEvents::touchDuration
	float ___touchDuration_2;
	// UnityEngine.Touch TapEvents::touch
	Touch_t407273883  ___touch_3;
	// UnityEngine.Animator TapEvents::modelAnim
	Animator_t69676727 * ___modelAnim_4;
	// System.Boolean TapEvents::flagBack
	bool ___flagBack_5;

public:
	inline static int32_t get_offset_of_touchDuration_2() { return static_cast<int32_t>(offsetof(TapEvents_t3751108964, ___touchDuration_2)); }
	inline float get_touchDuration_2() const { return ___touchDuration_2; }
	inline float* get_address_of_touchDuration_2() { return &___touchDuration_2; }
	inline void set_touchDuration_2(float value)
	{
		___touchDuration_2 = value;
	}

	inline static int32_t get_offset_of_touch_3() { return static_cast<int32_t>(offsetof(TapEvents_t3751108964, ___touch_3)); }
	inline Touch_t407273883  get_touch_3() const { return ___touch_3; }
	inline Touch_t407273883 * get_address_of_touch_3() { return &___touch_3; }
	inline void set_touch_3(Touch_t407273883  value)
	{
		___touch_3 = value;
	}

	inline static int32_t get_offset_of_modelAnim_4() { return static_cast<int32_t>(offsetof(TapEvents_t3751108964, ___modelAnim_4)); }
	inline Animator_t69676727 * get_modelAnim_4() const { return ___modelAnim_4; }
	inline Animator_t69676727 ** get_address_of_modelAnim_4() { return &___modelAnim_4; }
	inline void set_modelAnim_4(Animator_t69676727 * value)
	{
		___modelAnim_4 = value;
		Il2CppCodeGenWriteBarrier(&___modelAnim_4, value);
	}

	inline static int32_t get_offset_of_flagBack_5() { return static_cast<int32_t>(offsetof(TapEvents_t3751108964, ___flagBack_5)); }
	inline bool get_flagBack_5() const { return ___flagBack_5; }
	inline bool* get_address_of_flagBack_5() { return &___flagBack_5; }
	inline void set_flagBack_5(bool value)
	{
		___flagBack_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
