#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	enum class Required : ::System::Int32
	{
		Default = 0,
		AllowNull = 1,
		Always = 2,
		DisallowNull = 3,
	};
}
