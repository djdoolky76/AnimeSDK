#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class Texture; }

namespace RPG::Client
{
	struct alignas(8) EnvironmentProbeSettings
	{
		::System::String* ReflectionProbePath; // 0x10
		::UnityEngine::Texture* Texture; // 0x18
	};
}
