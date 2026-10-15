#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ParticleSystem_PlaybackState_Seed.h"

namespace UnityEngine
{
	struct alignas(4) ParticleSystem_PlaybackState_Emission
	{
		::System::Single m_ParticleSpacing; // 0x10
		::System::Single m_ToEmitAccumulator; // 0x14
		::UnityEngine::ParticleSystem_PlaybackState_Seed m_Random; // 0x18
	};
}
