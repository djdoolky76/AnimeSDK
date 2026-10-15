#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Curve
{
	enum class BGCurve_PointsModeEnum : ::System::Int32
	{
		Inlined = 0,
		Components = 1,
		GameObjectsNoTransform = 2,
		GameObjectsTransform = 3,
	};
}
