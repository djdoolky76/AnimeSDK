#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class UIMeta_UIBlurMode : ::System::Int32
	{
		None = 0,
		FullScreen = 1,
		PartialArea = 2,
		FullAndPartial = 3,
	};
}
