#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/HumanLimit.h"
namespace System { class String; }

namespace UnityEngine
{
	struct alignas(8) HumanBone
	{
		::System::String* m_BoneName; // 0x10
		::System::String* m_HumanName; // 0x18
		::UnityEngine::HumanLimit limit; // 0x20
	};
}
