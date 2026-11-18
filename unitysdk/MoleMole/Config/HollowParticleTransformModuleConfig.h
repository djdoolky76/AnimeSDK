#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowChessboardParticleModuleConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AENDIENHBKL;
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_CONFIG_HOLLOWPARTICLETRANSFORMMODULECONFIG_CREATEMODULE_OFFSET UNITYSDK_OFFSET(0x1C6E3390)
#define MOLEMOLE_CONFIG_HOLLOWPARTICLETRANSFORMMODULECONFIG_GETMODULEID_OFFSET UNITYSDK_OFFSET(0x1C6E3530)
#define MOLEMOLE_CONFIG_HOLLOWPARTICLETRANSFORMMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E3600)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowParticleTransformModuleConfig_TypeDefinitionIndex = 78494;

	class HollowParticleTransformModuleConfig : public ::MoleMole::Config::HollowChessboardParticleModuleConfig
	{
	public:
		::UnityEngine::Vector3 LocalPosOffset; // 0x18
		::UnityEngine::Vector3 LocalRotOffset; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLETRANSFORMMODULECONFIG__CTOR_OFFSET))(this);
		}

		::AENDIENHBKL* CreateModule(::UnityEngine::ParticleSystem* p)
		{
			return ((::AENDIENHBKL*(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLETRANSFORMMODULECONFIG_CREATEMODULE_OFFSET))(this, p);
		}

		::System::Int32 GetModuleID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLETRANSFORMMODULECONFIG_GETMODULEID_OFFSET))(this);
		}
	};
}
