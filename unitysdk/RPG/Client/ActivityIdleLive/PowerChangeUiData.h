#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"

namespace RPG::Client::ActivityIdleLive
{
	struct alignas(4) PowerChangeUiData
	{
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal CurPower; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal ChangedPower; // 0x28
		::System::Boolean NeedShowToast; // 0x40
	};
}
