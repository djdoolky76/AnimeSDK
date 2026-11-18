#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFogQuality.h"

namespace MoleMole { class VolumetricFogProfileContext; }

#define MOLEMOLE_COMMANDLINEVOLUMETRICFOG_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x131C5FD0)
#define MOLEMOLE_COMMANDLINEVOLUMETRICFOG_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x131C60E0)
#define MOLEMOLE_COMMANDLINEVOLUMETRICFOG__CTOR_OFFSET UNITYSDK_OFFSET(0x131C60A0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineVolumetricFog_TypeDefinitionIndex = 82177;

	class CommandLineVolumetricFog
	{
	public:
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality> VolumetricFogSetting; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVOLUMETRICFOG__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineVolumetricFog* ALEKEEINDAO(::MoleMole::VolumetricFogProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineVolumetricFog*(*)(::PVOID, ::MoleMole::VolumetricFogProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVOLUMETRICFOG_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::VolumetricFogProfileContext* PMKOMFHNKOE(::MoleMole::VolumetricFogProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::VolumetricFogProfileContext*(*)(::PVOID, ::MoleMole::VolumetricFogProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVOLUMETRICFOG_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
