#pragma once
#include "unitysdk/unitysdk.h"

namespace StageBudgetTool
{
	enum class PassageConnectivity : ::System::Int32
	{
		Insideof = 0,
		Connnect = 1,
		HalfObstruct = 2,
		Obstruct = 3,
	};
}
