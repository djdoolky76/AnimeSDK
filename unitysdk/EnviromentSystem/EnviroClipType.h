#pragma once
#include "unitysdk/unitysdk.h"

namespace EnviromentSystem
{
	enum class EnviroClipType : ::System::Int32
	{
		Common = 0,
		Light = 1,
		Fog = 2,
		Sky = 3,
		Weather = 4,
	};
}
