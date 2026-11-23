#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCategory.h"

#define TA_ENVIRONMENTSYSTEM_SKYCATEGORY__CTOR_OFFSET UNITYSDK_OFFSET(0x285C650)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int SkyCategory_TypeDefinitionIndex = 16024;

	class SkyCategory : public ::TA::EnvironmentSystem::ESCategory
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_SKYCATEGORY__CTOR_OFFSET))(this);
		}
	};
}
