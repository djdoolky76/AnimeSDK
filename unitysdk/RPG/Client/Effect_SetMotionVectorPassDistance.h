#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_EFFECT_SETMOTIONVECTORPASSDISTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0xCD66B70)
#define RPG_CLIENT_EFFECT_SETMOTIONVECTORPASSDISTANCE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCD66A70)
#define RPG_CLIENT_EFFECT_SETMOTIONVECTORPASSDISTANCE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCD668B0)

namespace RPG::Client
{
	class Effect_SetMotionVectorPassDistance : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single MotionVectorPassDistance; // 0x18
		::System::Single JONHBDJBDII; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SETMOTIONVECTORPASSDISTANCE_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SETMOTIONVECTORPASSDISTANCE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SETMOTIONVECTORPASSDISTANCE_ONDISABLE_OFFSET))(this);
		}

	};
}
