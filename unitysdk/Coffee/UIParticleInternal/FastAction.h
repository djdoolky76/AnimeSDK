#pragma once
#include "unitysdk/unitysdk.h"

#define COFFEE_UIPARTICLEINTERNAL_FASTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x166C4D50)
#define COFFEE_UIPARTICLEINTERNAL_FASTACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x166C4BB0)

namespace Coffee::UIParticleInternal
{
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
