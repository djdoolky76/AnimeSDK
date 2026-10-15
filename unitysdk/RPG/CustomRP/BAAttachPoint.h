#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Transform; }

namespace RPG::CustomRP
{
	struct alignas(8) BAAttachPoint
	{
		::UnityEngine::Transform* trans; // 0x10
		::System::Int32 boneIndex; // 0x18
	};
}
