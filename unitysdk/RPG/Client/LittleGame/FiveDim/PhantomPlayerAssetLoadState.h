#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class PhantomPlayerAssetLoadState : ::System::Int32
	{
		Loading = 0,
		Success = 1,
		Fail = 2,
	};
}
