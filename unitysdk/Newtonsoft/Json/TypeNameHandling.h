#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	enum class TypeNameHandling : ::System::Int32
	{
		None = 0,
		Objects = 1,
		Arrays = 2,
		All = 3,
		Auto = 4,
	};
}
