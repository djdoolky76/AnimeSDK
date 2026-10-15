#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class GBJBCLGGNIA;
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define EFFECT_SETRANDOMANIMTIME_AWAKE_OFFSET UNITYSDK_OFFSET(0x155E2E80)
#define EFFECT_SETRANDOMANIMTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x155E30A0)
#define EFFECT_SETRANDOMANIMTIME_GET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x155E2F30)
#define EFFECT_SETRANDOMANIMTIME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x155E2ED0)

	class Effect_SetRandomAnimTime : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* TargetAnimator; // 0x18
		::System::String* AnimStateName; // 0x20
		::GBJBCLGGNIA* KADDKEGNCHE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_SETRANDOMANIMTIME_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_SETRANDOMANIMTIME_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_SETRANDOMANIMTIME_ONENABLE_OFFSET))(this);
		}

		::System::Int32 get_RandomSeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_SETRANDOMANIMTIME_GET_RANDOMSEED_OFFSET))(this);
		}

	};
