#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GLDNFJIDFGI;
namespace MoleMole { class UIHollowShopWidgetChildWindowController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS66_0__BUYHOLLOWITEM_B__0_OFFSET UNITYSDK_OFFSET(0x18F2DBF0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F2DBE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowShopWidgetChildWindowController___c__DisplayClass66_0_TypeDefinitionIndex = 61287;

	class UIHollowShopWidgetChildWindowController___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowShopWidgetChildWindowController* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::GLDNFJIDFGI*>* dics; // 0x20
		::System::Int32 uid; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Void _BuyHollowItem_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS66_0__BUYHOLLOWITEM_B__0_OFFSET))(this);
		}
	};
}
