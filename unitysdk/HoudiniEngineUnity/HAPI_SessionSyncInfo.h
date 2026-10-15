#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	struct alignas(4) HAPI_SessionSyncInfo
	{
		::System::Boolean cookUsingHoudiniTime; // 0x10
		::System::Boolean syncViewport; // 0x11
	};
}
