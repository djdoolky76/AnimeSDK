#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft::ViewModel
{
	enum class MechCraftDiyFocusTarget : ::System::Int32
	{
		None = 0,
		Mechatron = 1,
		Pose = 2,
		PaintColor = 3,
		EffectColor = 4,
	};
}
