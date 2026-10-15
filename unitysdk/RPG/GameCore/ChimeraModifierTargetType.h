#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ChimeraModifierTargetType : ::System::Int32
	{
		None = 0,
		Self = 1,
		FirstMember = 2,
		PreviousMember = 3,
		NextMember = 4,
		Work = 5,
	};
}
