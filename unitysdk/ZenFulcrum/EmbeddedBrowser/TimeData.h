#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	struct alignas(4) TimeData
	{
		::System::Single elapsedTime; // 0x10
		::System::Single deltaTime; // 0x14
	};
}
