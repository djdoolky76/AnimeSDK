#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ENpcLookAtMode : ::System::Int32
	{
		Closed = 0,
		LookTarget = 1,
		LookPlayer = 2,
		LookPosition = 3,
	};
}
