#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) FiveDimManager_IsolatedGameInstanceInfo
	{
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::System::Boolean ShowSameGroupEntities; // 0x18
	};
}
