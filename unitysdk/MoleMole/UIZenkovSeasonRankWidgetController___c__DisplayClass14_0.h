#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovSeasonRankWidgetController; }

#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1209F8D0)
#define MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER___C__DISPLAYCLASS14_0__REFRESHRANKICON_B__0_OFFSET UNITYSDK_OFFSET(0x1209F8E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovSeasonRankWidgetController___c__DisplayClass14_0_TypeDefinitionIndex = 40958;

	class UIZenkovSeasonRankWidgetController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovSeasonRankWidgetController* __4__this; // 0x10
		::System::Int32 toMedal; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshRankIcon_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRANKWIDGETCONTROLLER___C__DISPLAYCLASS14_0__REFRESHRANKICON_B__0_OFFSET))(this);
		}
	};
}
