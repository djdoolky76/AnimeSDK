#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Components
{
	enum class BGCcCursorObjectRotate_RotationUpEnum : ::System::Int32
	{
		WorldUp = 0,
		WorldCustom = 1,
		LocalUp = 2,
		LocalCustom = 3,
		TargetParentUp = 4,
		TargetParentUpCustom = 5,
	};
}
