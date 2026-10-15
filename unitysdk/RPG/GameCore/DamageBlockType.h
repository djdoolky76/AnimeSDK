#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DamageBlockType : ::System::Int32
	{
		None = 0,
		DamageBlock = 1,
		DamageBlockExcludeDot = 2,
	};
}
