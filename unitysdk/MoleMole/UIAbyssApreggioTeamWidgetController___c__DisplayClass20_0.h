#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALDOKCCIFNB;
class MEKACGJBPGE;
namespace MoleMole { class UIAbyssApreggioTeamWidgetController; }
namespace MoleMole { class UILineupSelectContext; }

#define MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17E83650)
#define MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__DISPLAYCLASS20_0__GOTOBEGINBATTLE_B__0_OFFSET UNITYSDK_OFFSET(0x17E83DC0)
#define MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__DISPLAYCLASS20_0__GOTOBEGINBATTLE_B__2_OFFSET UNITYSDK_OFFSET(0x17E83660)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssApreggioTeamWidgetController___c__DisplayClass20_0_TypeDefinitionIndex = 86949;

	class UIAbyssApreggioTeamWidgetController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAbyssApreggioTeamWidgetController* __4__this; // 0x10
		::MoleMole::UILineupSelectContext* selectedPageData; // 0x18
		::MEKACGJBPGE* selectedConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _GotoBeginBattle_b__2(::ALDOKCCIFNB* data)
		{
			return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__DISPLAYCLASS20_0__GOTOBEGINBATTLE_B__2_OFFSET))(this, data);
		}

		::System::Void _GotoBeginBattle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__DISPLAYCLASS20_0__GOTOBEGINBATTLE_B__0_OFFSET))(this);
		}
	};
}
