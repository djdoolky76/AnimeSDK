#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EDOKGCBMFKB;
class HDBIKLMCCCK;
class KJFCNACELEB;
namespace MoleMole { class HadalSettlementSubsystem; }
namespace System { class Action; }

#define MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x180EDFF0)
#define MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__DISPLAYCLASS32_0__REQUESTDUNGEONSETTLEMENT_B__0_OFFSET UNITYSDK_OFFSET(0x180EE000)
#define MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__DISPLAYCLASS32_0__REQUESTDUNGEONSETTLEMENT_B__1_OFFSET UNITYSDK_OFFSET(0x180EE150)

namespace MoleMole
{
	inline static constexpr unsigned int HadalSettlementSubsystem___c__DisplayClass32_0_TypeDefinitionIndex = 50540;

	class HadalSettlementSubsystem___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::MoleMole::HadalSettlementSubsystem* __4__this; // 0x10
		::System::Action* onSettled; // 0x18
		::KJFCNACELEB* data; // 0x20
		::EDOKGCBMFKB* snapshot; // 0x28
		::System::Boolean giveUp; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestDungeonSettlement_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__DISPLAYCLASS32_0__REQUESTDUNGEONSETTLEMENT_B__0_OFFSET))(this);
		}

		::HDBIKLMCCCK* _RequestDungeonSettlement_b__1()
		{
			return ((::HDBIKLMCCCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALSETTLEMENTSUBSYSTEM___C__DISPLAYCLASS32_0__REQUESTDUNGEONSETTLEMENT_B__1_OFFSET))(this);
		}
	};
}
