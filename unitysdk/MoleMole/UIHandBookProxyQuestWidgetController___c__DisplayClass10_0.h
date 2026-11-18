#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHandBookProxyQuestWidgetController; }

#define MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6B520)
#define MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHPROXYLEVEL_B__0_OFFSET UNITYSDK_OFFSET(0x18E6B530)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookProxyQuestWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 65090;

	class UIHandBookProxyQuestWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHandBookProxyQuestWidgetController* __4__this; // 0x10
		::DEDDPKGLKHI_LODLFMBCLAH reward; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshProxyLevel_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHPROXYLEVEL_B__0_OFFSET))(this);
		}
	};
}
