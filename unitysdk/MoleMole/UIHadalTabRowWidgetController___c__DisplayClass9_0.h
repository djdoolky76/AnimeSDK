#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHadalGuideWidgetController_HadalTabData; }
namespace MoleMole { class UIHadalTabRowWidgetController; }

#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6AC80)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__SETTABDATA_B__0_OFFSET UNITYSDK_OFFSET(0x18E6AC90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalTabRowWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 72125;

	class UIHadalTabRowWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHadalGuideWidgetController_HadalTabData* tabData; // 0x10
		::MoleMole::UIHadalTabRowWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetTabData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__SETTABDATA_B__0_OFFSET))(this);
		}
	};
}
