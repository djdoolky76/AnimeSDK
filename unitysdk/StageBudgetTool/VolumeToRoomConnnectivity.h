#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageBudgetTool/PassageConnectivity.h"
namespace System { class String; }

namespace StageBudgetTool
{
	struct alignas(8) VolumeToRoomConnnectivity
	{
		::System::String* RoomAlias; // 0x10
		::StageBudgetTool::PassageConnectivity Connectivity; // 0x18
	};
}
