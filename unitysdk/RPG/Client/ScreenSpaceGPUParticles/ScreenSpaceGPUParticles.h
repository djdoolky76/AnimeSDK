#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::ScreenSpaceGPUParticles { class ScreenSpaceGPUParticlesEmitter; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GPUParticlesRenderer; }

#define RPG_CLIENT_SCREENSPACEGPUPARTICLES_SCREENSPACEGPUPARTICLES_CTOR_OFFSET UNITYSDK_OFFSET(0xE0A8880)

namespace RPG::Client::ScreenSpaceGPUParticles
{
	class ScreenSpaceGPUParticles
	{
	public:
		::UnityEngine::GPUParticlesRenderer* ParticlesRenderer; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::ScreenSpaceGPUParticles::ScreenSpaceGPUParticlesEmitter*>* Emitters; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENSPACEGPUPARTICLES_SCREENSPACEGPUPARTICLES_CTOR_OFFSET))(this);
		}

	};
}
