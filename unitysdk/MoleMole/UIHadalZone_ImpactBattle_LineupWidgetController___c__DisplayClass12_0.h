#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALDOKCCIFNB;
namespace MoleMole { class UIHadalZone_ImpactBattle_LineupWidgetController; }
namespace MoleMole { class UILineupSelectContext; }

#define MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x184D8620)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_0__OPENSELECTROLEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x184D8C40)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_0__OPENSELECTROLEPAGE_B__1_OFFSET UNITYSDK_OFFSET(0x184D8630)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_0__OPENSELECTROLEPAGE_B__3_OFFSET UNITYSDK_OFFSET(0x184D8B40)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_0__OPENSELECTROLEPAGE_B__4_OFFSET UNITYSDK_OFFSET(0x184D8BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_ImpactBattle_LineupWidgetController___c__DisplayClass12_0_TypeDefinitionIndex = 48663;

	class UIHadalZone_ImpactBattle_LineupWidgetController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UILineupSelectContext* lineupSelectPageContext; // 0x10
		::MoleMole::UIHadalZone_ImpactBattle_LineupWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenSelectRolePage_b__1(::ALDOKCCIFNB* data)
		{
			return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_0__OPENSELECTROLEPAGE_B__1_OFFSET))(this, data);
		}

		::System::Boolean _OpenSelectRolePage_b__3(::System::Int32 avatarId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_0__OPENSELECTROLEPAGE_B__3_OFFSET))(this, avatarId);
		}

		::System::Boolean _OpenSelectRolePage_b__4(::System::Int32 buddyId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_0__OPENSELECTROLEPAGE_B__4_OFFSET))(this, buddyId);
		}

		::System::Void _OpenSelectRolePage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_0__OPENSELECTROLEPAGE_B__0_OFFSET))(this);
		}
	};
}
