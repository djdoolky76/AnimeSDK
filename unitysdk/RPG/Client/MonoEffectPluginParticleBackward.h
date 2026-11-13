#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class BOGLEMMMDAC;

#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x193A9C70)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_CTOR_OFFSET UNITYSDK_OFFSET(0x193A9ED0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x193A9E70)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x193A9DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginParticleBackward_TypeDefinitionIndex = 72052;

	class MonoEffectPluginParticleBackward : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 MaxFrameCount; // 0x18
		::System::Byte _padding0[0x4];
		::BOGLEMMMDAC* KADDKEGNCHE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_LATEUPDATE_OFFSET))(this);
		}

	};
}
