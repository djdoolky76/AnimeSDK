#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	struct alignas(4) HAPI_TimelineOptions
	{
		::System::Double fps; // 0x10
		::System::Double startTime; // 0x18
		::System::Double endTime; // 0x20
	};
}
