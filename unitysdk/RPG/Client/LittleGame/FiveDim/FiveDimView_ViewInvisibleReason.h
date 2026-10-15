#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class FiveDimView_ViewInvisibleReason : ::System::UInt32
	{
		None = 0,
		CullByCamera = 1,
	};
}
