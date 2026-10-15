#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) ChessRogueBoardCellEnterData
	{
		::System::UInt32 CellID; // 0x10
		::System::UInt32 MonsterGroupID; // 0x14
	};
}
