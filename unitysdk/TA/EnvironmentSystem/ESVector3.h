#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define TA_ENVIRONMENTSYSTEM_ESVECTOR3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x28DAF90)
#define TA_ENVIRONMENTSYSTEM_ESVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x28DAFF0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ESVector3_TypeDefinitionIndex = 16412;

	class ESVector3
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVECTOR3__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESVECTOR3__CTOR_1_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
