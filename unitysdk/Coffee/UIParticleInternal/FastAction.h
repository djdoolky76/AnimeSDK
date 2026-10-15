#pragma once
#include "unitysdk/unitysdk.h"

#define COFFEE_UIPARTICLEINTERNAL_FASTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x166B58B0)
#define COFFEE_UIPARTICLEINTERNAL_FASTACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x166B5710)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int FastAction_TypeDefinitionIndex = 45128;

	class FastAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_FASTACTION_CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_FASTACTION_INVOKE_OFFSET))(this);
		}

	};
}
