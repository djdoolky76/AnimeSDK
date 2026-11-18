#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UISUMMERTIDETREASURECHATPLAYPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1718B670)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureChatPlayPopWindowController_Context_TypeDefinitionIndex = 48897;

	class UISummerTideTreasureChatPlayPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Name; // 0x28
		::System::String* Content; // 0x30
		::System::Action* OnClickNext; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECHATPLAYPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
