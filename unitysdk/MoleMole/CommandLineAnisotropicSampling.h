#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/NapAnisotropicSamplingType.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class AnisotropicSamplingProfileContext; }

#define MOLEMOLE_COMMANDLINEANISOTROPICSAMPLING_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x11E71F40)
#define MOLEMOLE_COMMANDLINEANISOTROPICSAMPLING_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x11E72050)
#define MOLEMOLE_COMMANDLINEANISOTROPICSAMPLING__CTOR_OFFSET UNITYSDK_OFFSET(0x11E72010)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineAnisotropicSampling_TypeDefinitionIndex = 44565;

	class CommandLineAnisotropicSampling
	{
	public:
		::System::Nullable_1<::MoleMole::NapAnisotropicSamplingType> AnisotropicSamplingType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEANISOTROPICSAMPLING__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineAnisotropicSampling* ALEKEEINDAO(::MoleMole::AnisotropicSamplingProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineAnisotropicSampling*(*)(::PVOID, ::MoleMole::AnisotropicSamplingProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEANISOTROPICSAMPLING_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::AnisotropicSamplingProfileContext* PMKOMFHNKOE(::MoleMole::AnisotropicSamplingProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::AnisotropicSamplingProfileContext*(*)(::PVOID, ::MoleMole::AnisotropicSamplingProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEANISOTROPICSAMPLING_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
