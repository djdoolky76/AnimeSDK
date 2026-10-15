#pragma once
#include "unitysdk/unitysdk.h"

namespace Entitas::CodeGeneration::Attributes
{
	enum class CleanupMode : ::System::Int32
	{
		RemoveComponent = 0,
		DestroyEntity = 1,
	};
}
