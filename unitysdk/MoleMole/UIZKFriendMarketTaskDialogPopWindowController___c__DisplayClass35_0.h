#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZKFRIENDMARKETTASKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18BEDB00)
#define MOLEMOLE_UIZKFRIENDMARKETTASKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS35_0__JUMPTOTASKACCESS_B__0_OFFSET UNITYSDK_OFFSET(0x18BEDB10)

namespace MoleMole
{
	inline static constexpr unsigned int UIZKFriendMarketTaskDialogPopWindowController___c__DisplayClass35_0_TypeDefinitionIndex = 54030;

	class UIZKFriendMarketTaskDialogPopWindowController___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBaseController* ownerController; // 0x10
		::System::Action_1<::System::Boolean>* __9__0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETTASKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _JumpToTaskAccess_b__0(::System::Boolean isJump)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETTASKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS35_0__JUMPTOTASKACCESS_B__0_OFFSET))(this, isJump);
		}
	};
}
