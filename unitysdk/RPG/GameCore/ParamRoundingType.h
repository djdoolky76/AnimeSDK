#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ParamRoundingType : ::System::Int32
	{
		Unknown = 0,
		Floor = 1,
		Ceil = 2,
		Round = 3,
	};
}
