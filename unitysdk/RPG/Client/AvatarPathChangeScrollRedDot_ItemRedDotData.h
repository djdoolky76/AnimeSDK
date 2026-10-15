#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	struct alignas(8) AvatarPathChangeScrollRedDot_ItemRedDotData
	{
		::UnityEngine::Transform* Root; // 0x10
		::UnityEngine::Transform* RedDotRoot; // 0x18
	};
}
