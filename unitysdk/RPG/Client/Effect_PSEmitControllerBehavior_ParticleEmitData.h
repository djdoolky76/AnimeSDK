#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	struct alignas(4) Effect_PSEmitControllerBehavior_ParticleEmitData
	{
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Vector3 Scale; // 0x1C
		::UnityEngine::Vector3 Rotation; // 0x28
		::System::Single AnimDelay; // 0x34
	};
}
