#pragma once
#include "unitysdk/unitysdk.h"

#define TA_ENVIRONMENTSYSTEM_ESFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x2857960)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ESFloat_TypeDefinitionIndex = 15999;

	class ESFloat
	{
	public:
		::System::Void _ctor(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESFLOAT__CTOR_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
