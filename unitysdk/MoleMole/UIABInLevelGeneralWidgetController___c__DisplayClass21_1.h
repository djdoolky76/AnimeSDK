#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIABInLevelCampInfoWidgetController; }

#define MOLEMOLE_UIABINLEVELGENERALWIDGETCONTROLLER___C__DISPLAYCLASS21_1__CTOR_OFFSET UNITYSDK_OFFSET(0x198E43F0)
#define MOLEMOLE_UIABINLEVELGENERALWIDGETCONTROLLER___C__DISPLAYCLASS21_1__TOGGLECAMPINFO_B__0_OFFSET UNITYSDK_OFFSET(0x198E4400)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelGeneralWidgetController___c__DisplayClass21_1_TypeDefinitionIndex = 86030;

	template <typename T>
	class UIABInLevelGeneralWidgetController___c__DisplayClass21_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 idx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGENERALWIDGETCONTROLLER___C__DISPLAYCLASS21_1__CTOR_OFFSET))(this);
		}

		::System::Void _ToggleCampInfo_b__0(::MoleMole::UIABInLevelCampInfoWidgetController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIABInLevelCampInfoWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGENERALWIDGETCONTROLLER___C__DISPLAYCLASS21_1__TOGGLECAMPINFO_B__0_OFFSET))(this, controller);
		}
	};
}
