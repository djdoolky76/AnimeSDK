#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TargetFetchAdvNpcFetchType : ::System::Int32
	{
		Owner = 0,
		SingleNpcByNpcKey = 1,
		SingleNpcByNpcID = 2,
		SingleNpcByUniqueName = 3,
		SingleNpcByOwnerGroupAndID = 4,
	};
}
