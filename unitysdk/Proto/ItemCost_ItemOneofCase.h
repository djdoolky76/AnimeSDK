#pragma once
#include "unitysdk/unitysdk.h"

namespace Proto
{
	enum class ItemCost_ItemOneofCase : ::System::Int32
	{
		None = 0,
		PileItem = 10,
		EquipmentUniqueId = 2,
		RelicUniqueId = 4,
		BlindBoxPetUid = 1,
	};
}
