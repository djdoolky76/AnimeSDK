#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHandBookProxyQuestItemWidgetController; }

#define MOLEMOLE_UIHANDBOOKPROXYQUESTITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175B8030)
#define MOLEMOLE_UIHANDBOOKPROXYQUESTITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x175B8040)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookProxyQuestItemWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 43480;

	class UIHandBookProxyQuestItemWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHandBookProxyQuestItemWidgetController* __4__this; // 0x10
		::DEDDPKGLKHI_LODLFMBCLAH reward; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPROXYQUESTITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
