#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CCPCAPILDDK;
namespace MoleMole { class UIGroceryChildWindowController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19768510)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS37_0__ONCOSTREFRESHSHOP_B__0_OFFSET UNITYSDK_OFFSET(0x19768520)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS37_0__ONCOSTREFRESHSHOP_B__1_OFFSET UNITYSDK_OFFSET(0x197685E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryChildWindowController___c__DisplayClass37_0_TypeDefinitionIndex = 68805;

	class UIGroceryChildWindowController___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGroceryChildWindowController* __4__this; // 0x10
		::System::Action_1<::CCPCAPILDDK*>* __9__1; // 0x18
		::CCPCAPILDDK* curTabData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnCostRefreshShop_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS37_0__ONCOSTREFRESHSHOP_B__0_OFFSET))(this);
		}

		::System::Void _OnCostRefreshShop_b__1(::CCPCAPILDDK* shopData)
		{
			return ((::System::Void(*)(::PVOID, ::CCPCAPILDDK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS37_0__ONCOSTREFRESHSHOP_B__1_OFFSET))(this, shopData);
		}
	};
}
