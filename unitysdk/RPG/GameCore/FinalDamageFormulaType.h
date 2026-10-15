#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FinalDamageFormulaType : ::System::Int32
	{
		ByDefault = 0,
		ByPureDamage = 1,
		ByBaseDamage = 2,
	};
}
