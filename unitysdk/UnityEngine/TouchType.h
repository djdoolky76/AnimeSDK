#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class TouchType : ::System::Int32
	{
		Direct = 0,
		Indirect = 1,
		Stylus = 2,
	};
}
