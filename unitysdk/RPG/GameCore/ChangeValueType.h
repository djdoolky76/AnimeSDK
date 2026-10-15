#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ChangeValueType : ::System::Int32
	{
		Delta = 0,
		RawDelta = 1,
		ClampedAdd = 2,
	};
}
