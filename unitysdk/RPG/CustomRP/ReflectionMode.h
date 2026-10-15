#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	enum class ReflectionMode : ::System::Int32
	{
		None = 0,
		Decal = 1,
		Blend = 2,
		Renderer = 3,
	};
}
