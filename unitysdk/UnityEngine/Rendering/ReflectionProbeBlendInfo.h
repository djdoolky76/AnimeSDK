#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class ReflectionProbe; }

namespace UnityEngine::Rendering
{
	struct alignas(8) ReflectionProbeBlendInfo
	{
		::UnityEngine::ReflectionProbe* probe; // 0x10
		::System::Single weight; // 0x18
	};
}
