#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PPPCILCGFLK.h"

namespace MoleMole { class UIPlayerSkinSwitchWidgetController; }

#define MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16798950)
#define MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS11_0__SWITCHTOSKIN_B__0_OFFSET UNITYSDK_OFFSET(0x16798960)
#define MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS11_0__SWITCHTOSKIN_B__1_OFFSET UNITYSDK_OFFSET(0x16798970)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerSkinSwitchWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 61258;

	class UIPlayerSkinSwitchWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPlayerSkinSwitchWidgetController* __4__this; // 0x10
		::System::Int32 skinID; // 0x18
		::System::Int32 avatarID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SwitchToSkin_b__0(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS11_0__SWITCHTOSKIN_B__0_OFFSET))(this, x);
		}

		::System::Boolean _SwitchToSkin_b__1(::PPPCILCGFLK x)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPPCILCGFLK))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS11_0__SWITCHTOSKIN_B__1_OFFSET))(this, x);
		}
	};
}
