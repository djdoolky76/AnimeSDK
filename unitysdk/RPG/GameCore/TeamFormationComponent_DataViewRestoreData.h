#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"

namespace RPG::GameCore
{
	struct alignas(4) TeamFormationComponent_DataViewRestoreData
	{
		::RPG::MVector3 TeamCenter; // 0x10
	};
}
