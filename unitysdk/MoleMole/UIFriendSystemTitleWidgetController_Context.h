#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMENNFHKEOE_GLDNHBHMBDL.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166B1A80)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemTitleWidgetController_Context_TypeDefinitionIndex = 47988;

	class UIFriendSystemTitleWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* overrideClickAction; // 0x28
		::System::Boolean isTitleBtnActive; // 0x30
		::System::Byte _padding0[0x3];
		::HMENNFHKEOE_GLDNHBHMBDL materialModule; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
