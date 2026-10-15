#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SkinnedGPUParticles/SkinnedGPUParticlesBehavior_CustomVertexStreams.h"
#include "unitysdk/RPG/Client/SkinnedGPUParticles/SkinnedGPUParticlesBehavior_MotionHandleMode.h"
namespace UnityEngine { class GPUParticlesRenderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLES_CTOR_OFFSET UNITYSDK_OFFSET(0xE0E7B40)

namespace RPG::Client::SkinnedGPUParticles
{
	class SkinnedGPUParticles
	{
	public:
		::UnityEngine::GPUParticlesRenderer* ParticlesRenderer; // 0x30
		::UnityEngine::SkinnedMeshRenderer* SkinnedMesh; // 0x38
		::System::Boolean SyncBounds; // 0x40
		::System::Byte _padding0[0x3];
		::RPG::Client::SkinnedGPUParticles::SkinnedGPUParticlesBehavior_MotionHandleMode MotionHandleMode; // 0x44
		::System::Single MotionDistanceLimit; // 0x48
		::RPG::Client::SkinnedGPUParticles::SkinnedGPUParticlesBehavior_CustomVertexStreams CustomVertexStreams; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLES_CTOR_OFFSET))(this);
		}

	};
}
