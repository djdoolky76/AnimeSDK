#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SSAOQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ShadowQuality.h"

namespace MoleMole { class ShadowQualityProfileContext; }

#define MOLEMOLE_COMMANDLINESHADOWQUALITY_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x12760980)
#define MOLEMOLE_COMMANDLINESHADOWQUALITY_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x12760AB0)
#define MOLEMOLE_COMMANDLINESHADOWQUALITY__CTOR_OFFSET UNITYSDK_OFFSET(0x12760A70)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineShadowQuality_TypeDefinitionIndex = 58899;

	class CommandLineShadowQuality
	{
	public:
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::ShadowQuality> ShadowQualitySetting; // 0x18
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::SSAOQuality> SSAOMaxQuality; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESHADOWQUALITY__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineShadowQuality* ALEKEEINDAO(::MoleMole::ShadowQualityProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineShadowQuality*(*)(::PVOID, ::MoleMole::ShadowQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESHADOWQUALITY_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::ShadowQualityProfileContext* PMKOMFHNKOE(::MoleMole::ShadowQualityProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::ShadowQualityProfileContext*(*)(::PVOID, ::MoleMole::ShadowQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINESHADOWQUALITY_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
