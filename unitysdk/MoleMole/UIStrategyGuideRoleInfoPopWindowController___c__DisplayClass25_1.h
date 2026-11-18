#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStrategyGuideRoleInfoPopWindowController; }

#define MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8C460)
#define MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_1__REFRESHSUITS_B__1_OFFSET UNITYSDK_OFFSET(0x19C8C470)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideRoleInfoPopWindowController___c__DisplayClass25_1_TypeDefinitionIndex = 63843;

	template <typename T>
	class UIStrategyGuideRoleInfoPopWindowController___c__DisplayClass25_1 : public ::System::Object
	{
	public:
		::MoleMole::UIStrategyGuideRoleInfoPopWindowController* __4__this; // 0x10
		::System::Int32 equipItemID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSuits_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_1__REFRESHSUITS_B__1_OFFSET))(this);
		}
	};
}
