#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowChessboardParticleModuleConfig.h"

class AENDIENHBKL;
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_CONFIG_HOLLOWPARTICLETEXTURESHEETANIMMODULECONFIG_CREATEMODULE_OFFSET UNITYSDK_OFFSET(0x192B1FC0)
#define MOLEMOLE_CONFIG_HOLLOWPARTICLETEXTURESHEETANIMMODULECONFIG_GETMODULEID_OFFSET UNITYSDK_OFFSET(0x192B20F0)
#define MOLEMOLE_CONFIG_HOLLOWPARTICLETEXTURESHEETANIMMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x192B21C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowParticleTextureSheetAnimModuleConfig_TypeDefinitionIndex = 51272;

	class HollowParticleTextureSheetAnimModuleConfig : public ::MoleMole::Config::HollowChessboardParticleModuleConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLETEXTURESHEETANIMMODULECONFIG__CTOR_OFFSET))(this);
		}

		::AENDIENHBKL* CreateModule(::UnityEngine::ParticleSystem* p)
		{
			return ((::AENDIENHBKL*(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLETEXTURESHEETANIMMODULECONFIG_CREATEMODULE_OFFSET))(this, p);
		}

		::System::Int32 GetModuleID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLETEXTURESHEETANIMMODULECONFIG_GETMODULEID_OFFSET))(this);
		}
	};
}
