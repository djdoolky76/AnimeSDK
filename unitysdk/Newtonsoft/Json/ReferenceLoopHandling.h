#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	enum class ReferenceLoopHandling : ::System::Int32
	{
		Error = 0,
		Ignore = 1,
		Serialize = 2,
	};
}
