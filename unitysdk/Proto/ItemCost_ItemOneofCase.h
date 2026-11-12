#pragma once
#include "unitysdk/unitysdk.h"

namespace Proto
{
	inline static constexpr unsigned int ItemCost_ItemOneofCase_TypeDefinitionIndex = 28366;

	enum class ItemCost_ItemOneofCase : ::System::Int32
	{
		None = 0,
		PileItem = 3,
		EquipmentUniqueId = 9,
		RelicUniqueId = 11,
		BlindBoxPetUid = 5,
	};
}
