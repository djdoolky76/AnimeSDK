#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BAMCLBBFMBD;
namespace MoleMole { class UIAutoBattleEquipIconWidgetController; }

#define MOLEMOLE_UIAUTOBATTLEEQUIPICONWIDGETCONTROLLER___C__DISPLAYCLASS16_0__BINDITEMDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1886CA30)
#define MOLEMOLE_UIAUTOBATTLEEQUIPICONWIDGETCONTROLLER___C__DISPLAYCLASS16_0__BINDITEMDATA_B__1_OFFSET UNITYSDK_OFFSET(0x1886CB40)
#define MOLEMOLE_UIAUTOBATTLEEQUIPICONWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1886CA20)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleEquipIconWidgetController___c__DisplayClass16_0_TypeDefinitionIndex = 42591;

	class UIAutoBattleEquipIconWidgetController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAutoBattleEquipIconWidgetController* __4__this; // 0x10
		::BAMCLBBFMBD* itemData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEEQUIPICONWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _BindItemData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEEQUIPICONWIDGETCONTROLLER___C__DISPLAYCLASS16_0__BINDITEMDATA_B__0_OFFSET))(this);
		}

		::System::Void _BindItemData_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEEQUIPICONWIDGETCONTROLLER___C__DISPLAYCLASS16_0__BINDITEMDATA_B__1_OFFSET))(this);
		}
	};
}
