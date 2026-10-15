#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline
{
	enum class MechCraftPerfUnitType : ::System::Int32
	{
		TargetReaching = 0,
		TargetReached = 1,
		ValueChanged = 2,
	};
}
