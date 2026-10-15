#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	enum class AlchemyChangeHeightRetCode : ::System::Int32
	{
		Success = 0,
		ErrorUnknown = 1,
		ErrorBadRatio = 2,
	};
}
