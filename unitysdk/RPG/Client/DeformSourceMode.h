#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class DeformSourceMode : ::System::Int32
	{
		None = 0,
		QuadDeform = 1,
		LinearDeform = 2,
	};
}
