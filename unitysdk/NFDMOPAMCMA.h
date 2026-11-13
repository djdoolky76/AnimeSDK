#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define NFDMOPAMCMA_CTOR_OFFSET UNITYSDK_OFFSET(0x18E5DCD0)
#define NFDMOPAMCMA_GET_CENTERLERPCURVE_OFFSET UNITYSDK_OFFSET(0x18E5DBD0)
#define NFDMOPAMCMA_GET_CENTERLERPDURATION_OFFSET UNITYSDK_OFFSET(0x18E5DBB0)
#define NFDMOPAMCMA_GET_CHARGEINTERRUPTMINENERGYPERCENT_OFFSET UNITYSDK_OFFSET(0x18E5DB50)
#define NFDMOPAMCMA_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x18E5DB90)
#define NFDMOPAMCMA_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x18E5DB70)
#define NFDMOPAMCMA_GET_ENERGYDECREASESPEED_OFFSET UNITYSDK_OFFSET(0x18E5DB30)
#define NFDMOPAMCMA_GET_ENHANCEQTEMODIFIERNAME_OFFSET UNITYSDK_OFFSET(0x18E5DC70)
#define NFDMOPAMCMA_GET_HASSENTCHARGEINTERRUPTNOTIFY_OFFSET UNITYSDK_OFFSET(0x18E5DCB0)
#define NFDMOPAMCMA_GET_SPEEDLERPCURVE_OFFSET UNITYSDK_OFFSET(0x18E5DC30)
#define NFDMOPAMCMA_GET_SPEEDLERPDURATION_OFFSET UNITYSDK_OFFSET(0x18E5DC10)
#define NFDMOPAMCMA_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x18E5DB10)
#define NFDMOPAMCMA_GET_STARTOFFSET_OFFSET UNITYSDK_OFFSET(0x18E5DBF0)
#define NFDMOPAMCMA_GET_TARGETBASEMAXSPEED_OFFSET UNITYSDK_OFFSET(0x18E5DC50)
#define NFDMOPAMCMA_GET_TASKUNLOCK_OFFSET UNITYSDK_OFFSET(0x18E5DC90)
#define NFDMOPAMCMA_SET_CENTERLERPCURVE_OFFSET UNITYSDK_OFFSET(0x18E5DBE0)
#define NFDMOPAMCMA_SET_CENTERLERPDURATION_OFFSET UNITYSDK_OFFSET(0x18E5DBC0)
#define NFDMOPAMCMA_SET_CHARGEINTERRUPTMINENERGYPERCENT_OFFSET UNITYSDK_OFFSET(0x18E5DB60)
#define NFDMOPAMCMA_SET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x18E5DBA0)
#define NFDMOPAMCMA_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x18E5DB80)
#define NFDMOPAMCMA_SET_ENERGYDECREASESPEED_OFFSET UNITYSDK_OFFSET(0x18E5DB40)
#define NFDMOPAMCMA_SET_ENHANCEQTEMODIFIERNAME_OFFSET UNITYSDK_OFFSET(0x18E5DC80)
#define NFDMOPAMCMA_SET_HASSENTCHARGEINTERRUPTNOTIFY_OFFSET UNITYSDK_OFFSET(0x18E5DCC0)
#define NFDMOPAMCMA_SET_SPEEDLERPCURVE_OFFSET UNITYSDK_OFFSET(0x18E5DC40)
#define NFDMOPAMCMA_SET_SPEEDLERPDURATION_OFFSET UNITYSDK_OFFSET(0x18E5DC20)
#define NFDMOPAMCMA_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x18E5DB20)
#define NFDMOPAMCMA_SET_STARTOFFSET_OFFSET UNITYSDK_OFFSET(0x18E5DC00)
#define NFDMOPAMCMA_SET_TARGETBASEMAXSPEED_OFFSET UNITYSDK_OFFSET(0x18E5DC60)
#define NFDMOPAMCMA_SET_TASKUNLOCK_OFFSET UNITYSDK_OFFSET(0x18E5DCA0)

inline static constexpr unsigned int NFDMOPAMCMA_TypeDefinitionIndex = 78165;

	class NFDMOPAMCMA
	{
	public:
		::System::String* _EnhanceQTEModifierName_k__BackingField; // 0x18
		::System::String* _TaskUnlock_k__BackingField; // 0x20
		::UnityEngine::AnimationCurve* _CenterLerpCurve_k__BackingField; // 0x28
		::UnityEngine::AnimationCurve* _SpeedLerpCurve_k__BackingField; // 0x30
		::System::Single _Duration_k__BackingField; // 0x38
		::System::Boolean _HasSentChargeInterruptNotify_k__BackingField; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single _TargetBaseMaxSpeed_k__BackingField; // 0x40
		::System::Single _SpeedLerpDuration_k__BackingField; // 0x44
		::System::Single _CenterLerpDuration_k__BackingField; // 0x48
		::System::Single _Speed_k__BackingField; // 0x4C
		::System::Single _EnergyDecreaseSpeed_k__BackingField; // 0x50
		::System::Single _ChargeInterruptMinEnergyPercent_k__BackingField; // 0x54
		::System::Single _CurrentTime_k__BackingField; // 0x58
		::System::Single _StartOffset_k__BackingField; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_CTOR_OFFSET))(this);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_SET_SPEED_OFFSET))(this, a1);
		}

		::System::Single get_EnergyDecreaseSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_GET_ENERGYDECREASESPEED_OFFSET))(this);
		}

		::System::Void set_EnergyDecreaseSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_SET_ENERGYDECREASESPEED_OFFSET))(this, a1);
		}

		::System::Single get_ChargeInterruptMinEnergyPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_GET_CHARGEINTERRUPTMINENERGYPERCENT_OFFSET))(this);
		}

		::System::Void set_ChargeInterruptMinEnergyPercent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_SET_CHARGEINTERRUPTMINENERGYPERCENT_OFFSET))(this, a1);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_Duration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_SET_DURATION_OFFSET))(this, a1);
		}

		::System::Single get_CurrentTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_GET_CURRENTTIME_OFFSET))(this);
		}

		::System::Void set_CurrentTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_SET_CURRENTTIME_OFFSET))(this, a1);
		}

		::System::Single get_CenterLerpDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_GET_CENTERLERPDURATION_OFFSET))(this);
		}

		::System::Void set_CenterLerpDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_SET_CENTERLERPDURATION_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* get_CenterLerpCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_GET_CENTERLERPCURVE_OFFSET))(this);
		}

		::System::Void set_CenterLerpCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_SET_CENTERLERPCURVE_OFFSET))(this, a1);
		}

		::System::Single get_StartOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_GET_STARTOFFSET_OFFSET))(this);
		}

		::System::Void set_StartOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_SET_STARTOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_SpeedLerpDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_GET_SPEEDLERPDURATION_OFFSET))(this);
		}

		::System::Void set_SpeedLerpDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_SET_SPEEDLERPDURATION_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* get_SpeedLerpCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_GET_SPEEDLERPCURVE_OFFSET))(this);
		}

		::System::Void set_SpeedLerpCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_SET_SPEEDLERPCURVE_OFFSET))(this, a1);
		}

		::System::Single get_TargetBaseMaxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_GET_TARGETBASEMAXSPEED_OFFSET))(this);
		}

		::System::Void set_TargetBaseMaxSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_SET_TARGETBASEMAXSPEED_OFFSET))(this, a1);
		}

		::System::String* get_EnhanceQTEModifierName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_GET_ENHANCEQTEMODIFIERNAME_OFFSET))(this);
		}

		::System::Void set_EnhanceQTEModifierName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_SET_ENHANCEQTEMODIFIERNAME_OFFSET))(this, a1);
		}

		::System::String* get_TaskUnlock()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_GET_TASKUNLOCK_OFFSET))(this);
		}

		::System::Void set_TaskUnlock(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_SET_TASKUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean get_HasSentChargeInterruptNotify()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_GET_HASSENTCHARGEINTERRUPTNOTIFY_OFFSET))(this);
		}

		::System::Void set_HasSentChargeInterruptNotify(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NFDMOPAMCMA_SET_HASSENTCHARGEINTERRUPTNOTIFY_OFFSET))(this, a1);
		}

	};
