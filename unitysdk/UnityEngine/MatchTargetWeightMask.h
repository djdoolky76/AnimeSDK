#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine
{
	struct alignas(4) MatchTargetWeightMask
	{
		::UnityEngine::Vector3 m_PositionXYZWeight; // 0x10
		::System::Single m_RotationWeight; // 0x1C
	};
}
