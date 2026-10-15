#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK
{
	struct alignas(4) Grounding_Leg_PhysicsLockInfo
	{
		::System::Single Y; // 0x10
		::UnityEngine::Vector3 Normal; // 0x14
	};
}
