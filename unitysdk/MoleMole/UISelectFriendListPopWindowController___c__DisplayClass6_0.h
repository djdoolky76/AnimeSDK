#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;

#define MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C83CF0)
#define MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__ONCLICKSENDMSGBTN_B__0_OFFSET UNITYSDK_OFFSET(0x19C83D00)

namespace MoleMole
{
	inline static constexpr unsigned int UISelectFriendListPopWindowController___c__DisplayClass6_0_TypeDefinitionIndex = 65421;

	class UISelectFriendListPopWindowController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::FBHPDPBIGPK* info; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSendMsgBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__ONCLICKSENDMSGBTN_B__0_OFFSET))(this);
		}
	};
}
