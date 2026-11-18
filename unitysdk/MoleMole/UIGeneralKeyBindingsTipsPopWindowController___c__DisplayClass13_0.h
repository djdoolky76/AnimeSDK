#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBGGKHIKCPP.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralKeyBindingsTipsPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17845040)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__TRYKEYBINDING_B__0_OFFSET UNITYSDK_OFFSET(0x17845050)
#define MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__TRYKEYBINDING_B__1_OFFSET UNITYSDK_OFFSET(0x17845070)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralKeyBindingsTipsPopWindowController___c__DisplayClass13_0_TypeDefinitionIndex = 71705;

	class UIGeneralKeyBindingsTipsPopWindowController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralKeyBindingsTipsPopWindowController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::FBGGKHIKCPP>* keyBindingInfoList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryKeyBinding_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__TRYKEYBINDING_B__0_OFFSET))(this);
		}

		::System::Void _TryKeyBinding_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYBINDINGSTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__TRYKEYBINDING_B__1_OFFSET))(this);
		}
	};
}
