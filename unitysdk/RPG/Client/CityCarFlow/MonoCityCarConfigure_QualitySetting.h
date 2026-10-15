#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::CityCarFlow
{
	struct alignas(4) MonoCityCarConfigure_QualitySetting
	{
		::System::UInt32 MaxCarCount; // 0x10
		::System::Single CarGenerateSpeedRatio; // 0x14
	};
}
