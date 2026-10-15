#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class RigidbodyConstraints2D : ::System::Int32
	{
		None = 0,
		FreezePositionX = 1,
		FreezePositionY = 2,
		FreezeRotation = 4,
		FreezePosition = 3,
		FreezeAll = 7,
	};
}
