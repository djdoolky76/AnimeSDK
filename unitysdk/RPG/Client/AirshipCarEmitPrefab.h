#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class AirshipCar; }

namespace RPG::Client
{
	struct alignas(8) AirshipCarEmitPrefab
	{
		::RPG::Client::AirshipCar* airship; // 0x10
		::System::Single weight; // 0x18
	};
}
