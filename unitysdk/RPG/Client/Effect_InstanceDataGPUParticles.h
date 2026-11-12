#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_InstanceDataGPUParticlesBehavior_InstanceDataRefreshMode.h"
class BCIAMPIIHPF;
namespace System { class String; }
namespace UnityEngine { class GPUParticlesRenderer; }

#define RPG_CLIENT_EFFECT_INSTANCEDATAGPUPARTICLES_CTOR_OFFSET UNITYSDK_OFFSET(0xD703AE0)
#define RPG_CLIENT_EFFECT_INSTANCEDATAGPUPARTICLES_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xD703A90)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InstanceDataGPUParticles_TypeDefinitionIndex = 72616;

	class Effect_InstanceDataGPUParticles
	{
	public:
		::UnityEngine::GPUParticlesRenderer* ParticlesRenderer; // 0x30
		::BCIAMPIIHPF* Controller; // 0x38
		::RPG::Client::Effect_InstanceDataGPUParticlesBehavior_InstanceDataRefreshMode RefreshMode; // 0x40
		::System::Single RefreshInterval; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEDATAGPUPARTICLES_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEDATAGPUPARTICLES_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
