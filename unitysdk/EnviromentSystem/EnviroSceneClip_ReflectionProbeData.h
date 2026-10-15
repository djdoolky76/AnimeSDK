#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class Cubemap; }

namespace EnviromentSystem
{
	struct alignas(8) EnviroSceneClip_ReflectionProbeData
	{
		::UnityEngine::Cubemap* map; // 0x10
		::System::String* path; // 0x18
		::System::Single intensity; // 0x20
	};
}
