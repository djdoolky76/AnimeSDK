#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FBHPDPBIGPK;

#define MOLEMOLE_UIAUTOBATTLEPVPFRIENDCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19835580)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPFriendCardRowWidgetController_Context_TypeDefinitionIndex = 88152;

	class UIAutoBattlePVPFriendCardRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FBHPDPBIGPK* briefInfo; // 0x28
		::System::Boolean isFriendInRoom; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPFRIENDCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
