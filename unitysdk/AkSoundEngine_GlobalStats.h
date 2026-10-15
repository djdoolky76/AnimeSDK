#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkSoundEngine_GlobalStats_TypeDefinitionIndex = 44802;

	struct alignas(4) AkSoundEngine_GlobalStats
	{
		::System::UInt64 Used; // 0x10
		::System::UInt64 DeviceUsed; // 0x18
		::System::UInt64 Reserved; // 0x20
		::System::UInt64 Max; // 0x28
	};
