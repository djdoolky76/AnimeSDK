#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ENapGIQuality.h"

namespace MoleMole { class GlobalIlluminationProfileContext; }

#define MOLEMOLE_COMMANDLINEGLOBALILLUMINATION_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x131C5A70)
#define MOLEMOLE_COMMANDLINEGLOBALILLUMINATION_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x131C5B80)
#define MOLEMOLE_COMMANDLINEGLOBALILLUMINATION__CTOR_OFFSET UNITYSDK_OFFSET(0x131C5B40)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineGlobalIllumination_TypeDefinitionIndex = 66617;

	class CommandLineGlobalIllumination
	{
	public:
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::ENapGIQuality> GIQuality; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEGLOBALILLUMINATION__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineGlobalIllumination* ALEKEEINDAO(::MoleMole::GlobalIlluminationProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineGlobalIllumination*(*)(::PVOID, ::MoleMole::GlobalIlluminationProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEGLOBALILLUMINATION_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::GlobalIlluminationProfileContext* PMKOMFHNKOE(::MoleMole::GlobalIlluminationProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::GlobalIlluminationProfileContext*(*)(::PVOID, ::MoleMole::GlobalIlluminationProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEGLOBALILLUMINATION_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
