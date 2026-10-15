#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivityFightGroupRow; }

namespace RPG::Client
{
	struct alignas(8) FightActivityGroupInfo
	{
		::RPG::GameCore::ActivityFightGroupRow* GroupRow; // 0x10
		::RPG::Client::ScheduleData* ScheduleData; // 0x18
	};
}
