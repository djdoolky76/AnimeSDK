#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class TransitType : ::System::Int32
	{
		Decend = 1,
		Ascend = 2,
		Hold = 3,
	};
}
