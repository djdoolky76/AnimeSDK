#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class PhysicMaterialCombine : ::System::Int32
	{
		Average = 0,
		Minimum = 2,
		Multiply = 1,
		Maximum = 3,
	};
}
