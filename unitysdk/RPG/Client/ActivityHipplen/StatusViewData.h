#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
namespace RPG::GameCore { class ActivityHipplenStatConfigRow; }

namespace RPG::Client::ActivityHipplen
{
	struct alignas(8) StatusViewData
	{
		::RPG::GameCore::HipplenStatType StatType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ActivityHipplenStatConfigRow* StatConfigRow; // 0x18
		::System::Int32 Value; // 0x20
	};
}
