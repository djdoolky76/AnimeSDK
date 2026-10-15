#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ShieldModifyFormulaType : ::System::Int32
	{
		Default = 0,
		ByMaxShieldPercentage = 1,
		AddWithProperty = 2,
	};
}
