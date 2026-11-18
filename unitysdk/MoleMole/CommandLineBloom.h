#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class BloomProfileContext; }

#define MOLEMOLE_COMMANDLINEBLOOM_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x192250D0)
#define MOLEMOLE_COMMANDLINEBLOOM_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x192251E0)
#define MOLEMOLE_COMMANDLINEBLOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x192251A0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineBloom_TypeDefinitionIndex = 71845;

	class CommandLineBloom
	{
	public:
		::System::Nullable_1<::System::Boolean> IsBloomOn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEBLOOM__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineBloom* ALEKEEINDAO(::MoleMole::BloomProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineBloom*(*)(::PVOID, ::MoleMole::BloomProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEBLOOM_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::BloomProfileContext* PMKOMFHNKOE(::MoleMole::BloomProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::BloomProfileContext*(*)(::PVOID, ::MoleMole::BloomProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEBLOOM_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
