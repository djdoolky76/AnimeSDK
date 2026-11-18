#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class LoopSubdivisionProfileContext; }

#define MOLEMOLE_COMMANDLINELOOPSUBDIVISION_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0x127606E0)
#define MOLEMOLE_COMMANDLINELOOPSUBDIVISION_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0x12760800)
#define MOLEMOLE_COMMANDLINELOOPSUBDIVISION__CTOR_OFFSET UNITYSDK_OFFSET(0x127607C0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineLoopSubdivision_TypeDefinitionIndex = 48774;

	class CommandLineLoopSubdivision
	{
	public:
		::System::Nullable_1<::System::Boolean> enable; // 0x18
		::System::Nullable_1<::System::Boolean> IsGlobal; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINELOOPSUBDIVISION__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineLoopSubdivision* ALEKEEINDAO(::MoleMole::LoopSubdivisionProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineLoopSubdivision*(*)(::PVOID, ::MoleMole::LoopSubdivisionProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINELOOPSUBDIVISION_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::LoopSubdivisionProfileContext* PMKOMFHNKOE(::MoleMole::LoopSubdivisionProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::LoopSubdivisionProfileContext*(*)(::PVOID, ::MoleMole::LoopSubdivisionProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINELOOPSUBDIVISION_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
