#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

#define TA_ENVIRONMENTSYSTEM_ESCOLOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2887FC0)
#define TA_ENVIRONMENTSYSTEM_ESCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x2887F60)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ESColor_TypeDefinitionIndex = 16192;

	class ESColor
	{
	public:
		::System::Void _ctor(::UnityEngine::E46B881AA2636190 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E46B881AA2636190))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESCOLOR__CTOR_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESCOLOR__CTOR_1_OFFSET))(this);
		}
	};
}
