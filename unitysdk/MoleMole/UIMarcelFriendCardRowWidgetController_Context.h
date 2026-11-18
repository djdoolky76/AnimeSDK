#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIGrandMarcelAdventurePageContext_RoomType.h"

class FBHPDPBIGPK;

#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D102A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMarcelFriendCardRowWidgetController_Context_TypeDefinitionIndex = 41068;

	class UIMarcelFriendCardRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FBHPDPBIGPK* briefInfo; // 0x28
		::MoleMole::UIGrandMarcelAdventurePageContext_RoomType CurRoomType; // 0x30
		::System::Boolean isFriendInRoom; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
