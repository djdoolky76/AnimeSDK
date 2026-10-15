#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	enum class InControlUpdateMode : ::System::Int32
	{
		Default = 0,
		FixedUpdate = 1,
		Manual = 2,
	};
}
