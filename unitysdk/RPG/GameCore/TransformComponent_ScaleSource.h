#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TransformComponent_ScaleSource : ::System::Int32
	{
		Self = 0,
		Attach = 1,
		Multiply = 2,
	};
}
