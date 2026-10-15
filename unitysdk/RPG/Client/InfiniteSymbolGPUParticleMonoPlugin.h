#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class GPUParticlesAsset; }

#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xD34F3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int InfiniteSymbolGPUParticleMonoPlugin_TypeDefinitionIndex = 70312;

	class InfiniteSymbolGPUParticleMonoPlugin
	{
	public:
		::UnityEngine::GPUParticlesAsset* ParticlesAsset; // 0x30
		::UnityEngine::ComputeShader* ComputeShaderOverride; // 0x38
		::System::Boolean SyncBounds; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 RandomSeed; // 0x44
		::System::String* SpawnKernelName; // 0x48
		::System::String* UpdateKernelName; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
