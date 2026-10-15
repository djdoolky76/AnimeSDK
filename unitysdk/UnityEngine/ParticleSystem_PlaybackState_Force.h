#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ParticleSystem_PlaybackState_Seed4.h"

namespace UnityEngine
{
	struct alignas(4) ParticleSystem_PlaybackState_Force
	{
		::UnityEngine::ParticleSystem_PlaybackState_Seed4 m_Random; // 0x10
	};
}
