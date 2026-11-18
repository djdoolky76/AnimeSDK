#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityPersonalOutWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1880C520)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHPARTNERDATEVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1880C530)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityPersonalOutWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 83355;

	class UIMainCityPersonalOutWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIMainCityPersonalOutWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshPartnerDateView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHPARTNERDATEVIEW_B__0_OFFSET))(this);
		}
	};
}
