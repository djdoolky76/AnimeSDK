#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HCBFNKIPOPJ;
namespace MoleMole { class UIHandBookBattlefieldWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C3E2A0)
#define MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__DISPLAYCLASS25_0__REFRESHSHOPPOPUP_B__0_OFFSET UNITYSDK_OFFSET(0x19C3E2B0)
#define MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__DISPLAYCLASS25_0__REFRESHSHOPPOPUP_B__2_OFFSET UNITYSDK_OFFSET(0x19C3E740)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookBattlefieldWidgetController___c__DisplayClass25_0_TypeDefinitionIndex = 76239;

	class UIHandBookBattlefieldWidgetController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::HCBFNKIPOPJ* shopModel; // 0x10
		::System::Action* __9__2; // 0x18
		::MoleMole::UIHandBookBattlefieldWidgetController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshShopPopup_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__DISPLAYCLASS25_0__REFRESHSHOPPOPUP_B__0_OFFSET))(this);
		}

		::System::Void _RefreshShopPopup_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__DISPLAYCLASS25_0__REFRESHSHOPPOPUP_B__2_OFFSET))(this);
		}
	};
}
