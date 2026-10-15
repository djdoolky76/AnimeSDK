#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MonsterBodySize : ::System::Int32
	{
		Common = 0,
		ShortCommon = 1,
		FloatingCommon = 2,
		FloatingSphere = 3,
		Sphere = 4,
		None = 99,
	};
}
