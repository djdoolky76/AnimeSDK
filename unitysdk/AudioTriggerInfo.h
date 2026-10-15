#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AudioTriggerInfo_TypeDefinitionIndex = 47517;

	struct alignas(4) AudioTriggerInfo
	{
		::System::Boolean ShouldTrigger; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single SignalValue; // 0x14
	};
