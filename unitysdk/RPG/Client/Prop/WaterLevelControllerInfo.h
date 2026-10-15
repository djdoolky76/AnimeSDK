#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	struct alignas(4) WaterLevelControllerInfo
	{
		::System::Int32 WaterLevelIndex; // 0x10
		::System::Int32 WaterLevelControllerAnimState; // 0x14
	};
}
