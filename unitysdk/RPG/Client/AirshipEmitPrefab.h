#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class Airship; }

namespace RPG::Client
{
	struct alignas(8) AirshipEmitPrefab
	{
		::RPG::Client::Airship* airship; // 0x10
		::System::Single weight; // 0x18
	};
}
