#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define TA_ENVIRONMENTSYSTEM_ESVECTOR2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x28EE430)
#define TA_ENVIRONMENTSYSTEM_ESVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x28EE3B0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ESVector2_TypeDefinitionIndex = 16460;

	class ESVector2
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVECTOR2__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Vector2 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVECTOR2__CTOR_1_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
