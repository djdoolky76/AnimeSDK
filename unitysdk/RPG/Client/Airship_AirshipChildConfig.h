#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class Airship; }

namespace RPG::Client
{
	struct alignas(8) Airship_AirshipChildConfig
	{
		::System::Single distance; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::Airship* prefab; // 0x18
	};
}
