#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	struct alignas(4) BezierCurve_PointAndDerivative
	{
		::UnityEngine::Vector3 Point; // 0x10
		::UnityEngine::Vector3 Derivative; // 0x1C
	};
}
