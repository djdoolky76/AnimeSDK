#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowChessboardParticleModuleConfig.h"

class AENDIENHBKL;
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_CONFIG_HOLLOWPARTICLEINITIALMODULECONFIG_CREATEMODULE_OFFSET UNITYSDK_OFFSET(0x1C6E3160)
#define MOLEMOLE_CONFIG_HOLLOWPARTICLEINITIALMODULECONFIG_GETMODULEID_OFFSET UNITYSDK_OFFSET(0x1C6E3240)
#define MOLEMOLE_CONFIG_HOLLOWPARTICLEINITIALMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E3310)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowParticleInitialModuleConfig_TypeDefinitionIndex = 90028;

	class HollowParticleInitialModuleConfig : public ::MoleMole::Config::HollowChessboardParticleModuleConfig
	{
	public:
		::System::Boolean Loop; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLEINITIALMODULECONFIG__CTOR_OFFSET))(this);
		}

		::AENDIENHBKL* CreateModule(::UnityEngine::ParticleSystem* p)
		{
			return ((::AENDIENHBKL*(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLEINITIALMODULECONFIG_CREATEMODULE_OFFSET))(this, p);
		}

		::System::Int32 GetModuleID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLEINITIALMODULECONFIG_GETMODULEID_OFFSET))(this);
		}
	};
}
