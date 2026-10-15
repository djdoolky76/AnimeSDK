#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) RogueTournHandbookData_NPCProgressPair
	{
		::System::UInt32 NPCID; // 0x10
		::System::UInt32 Progress; // 0x14
	};
}
