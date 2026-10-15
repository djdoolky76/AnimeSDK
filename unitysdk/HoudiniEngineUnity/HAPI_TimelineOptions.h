#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_TimelineOptions_TypeDefinitionIndex = 40495;

	struct alignas(4) HAPI_TimelineOptions
	{
		::System::Double fps; // 0x10
		::System::Double startTime; // 0x18
		::System::Double endTime; // 0x20
	};
}
