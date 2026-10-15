#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ResidentActivityPanelDataSource : ::System::Int32
	{
		None = 0,
		Activity = 1,
		Rogue = 2,
		GridFight = 3,
	};
}
