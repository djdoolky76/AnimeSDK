#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCategory.h"

#define TA_ENVIRONMENTSYSTEM_WEATHERCATEGORY__CTOR_OFFSET UNITYSDK_OFFSET(0x285C650)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int WeatherCategory_TypeDefinitionIndex = 16244;

	class WeatherCategory : public ::TA::EnvironmentSystem::ESCategory
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_WEATHERCATEGORY__CTOR_OFFSET))(this);
		}
	};
}
