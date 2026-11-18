#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class DOFProfileContext; }

#define MOLEMOLE_COMMANDLINEDOF_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x11A55170)
#define MOLEMOLE_COMMANDLINEDOF_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x11A55280)
#define MOLEMOLE_COMMANDLINEDOF__CTOR_OFFSET UNITYSDK_OFFSET(0x11A55240)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineDOF_TypeDefinitionIndex = 74400;

	class CommandLineDOF
	{
	public:
		::System::Nullable_1<::System::Boolean> enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEDOF__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineDOF* ALEKEEINDAO(::MoleMole::DOFProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineDOF*(*)(::PVOID, ::MoleMole::DOFProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEDOF_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::DOFProfileContext* PMKOMFHNKOE(::MoleMole::DOFProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::DOFProfileContext*(*)(::PVOID, ::MoleMole::DOFProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEDOF_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
