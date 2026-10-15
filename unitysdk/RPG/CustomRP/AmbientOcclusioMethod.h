#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	enum class AmbientOcclusioMethod : ::System::Int32
	{
		None = 0,
		SSAO = 1,
		HBAO = 2,
		GTAO = 3,
	};
}
