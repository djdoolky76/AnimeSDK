#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationControllerParamValue.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerParamIdentifier.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_CREATE_1_OFFSET UNITYSDK_OFFSET(0xE0CEB60)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_CREATE_2_OFFSET UNITYSDK_OFFSET(0xE0CEBD0)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_CREATE_3_OFFSET UNITYSDK_OFFSET(0xE0CEC50)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_CREATE_OFFSET UNITYSDK_OFFSET(0xE0CEAE0)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_GET_1_OFFSET UNITYSDK_OFFSET(0x592770)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_GET_2_OFFSET UNITYSDK_OFFSET(0x592860)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_GET_ISBOOL_OFFSET UNITYSDK_OFFSET(0x592640)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_GET_ISFLOAT_OFFSET UNITYSDK_OFFSET(0x592600)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_GET_ISINTEGER_OFFSET UNITYSDK_OFFSET(0x592620)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x592660)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_GET_OFFSET UNITYSDK_OFFSET(0x592680)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_RESET_OFFSET UNITYSDK_OFFSET(0x592B40)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_SET_1_OFFSET UNITYSDK_OFFSET(0x5929D0)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_SET_2_OFFSET UNITYSDK_OFFSET(0x592A50)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_SET_OFFSET UNITYSDK_OFFSET(0x592950)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_TRIGGER_OFFSET UNITYSDK_OFFSET(0x592AD0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimatorControllerParamEntry_TypeDefinitionIndex = 77298;

	struct alignas(4) AnimatorControllerParamEntry
	{
		::NPCCrowd::Animation::AnimatorControllerParamIdentifier _paramId; // 0x10
		::NPCCrowd::Animation::AnimationControllerParamValue _defaultValue; // 0x18

		::System::Boolean get_IsFloat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_GET_ISFLOAT_OFFSET))(this);
		}

		::System::Boolean get_IsInteger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_GET_ISINTEGER_OFFSET))(this);
		}

		::System::Boolean get_IsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_GET_ISBOOL_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Single Get(::UnityEngine::Animations::AnimatorControllerPlayable playable, ::System::Single fallback)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_GET_OFFSET))(this, playable, fallback);
		}

		::System::Int32 Get_1(::UnityEngine::Animations::AnimatorControllerPlayable playable, ::System::Int32 fallback)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_GET_1_OFFSET))(this, playable, fallback);
		}

		::System::Boolean Get_2(::UnityEngine::Animations::AnimatorControllerPlayable playable, ::System::Boolean fallback)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_GET_2_OFFSET))(this, playable, fallback);
		}

		::System::Void Set(::UnityEngine::Animations::AnimatorControllerPlayable playable, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_SET_OFFSET))(this, playable, value);
		}

		::System::Void Set_1(::UnityEngine::Animations::AnimatorControllerPlayable playable, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_SET_1_OFFSET))(this, playable, value);
		}

		::System::Void Set_2(::UnityEngine::Animations::AnimatorControllerPlayable playable, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_SET_2_OFFSET))(this, playable, value);
		}

		::System::Void Trigger(::UnityEngine::Animations::AnimatorControllerPlayable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_TRIGGER_OFFSET))(this, playable);
		}

		::System::Void Reset(::UnityEngine::Animations::AnimatorControllerPlayable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_RESET_OFFSET))(this, playable);
		}

		/*
		static ::NPCCrowd::Animation::AnimatorControllerParamEntry Create(::System::Int32 paramHash, ::System::Single defaultValue)
		{
			return ((::NPCCrowd::Animation::AnimatorControllerParamEntry(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_CREATE_OFFSET))(paramHash, defaultValue);
		}
		*/

		/*
		static ::NPCCrowd::Animation::AnimatorControllerParamEntry Create_1(::System::Int32 paramHash, ::System::Int32 defaultValue)
		{
			return ((::NPCCrowd::Animation::AnimatorControllerParamEntry(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_CREATE_1_OFFSET))(paramHash, defaultValue);
		}
		*/

		/*
		static ::NPCCrowd::Animation::AnimatorControllerParamEntry Create_2(::System::Int32 paramHash, ::System::Boolean defaultValue)
		{
			return ((::NPCCrowd::Animation::AnimatorControllerParamEntry(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_CREATE_2_OFFSET))(paramHash, defaultValue);
		}
		*/

		/*
		static ::NPCCrowd::Animation::AnimatorControllerParamEntry Create_3(::System::Int32 paramHash)
		{
			return ((::NPCCrowd::Animation::AnimatorControllerParamEntry(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERPARAMENTRY_CREATE_3_OFFSET))(paramHash);
		}
		*/
	};
}
