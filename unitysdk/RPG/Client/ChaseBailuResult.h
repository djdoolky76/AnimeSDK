#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ChaseBailuResult : ::System::Int32
	{
		Success = 0,
		MoveFail = 1,
		NoNextPoint = 2,
	};
}
