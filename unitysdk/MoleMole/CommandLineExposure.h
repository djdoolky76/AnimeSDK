#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class ExposureProfileContext; }

#define MOLEMOLE_COMMANDLINEEXPOSURE_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x11A55380)
#define MOLEMOLE_COMMANDLINEEXPOSURE_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x11A55490)
#define MOLEMOLE_COMMANDLINEEXPOSURE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A55450)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineExposure_TypeDefinitionIndex = 50967;

	class CommandLineExposure
	{
	public:
		::System::Nullable_1<::System::Boolean> exposureBeforeBloom; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEEXPOSURE__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineExposure* ALEKEEINDAO(::MoleMole::ExposureProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineExposure*(*)(::PVOID, ::MoleMole::ExposureProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEEXPOSURE_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::ExposureProfileContext* PMKOMFHNKOE(::MoleMole::ExposureProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::ExposureProfileContext*(*)(::PVOID, ::MoleMole::ExposureProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEEXPOSURE_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
