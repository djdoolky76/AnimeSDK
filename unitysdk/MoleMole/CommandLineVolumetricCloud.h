#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFogQuality.h"

namespace MoleMole { class VolumetricCloudProfileContext; }

#define MOLEMOLE_COMMANDLINEVOLUMETRICCLOUD_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x11E72490)
#define MOLEMOLE_COMMANDLINEVOLUMETRICCLOUD_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x11E725A0)
#define MOLEMOLE_COMMANDLINEVOLUMETRICCLOUD__CTOR_OFFSET UNITYSDK_OFFSET(0x11E72560)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineVolumetricCloud_TypeDefinitionIndex = 50840;

	class CommandLineVolumetricCloud
	{
	public:
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality> VolumetricCloudSetting; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVOLUMETRICCLOUD__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineVolumetricCloud* ALEKEEINDAO(::MoleMole::VolumetricCloudProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineVolumetricCloud*(*)(::PVOID, ::MoleMole::VolumetricCloudProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVOLUMETRICCLOUD_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::VolumetricCloudProfileContext* PMKOMFHNKOE(::MoleMole::VolumetricCloudProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::VolumetricCloudProfileContext*(*)(::PVOID, ::MoleMole::VolumetricCloudProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVOLUMETRICCLOUD_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
