#pragma once
#include "unitysdk/unitysdk.h"

#define TA_ENVIRONMENTSYSTEM_ESBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x28B26B0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ESBool_TypeDefinitionIndex = 16275;

	class ESBool
	{
	public:
		::System::Void _ctor(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESBOOL__CTOR_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
