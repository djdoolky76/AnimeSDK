#pragma once
#include "unitysdk/unitysdk.h"

namespace EnviromentSystemV2Space
{
	enum class CancelFadingReason : ::System::Int32
	{
		Replaced = 0,
		NewFading = 1,
		FadingBack = 2,
		Count = 3,
	};
}
