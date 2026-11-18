#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityPersonalOutWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183E93C0)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHPORTRAITVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x183E93D0)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHPORTRAITVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x183E9560)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityPersonalOutWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 83357;

	class UIMainCityPersonalOutWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityPersonalOutWidgetController* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Action* infoCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshPortraitView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHPORTRAITVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshPortraitView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHPORTRAITVIEW_B__1_OFFSET))(this);
		}
	};
}
