#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFMDDIOEJGI.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIShoppingMallMemberWidgetController; }

#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DA4010)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x17DA4020)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x17DA4060)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallMemberWidgetController___c__DisplayClass4_0_TypeDefinitionIndex = 56685;

	class UIShoppingMallMemberWidgetController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MoleMole::UIShoppingMallMemberWidgetController* __4__this; // 0x10
		::IFMDDIOEJGI onceReward_Item; // 0x18
		::IFMDDIOEJGI dayReward_Item; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONUIOPEN_B__0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONUIOPEN_B__1_OFFSET))(this);
		}
	};
}
