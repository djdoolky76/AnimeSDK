#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	enum class Clipping_OutCode : ::System::Int32
	{
		Inside = 0,
		Left = 1,
		Right = 2,
		Bottom = 4,
		Top = 8,
	};
}
