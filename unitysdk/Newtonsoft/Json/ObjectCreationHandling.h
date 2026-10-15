#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	enum class ObjectCreationHandling : ::System::Int32
	{
		Auto = 0,
		Reuse = 1,
		Replace = 2,
	};
}
