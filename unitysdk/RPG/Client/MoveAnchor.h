#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	struct alignas(8) MoveAnchor
	{
		::UnityEngine::Transform* Anchor; // 0x10
		::System::Single MoveSpeed; // 0x18
	};
}
