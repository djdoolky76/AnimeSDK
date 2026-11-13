#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_EFFECT_SETMOTIONVECTORPASSDISTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x189A2F50)
#define RPG_CLIENT_EFFECT_SETMOTIONVECTORPASSDISTANCE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x189A2E50)
#define RPG_CLIENT_EFFECT_SETMOTIONVECTORPASSDISTANCE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x189A2C90)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_SetMotionVectorPassDistance_TypeDefinitionIndex = 72527;

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
