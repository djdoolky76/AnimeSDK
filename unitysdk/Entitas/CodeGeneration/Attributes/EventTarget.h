#pragma once
#include "unitysdk/unitysdk.h"

namespace Entitas::CodeGeneration::Attributes
{
	enum class EventTarget : ::System::Int32
	{
		Any = 0,
		Self = 1,
	};
}
