#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRaceGameFlowMessage.h"
namespace System { class Object; }

namespace RPG::Client::CakeRace
{
	struct alignas(8) CakeRaceGameFlow_InitParameters
	{
		::RPG::Client::CakeRaceGameFlowMessage StartMessage; // 0x10
		::System::Byte _padding0[0x4];
		::System::Object* StartMessageParams; // 0x18
	};
}
