#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarConfigure_QualitySetting_TypeDefinitionIndex = 85095;

	struct alignas(4) MonoCityCarConfigure_QualitySetting
	{
		::System::UInt32 MaxCarCount; // 0x10
		::System::Single CarGenerateSpeedRatio; // 0x14
	};
}
