#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIZenkovWorkbenchDialogPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS175_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13EAE7C0)
#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS175_0__SHOWLOCKINFOTIPSWITHFOCUSHANDLING_B__0_OFFSET UNITYSDK_OFFSET(0x13EAE7D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWorkbenchDialogPageController___c__DisplayClass175_0_TypeDefinitionIndex = 78528;

	class UIZenkovWorkbenchDialogPageController___c__DisplayClass175_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Boolean>* savedWasFocus; // 0x10
		::MoleMole::UIZenkovWorkbenchDialogPageController* __4__this; // 0x18
		::System::Collections::Generic::List_1<::System::Boolean>* savedWasSelect; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::MonoGamepadSelectable*>* savedStates; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS175_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowLockInfoTipsWithFocusHandling_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS175_0__SHOWLOCKINFOTIPSWITHFOCUSHANDLING_B__0_OFFSET))(this);
		}
	};
}
