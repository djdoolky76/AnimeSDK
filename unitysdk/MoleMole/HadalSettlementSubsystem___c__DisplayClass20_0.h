#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMKIGGIHIOA.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HadalSettlementSubsystem; }

#define MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16258E40)
#define MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__DISPLAYCLASS20_0__TRYGIVEUPANDTHEN_B__0_OFFSET UNITYSDK_OFFSET(0x16258E50)

namespace MoleMole
{
	inline static constexpr unsigned int HadalSettlementSubsystem___c__DisplayClass20_0_TypeDefinitionIndex = 50541;

	class HadalSettlementSubsystem___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::HadalSettlementSubsystem* __4__this; // 0x10
		::BMKIGGIHIOA action; // 0x18
		::System::Int32 dungeonId; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryGiveUpAndThen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__DISPLAYCLASS20_0__TRYGIVEUPANDTHEN_B__0_OFFSET))(this);
		}
	};
}
