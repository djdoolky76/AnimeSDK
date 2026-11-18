#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovReplenishDialogPopWindowController; }

#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS112_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1286ADD0)
#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS112_1__ONCLICKCRAFTBTN_B__0_OFFSET UNITYSDK_OFFSET(0x1286ADE0)
#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS112_1__ONCLICKCRAFTBTN_B__1_OFFSET UNITYSDK_OFFSET(0x1286AE30)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWorkbenchDialogPageController___c__DisplayClass112_1_TypeDefinitionIndex = 78523;

	template <typename T>
	class UIZenkovWorkbenchDialogPageController___c__DisplayClass112_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::MoleMole::UIZenkovReplenishDialogPopWindowController* replenishDialog; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS112_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickCraftBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS112_1__ONCLICKCRAFTBTN_B__0_OFFSET))(this);
		}

		::System::Void _OnClickCraftBtn_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS112_1__ONCLICKCRAFTBTN_B__1_OFFSET))(this);
		}
	};
}
