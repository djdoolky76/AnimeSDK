#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimeType.h"

namespace RPG::Client::Prop::ChimePuzzle
{
	struct alignas(8) ChimeProxy
	{
		::System::UInt32 ID; // 0x10
		::RPG::Client::Prop::ChimePuzzle::ChimeType Type; // 0x14
		::Il2CppArray<::System::UInt32>* BoardID; // 0x18
	};
}
