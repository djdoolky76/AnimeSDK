#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABGachaItemWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIRABGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE40A0)
#define MOLEMOLE_UIRABGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__PLAYITEMFADEINANIM_B__0_OFFSET UNITYSDK_OFFSET(0x18EE40B0)
#define MOLEMOLE_UIRABGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__PLAYITEMFADEINANIM_B__1_OFFSET UNITYSDK_OFFSET(0x18EE42D0)
#define MOLEMOLE_UIRABGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__PLAYITEMFADEINANIM_B__2_OFFSET UNITYSDK_OFFSET(0x18EE4210)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABGachaItemWidgetController___c__DisplayClass23_0_TypeDefinitionIndex = 51893;

	class UIRABGachaItemWidgetController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRABGachaItemWidgetController* __4__this; // 0x10
		::System::Action* __9__2; // 0x18
		::System::Single activateAnimDelay; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayItemFadeInAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__PLAYITEMFADEINANIM_B__0_OFFSET))(this);
		}

		::System::Void _PlayItemFadeInAnim_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__PLAYITEMFADEINANIM_B__2_OFFSET))(this);
		}

		::System::Void _PlayItemFadeInAnim_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS23_0__PLAYITEMFADEINANIM_B__1_OFFSET))(this);
		}
	};
}
