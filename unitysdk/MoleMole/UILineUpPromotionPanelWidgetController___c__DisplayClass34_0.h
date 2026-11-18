#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILineUpPromotionPanelWidgetController; }

#define MOLEMOLE_UILINEUPPROMOTIONPANELWIDGETCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17612780)
#define MOLEMOLE_UILINEUPPROMOTIONPANELWIDGETCONTROLLER___C__DISPLAYCLASS34_0__ONREMINDERTIPCLOSED_B__0_OFFSET UNITYSDK_OFFSET(0x17612790)

namespace MoleMole
{
	inline static constexpr unsigned int UILineUpPromotionPanelWidgetController___c__DisplayClass34_0_TypeDefinitionIndex = 72131;

	class UILineUpPromotionPanelWidgetController___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::MoleMole::UILineUpPromotionPanelWidgetController* __4__this; // 0x10
		::HPBIMDNDPLK settingType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPPROMOTIONPANELWIDGETCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnReminderTipClosed_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPPROMOTIONPANELWIDGETCONTROLLER___C__DISPLAYCLASS34_0__ONREMINDERTIPCLOSED_B__0_OFFSET))(this);
		}
	};
}
