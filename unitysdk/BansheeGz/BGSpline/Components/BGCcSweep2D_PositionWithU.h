#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Components
{
	struct alignas(4) BGCcSweep2D_PositionWithU
	{
		::UnityEngine::Vector3 Position; // 0x10
		::System::Single U; // 0x1C
	};
}
