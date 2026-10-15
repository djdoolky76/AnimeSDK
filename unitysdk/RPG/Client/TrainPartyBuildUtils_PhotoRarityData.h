#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client
{
	struct alignas(4) TrainPartyBuildUtils_PhotoRarityData
	{
		::System::Int32 RarityID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID RarityName; // 0x18
	};
}
