#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOIEABGMPAM.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDataAdjustGameWidgetController; }

#define MOLEMOLE_UIDATAADJUSTGAMEWIDGETCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17065660)
#define MOLEMOLE_UIDATAADJUSTGAMEWIDGETCONTROLLER___C__DISPLAYCLASS34_0__ONWIN_B__0_OFFSET UNITYSDK_OFFSET(0x17065670)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataAdjustGameWidgetController___c__DisplayClass34_0_TypeDefinitionIndex = 89601;

	class UIDataAdjustGameWidgetController___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDataAdjustGameWidgetController* __4__this; // 0x10
		::AOIEABGMPAM result; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAADJUSTGAMEWIDGETCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnWin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAADJUSTGAMEWIDGETCONTROLLER___C__DISPLAYCLASS34_0__ONWIN_B__0_OFFSET))(this);
		}
	};
}
