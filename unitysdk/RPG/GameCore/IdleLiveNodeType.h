#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class IdleLiveNodeType : ::System::Int32
	{
		Normal = 0,
		Elite = 1,
		Boss = 2,
		Event = 3,
	};
}
