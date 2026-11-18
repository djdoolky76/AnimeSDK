#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPinballComboWidgetController; }

#define MOLEMOLE_UIPINBALLCOMBOWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED7870)
#define MOLEMOLE_UIPINBALLCOMBOWIDGETCONTROLLER___C__DISPLAYCLASS15_0__HIDECOMBO_B__0_OFFSET UNITYSDK_OFFSET(0x18ED7880)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballComboWidgetController___c__DisplayClass15_0_TypeDefinitionIndex = 47510;

	class UIPinballComboWidgetController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPinballComboWidgetController* __4__this; // 0x10
		::System::Int32 serial; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLCOMBOWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _HideCombo_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLCOMBOWIDGETCONTROLLER___C__DISPLAYCLASS15_0__HIDECOMBO_B__0_OFFSET))(this);
		}
	};
}
