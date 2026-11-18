#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_LIGHTBREATHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B933B40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LightBreathData_TypeDefinitionIndex = 91107;

	class LightBreathData : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* BreathCurve; // 0x10
		::System::Single BreathTime; // 0x18
		::System::Single BreathRange; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LIGHTBREATHDATA__CTOR_OFFSET))(this);
		}
	};
}
