#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWidgetController; }

#define MOLEMOLE_UISCARYNIGHTPREPAREPAGECONTROLLER___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16900440)
#define MOLEMOLE_UISCARYNIGHTPREPAREPAGECONTROLLER___C__DISPLAYCLASS69_0__REFRESHPAGESTATE_B__0_OFFSET UNITYSDK_OFFSET(0x16900450)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightPreparePageController___c__DisplayClass69_0_TypeDefinitionIndex = 65503;

	class UIScaryNightPreparePageController___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::MoleMole::UIWidgetController* targetWidget; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPREPAREPAGECONTROLLER___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshPageState_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTPREPAREPAGECONTROLLER___C__DISPLAYCLASS69_0__REFRESHPAGESTATE_B__0_OFFSET))(this);
		}
	};
}
