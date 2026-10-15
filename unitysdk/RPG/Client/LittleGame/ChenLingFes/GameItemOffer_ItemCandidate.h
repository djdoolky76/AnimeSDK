#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLingFes
{
	struct alignas(4) GameItemOffer_ItemCandidate
	{
		::System::UInt32 ItemID; // 0x10
		::System::Single Weight; // 0x14
	};
}
