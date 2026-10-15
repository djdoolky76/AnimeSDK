#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft
{
	enum class MechCraftBanCellAxesDirectionType : ::System::Int32
	{
		None = 0,
		TopLeftToBottomRight = 1,
		TopRightToBottomLeft = 2,
		BottomLeftToTopRight = 3,
		BottomRightToTopLeft = 4,
	};
}
