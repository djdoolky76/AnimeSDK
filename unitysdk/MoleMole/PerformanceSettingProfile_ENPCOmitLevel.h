#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PerformanceSettingProfile_ENPCOmitLevel_TypeDefinitionIndex = 57997;

	enum class PerformanceSettingProfile_ENPCOmitLevel : ::System::Int32
	{
		OnlyNecessary = 3,
		Slight = 1,
		Aggressive = 2,
		None = 0,
	};
}
