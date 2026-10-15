#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class BAPartVariantRes_LoadState : ::System::Int32
	{
		Uninitialized = 0,
		Common = 1,
		RequestLoading = 2,
		Loading = 3,
		DoFadeOut = 4,
		DoFadeIn = 5,
		DoFadeOutIn = 6,
	};
}
