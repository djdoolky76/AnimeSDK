#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ParticleSystem_PlaybackState_Seed.h"

namespace UnityEngine
{
	struct alignas(4) ParticleSystem_PlaybackState_Seed4
	{
		::UnityEngine::ParticleSystem_PlaybackState_Seed x; // 0x10
		::UnityEngine::ParticleSystem_PlaybackState_Seed y; // 0x20
		::UnityEngine::ParticleSystem_PlaybackState_Seed z; // 0x30
		::UnityEngine::ParticleSystem_PlaybackState_Seed w; // 0x40
	};
}
