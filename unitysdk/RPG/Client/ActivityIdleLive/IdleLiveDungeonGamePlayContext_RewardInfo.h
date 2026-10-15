#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client::ActivityIdleLive
{
	struct alignas(8) IdleLiveDungeonGamePlayContext_RewardInfo
	{
		::System::UInt32 ItemID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* IconPath; // 0x18
		::System::UInt32 Count; // 0x20
	};
}
