#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Transform; }

namespace Cinemachine
{
	struct alignas(8) CinemachineTargetGroup_Target
	{
		::UnityEngine::Transform* target; // 0x10
		::System::Single weight; // 0x18
		::System::Single radius; // 0x1C
	};
}
