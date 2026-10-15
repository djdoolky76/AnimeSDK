#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	enum class IRIItemStatus : ::System::Int32
	{
		None = 0,
		LoadingMat = 1,
		LoadingAsset = 2,
		WaitingShow = 3,
	};
}
