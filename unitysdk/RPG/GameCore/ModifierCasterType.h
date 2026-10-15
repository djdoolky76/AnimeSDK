#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ModifierCasterType : ::System::Int32
	{
		Inherit = 0,
		CasterSelf = 1,
		TargetSelf = 2,
	};
}
