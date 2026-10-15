#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class HipplenPickingGoodsDisplayType : ::System::Int32
	{
		Default = 0,
		VerticalFade = 1,
		HorizontalFade = 2,
		DownTopFade = 3,
		RightLeftFade = 4,
		TransparentFade = 5,
	};
}
