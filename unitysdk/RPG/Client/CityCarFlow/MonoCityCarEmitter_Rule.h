#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::CityCarFlow { class MonoCityCar; }

namespace RPG::Client::CityCarFlow
{
	struct alignas(8) MonoCityCarEmitter_Rule
	{
		::RPG::Client::CityCarFlow::MonoCityCar* Car; // 0x10
		::System::Single Weight; // 0x18
	};
}
