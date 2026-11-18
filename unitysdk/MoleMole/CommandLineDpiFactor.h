#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class DpiFactorProfileContext; }

#define MOLEMOLE_COMMANDLINEDPIFACTOR_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x11E72280)
#define MOLEMOLE_COMMANDLINEDPIFACTOR_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x11E72390)
#define MOLEMOLE_COMMANDLINEDPIFACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11E72350)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineDpiFactor_TypeDefinitionIndex = 72088;

	class CommandLineDpiFactor
	{
	public:
		::System::Nullable_1<::System::Single> DpiFactor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEDPIFACTOR__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineDpiFactor* ALEKEEINDAO(::MoleMole::DpiFactorProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineDpiFactor*(*)(::PVOID, ::MoleMole::DpiFactorProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEDPIFACTOR_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::DpiFactorProfileContext* PMKOMFHNKOE(::MoleMole::DpiFactorProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::DpiFactorProfileContext*(*)(::PVOID, ::MoleMole::DpiFactorProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEDPIFACTOR_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
