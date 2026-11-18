#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NAPShaderQuality.h"

namespace MoleMole { class ShadingQualityProfileContext; }

#define MOLEMOLE_COMMANDLINESHADINGQUALITY_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x1651C0A0)
#define MOLEMOLE_COMMANDLINESHADINGQUALITY_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x1651C1B0)
#define MOLEMOLE_COMMANDLINESHADINGQUALITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1651C170)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineShadingQuality_TypeDefinitionIndex = 91103;

	class CommandLineShadingQuality
	{
	public:
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::NAPShaderQuality> Quality; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESHADINGQUALITY__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineShadingQuality* ALEKEEINDAO(::MoleMole::ShadingQualityProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineShadingQuality*(*)(::PVOID, ::MoleMole::ShadingQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESHADINGQUALITY_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::ShadingQualityProfileContext* PMKOMFHNKOE(::MoleMole::ShadingQualityProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::ShadingQualityProfileContext*(*)(::PVOID, ::MoleMole::ShadingQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESHADINGQUALITY_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
