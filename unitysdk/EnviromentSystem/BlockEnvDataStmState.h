#pragma once
#include "unitysdk/unitysdk.h"

namespace EnviromentSystem
{
	enum class BlockEnvDataStmState : ::System::Int32
	{
		Released = 0,
		Loading = 1,
		Ready = 2,
	};
}
