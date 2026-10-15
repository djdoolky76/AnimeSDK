#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	enum class CinemachineCore_UpdateFilter : ::System::Int32
	{
		Fixed = 0,
		Late = 1,
		Smart = 8,
		SmartFixed = 8,
		SmartLate = 9,
	};
}
