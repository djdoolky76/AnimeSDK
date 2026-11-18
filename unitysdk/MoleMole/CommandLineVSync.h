#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class VSyncProfileContext; }

#define MOLEMOLE_COMMANDLINEVSYNC_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x131C5DC0)
#define MOLEMOLE_COMMANDLINEVSYNC_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x131C5ED0)
#define MOLEMOLE_COMMANDLINEVSYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x131C5E90)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineVSync_TypeDefinitionIndex = 41730;

	class CommandLineVSync
	{
	public:
		::System::Nullable_1<::System::Boolean> IsEnabled; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVSYNC__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineVSync* ALEKEEINDAO(::MoleMole::VSyncProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineVSync*(*)(::PVOID, ::MoleMole::VSyncProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVSYNC_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::VSyncProfileContext* PMKOMFHNKOE(::MoleMole::VSyncProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::VSyncProfileContext*(*)(::PVOID, ::MoleMole::VSyncProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEVSYNC_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
