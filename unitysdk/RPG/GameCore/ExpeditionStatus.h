#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ExpeditionStatus : ::System::Int32
	{
		Unknow = 0,
		NotInProgress = 1,
		InProgress = 2,
	};
}
