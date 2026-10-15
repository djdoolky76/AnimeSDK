#pragma once
#include "unitysdk/unitysdk.h"

namespace EnviromentSystem
{
	enum class WindTriggerType : ::System::Int32
	{
		Duct = 0,
		Eddy = 1,
		Curve = 2,
	};
}
