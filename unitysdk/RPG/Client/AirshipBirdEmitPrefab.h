#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class AirshipBird; }

namespace RPG::Client
{
	struct alignas(8) AirshipBirdEmitPrefab
	{
		::RPG::Client::AirshipBird* airship; // 0x10
		::System::Single weight; // 0x18
	};
}
