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
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_Swipe3475047630.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SwipeManager
struct  SwipeManager_t470805709  : public MonoBehaviour_t1158329972
{
public:
	// System.Single SwipeManager::minSwipeLength
	float ___minSwipeLength_2;
	// UnityEngine.Vector2 SwipeManager::firstPressPos
	Vector2_t2243707579  ___firstPressPos_3;
	// UnityEngine.Vector2 SwipeManager::secondPressPos
	Vector2_t2243707579  ___secondPressPos_4;
	// UnityEngine.Vector2 SwipeManager::currentSwipe
	Vector2_t2243707579  ___currentSwipe_5;
	// UnityEngine.Vector2 SwipeManager::firstClickPos
	Vector2_t2243707579  ___firstClickPos_6;
	// UnityEngine.Vector2 SwipeManager::secondClickPos
	Vector2_t2243707579  ___secondClickPos_7;
	// UnityEngine.Animator SwipeManager::modelAnim
	Animator_t69676727 * ___modelAnim_9;
	// System.Boolean SwipeManager::flagBack
	bool ___flagBack_10;

public:
	inline static int32_t get_offset_of_minSwipeLength_2() { return static_cast<int32_t>(offsetof(SwipeManager_t470805709, ___minSwipeLength_2)); }
	inline float get_minSwipeLength_2() const { return ___minSwipeLength_2; }
	inline float* get_address_of_minSwipeLength_2() { return &___minSwipeLength_2; }
	inline void set_minSwipeLength_2(float value)
	{
		___minSwipeLength_2 = value;
	}

	inline static int32_t get_offset_of_firstPressPos_3() { return static_cast<int32_t>(offsetof(SwipeManager_t470805709, ___firstPressPos_3)); }
	inline Vector2_t2243707579  get_firstPressPos_3() const { return ___firstPressPos_3; }
	inline Vector2_t2243707579 * get_address_of_firstPressPos_3() { return &___firstPressPos_3; }
	inline void set_firstPressPos_3(Vector2_t2243707579  value)
	{
		___firstPressPos_3 = value;
	}

	inline static int32_t get_offset_of_secondPressPos_4() { return static_cast<int32_t>(offsetof(SwipeManager_t470805709, ___secondPressPos_4)); }
	inline Vector2_t2243707579  get_secondPressPos_4() const { return ___secondPressPos_4; }
	inline Vector2_t2243707579 * get_address_of_secondPressPos_4() { return &___secondPressPos_4; }
	inline void set_secondPressPos_4(Vector2_t2243707579  value)
	{
		___secondPressPos_4 = value;
	}

	inline static int32_t get_offset_of_currentSwipe_5() { return static_cast<int32_t>(offsetof(SwipeManager_t470805709, ___currentSwipe_5)); }
	inline Vector2_t2243707579  get_currentSwipe_5() const { return ___currentSwipe_5; }
	inline Vector2_t2243707579 * get_address_of_currentSwipe_5() { return &___currentSwipe_5; }
	inline void set_currentSwipe_5(Vector2_t2243707579  value)
	{
		___currentSwipe_5 = value;
	}

	inline static int32_t get_offset_of_firstClickPos_6() { return static_cast<int32_t>(offsetof(SwipeManager_t470805709, ___firstClickPos_6)); }
	inline Vector2_t2243707579  get_firstClickPos_6() const { return ___firstClickPos_6; }
	inline Vector2_t2243707579 * get_address_of_firstClickPos_6() { return &___firstClickPos_6; }
	inline void set_firstClickPos_6(Vector2_t2243707579  value)
	{
		___firstClickPos_6 = value;
	}

	inline static int32_t get_offset_of_secondClickPos_7() { return static_cast<int32_t>(offsetof(SwipeManager_t470805709, ___secondClickPos_7)); }
	inline Vector2_t2243707579  get_secondClickPos_7() const { return ___secondClickPos_7; }
	inline Vector2_t2243707579 * get_address_of_secondClickPos_7() { return &___secondClickPos_7; }
	inline void set_secondClickPos_7(Vector2_t2243707579  value)
	{
		___secondClickPos_7 = value;
	}

	inline static int32_t get_offset_of_modelAnim_9() { return static_cast<int32_t>(offsetof(SwipeManager_t470805709, ___modelAnim_9)); }
	inline Animator_t69676727 * get_modelAnim_9() const { return ___modelAnim_9; }
	inline Animator_t69676727 ** get_address_of_modelAnim_9() { return &___modelAnim_9; }
	inline void set_modelAnim_9(Animator_t69676727 * value)
	{
		___modelAnim_9 = value;
		Il2CppCodeGenWriteBarrier(&___modelAnim_9, value);
	}

	inline static int32_t get_offset_of_flagBack_10() { return static_cast<int32_t>(offsetof(SwipeManager_t470805709, ___flagBack_10)); }
	inline bool get_flagBack_10() const { return ___flagBack_10; }
	inline bool* get_address_of_flagBack_10() { return &___flagBack_10; }
	inline void set_flagBack_10(bool value)
	{
		___flagBack_10 = value;
	}
};

struct SwipeManager_t470805709_StaticFields
{
public:
	// Swipe SwipeManager::swipeDirection
	int32_t ___swipeDirection_8;

public:
	inline static int32_t get_offset_of_swipeDirection_8() { return static_cast<int32_t>(offsetof(SwipeManager_t470805709_StaticFields, ___swipeDirection_8)); }
	inline int32_t get_swipeDirection_8() const { return ___swipeDirection_8; }
	inline int32_t* get_address_of_swipeDirection_8() { return &___swipeDirection_8; }
	inline void set_swipeDirection_8(int32_t value)
	{
		___swipeDirection_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
