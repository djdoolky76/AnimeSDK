#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALDOKCCIFNB;
class BPHGNMNLLHF;
class MEKACGJBPGE;
namespace MoleMole { class UILineupSelectContext; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace MoleMole { class UIYorozuyaAbyssWidgetController; }

#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13E81200)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GOTOBEGINBATTLE_B__0_OFFSET UNITYSDK_OFFSET(0x13E81BB0)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GOTOBEGINBATTLE_B__1_OFFSET UNITYSDK_OFFSET(0x13E81210)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GOTOBEGINBATTLE_B__3_OFFSET UNITYSDK_OFFSET(0x13E81530)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaAbyssWidgetController___c__DisplayClass70_0_TypeDefinitionIndex = 61564;

	class UIYorozuyaAbyssWidgetController___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::MEKACGJBPGE* selectedConfig; // 0x10
		::MoleMole::UIYorozuyaAbyssWidgetController* __4__this; // 0x18
		::MoleMole::UILineupSelectContext* selectedPageData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
		}

		::MoleMole::UIRoleSelectPageContext* _GotoBeginBattle_b__1(::System::Int32 selectIndex, ::Il2CppArray<::BPHGNMNLLHF*>* currentSelected)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::BPHGNMNLLHF*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GOTOBEGINBATTLE_B__1_OFFSET))(this, selectIndex, currentSelected);
		}

		::System::Void _GotoBeginBattle_b__3(::ALDOKCCIFNB* data)
		{
			return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GOTOBEGINBATTLE_B__3_OFFSET))(this, data);
		}

		::System::Void _GotoBeginBattle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GOTOBEGINBATTLE_B__0_OFFSET))(this);
		}
	};
}
