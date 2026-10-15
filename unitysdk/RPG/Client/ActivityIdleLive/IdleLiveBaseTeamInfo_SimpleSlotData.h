#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityIdleLive
{
	struct alignas(4) IdleLiveBaseTeamInfo_SimpleSlotData
	{
		::System::UInt32 SlotID; // 0x10
		::System::UInt32 AvatarID; // 0x14
	};
}
