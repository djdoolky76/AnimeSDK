#pragma once
#include "unitysdk/unitysdk.h"

namespace TA::EnvironmentSystem { class ESVolume; }

#define TA_ENVIRONMENTSYSTEM_MONOESVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x28E5CB0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int MonoESVolume_TypeDefinitionIndex = 16396;

	class MonoESVolume
	{
	public:
		::TA::EnvironmentSystem::ESVolume* Volume; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MONOESVOLUME__CTOR_OFFSET))(this);
		}
	};
}
