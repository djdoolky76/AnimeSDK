#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::EventSystems
{
	enum class MoveDirection : ::System::Int32
	{
		Left = 0,
		Up = 1,
		Right = 2,
		Down = 3,
		None = 4,
	};
}
