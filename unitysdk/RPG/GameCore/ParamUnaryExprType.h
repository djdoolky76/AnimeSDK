#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ParamUnaryExprType : ::System::Int32
	{
		Unknown = 0,
		Negative = 1,
		Abs = 2,
	};
}
