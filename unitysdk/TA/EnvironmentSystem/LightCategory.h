#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCategory.h"

#define TA_ENVIRONMENTSYSTEM_LIGHTCATEGORY__CTOR_OFFSET UNITYSDK_OFFSET(0x28D9F00)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int LightCategory_TypeDefinitionIndex = 16404;

	class LightCategory : public ::TA::EnvironmentSystem::ESCategory
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_LIGHTCATEGORY__CTOR_OFFSET))(this);
		}
	};
}
