#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PJNHLNABMDA;
namespace MoleMole { class HadalSettlementSubsystem; }

#define MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x180EDFB0)
#define MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__DISPLAYCLASS22_0__TRYBEGINSETTLEMENT_B__0_OFFSET UNITYSDK_OFFSET(0x180EDFC0)

namespace MoleMole
{
	inline static constexpr unsigned int HadalSettlementSubsystem___c__DisplayClass22_0_TypeDefinitionIndex = 50539;

	class HadalSettlementSubsystem___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::PJNHLNABMDA* presentation; // 0x10
		::MoleMole::HadalSettlementSubsystem* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryBeginSettlement_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__DISPLAYCLASS22_0__TRYBEGINSETTLEMENT_B__0_OFFSET))(this);
		}
	};
}
