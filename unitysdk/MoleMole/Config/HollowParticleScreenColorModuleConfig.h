#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowChessboardParticleModuleConfig.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyBlendData.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyInfo.h"
#include "unitysdk/System/Nullable_1.h"

class AENDIENHBKL;
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_CONFIG_HOLLOWPARTICLESCREENCOLORMODULECONFIG_CREATEMODULE_OFFSET UNITYSDK_OFFSET(0x16543BF0)
#define MOLEMOLE_CONFIG_HOLLOWPARTICLESCREENCOLORMODULECONFIG_GETMODULEID_OFFSET UNITYSDK_OFFSET(0x16543D90)
#define MOLEMOLE_CONFIG_HOLLOWPARTICLESCREENCOLORMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16543E60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowParticleScreenColorModuleConfig_TypeDefinitionIndex = 41750;

	class HollowParticleScreenColorModuleConfig : public ::MoleMole::Config::HollowChessboardParticleModuleConfig
	{
	public:
		::System::Nullable_1<::MoleMole::HollowChessboard::ColorModifyBlendData> BlendData; // 0x18
		::System::Byte _padding0[0x38];
		::MoleMole::HollowChessboard::ColorModifyInfo ColorModifyInfoData; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLESCREENCOLORMODULECONFIG__CTOR_OFFSET))(this);
		}

		::AENDIENHBKL* CreateModule(::UnityEngine::ParticleSystem* p)
		{
			return ((::AENDIENHBKL*(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLESCREENCOLORMODULECONFIG_CREATEMODULE_OFFSET))(this, p);
		}

		::System::Int32 GetModuleID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPARTICLESCREENCOLORMODULECONFIG_GETMODULEID_OFFSET))(this);
		}
	};
}
