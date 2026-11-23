#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

#define TA_ENVIRONMENTSYSTEM_ESVECTOR4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x289FF60)
#define TA_ENVIRONMENTSYSTEM_ESVECTOR4__CTOR_OFFSET UNITYSDK_OFFSET(0x289FFC0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ESVector4_TypeDefinitionIndex = 16246;

	class ESVector4
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVECTOR4__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::E8984F4E44AE20E5 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E8984F4E44AE20E5))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVECTOR4__CTOR_1_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
