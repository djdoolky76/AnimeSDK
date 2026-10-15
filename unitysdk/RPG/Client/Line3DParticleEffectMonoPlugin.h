#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LINE3DPARTICLEEFFECTMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xD3EF630)

namespace RPG::Client
{
	inline static constexpr unsigned int Line3DParticleEffectMonoPlugin_TypeDefinitionIndex = 70643;

	class Line3DParticleEffectMonoPlugin
	{
	public:
		::UnityEngine::Transform* ground; // 0x30
		::UnityEngine::Transform* start; // 0x38
		::UnityEngine::Transform* end; // 0x40
		::System::Int32 maxParticle; // 0x48
		::System::Int32 bottomAngle; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINE3DPARTICLEEFFECTMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
