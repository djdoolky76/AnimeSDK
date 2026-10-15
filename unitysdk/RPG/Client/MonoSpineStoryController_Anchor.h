#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	struct alignas(8) MonoSpineStoryController_Anchor
	{
		::System::String* uniqueName; // 0x10
		::UnityEngine::Transform* origin; // 0x18
	};
}
