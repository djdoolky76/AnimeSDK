#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_EFFECT_PARTICLEVELOCITYCONTROLBEHAVIOR_PARTICLECONTROLCONTENT_CTOR_OFFSET UNITYSDK_OFFSET(0xCD5BC80)

namespace RPG::Client
{
	class Effect_ParticleVelocityControlBehavior_ParticleControlContent : public ::System::Object
	{
	public:
		::UnityEngine::ParticleSystem* ParticleSystem; // 0x10
		::System::Single Velocity; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PARTICLEVELOCITYCONTROLBEHAVIOR_PARTICLECONTROLCONTENT_CTOR_OFFSET))(this);
		}

	};
}
