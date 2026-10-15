#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PreShowStanceCheckType : ::System::Int32
	{
		Default = 0,
		NormalOrRed = 1,
		Normal = 2,
		Red = 3,
		NormalAndRed = 4,
	};
}
