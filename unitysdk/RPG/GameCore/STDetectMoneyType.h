#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class STDetectMoneyType : ::System::Int32
	{
		None = 0,
		CurrentPlayerNearest = 1,
		OwnerNearest = 2,
	};
}
