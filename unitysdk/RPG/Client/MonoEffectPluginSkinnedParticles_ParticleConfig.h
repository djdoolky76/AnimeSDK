#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_MONOEFFECTPLUGINSKINNEDPARTICLES_PARTICLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x193B2B30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginSkinnedParticles_ParticleConfig_TypeDefinitionIndex = 71979;

	class MonoEffectPluginSkinnedParticles_ParticleConfig : public ::System::Object
	{
	public:
		::UnityEngine::ParticleSystem* Particles; // 0x10
		::System::String* SkinnedMesh; // 0x18
		::System::Boolean SingleMaterial; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 MaterialIndex; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSKINNEDPARTICLES_PARTICLECONFIG_CTOR_OFFSET))(this);
		}

	};
}
