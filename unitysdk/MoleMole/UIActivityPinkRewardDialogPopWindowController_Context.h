#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYPINKREWARDDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1915ADC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityPinkRewardDialogPopWindowController_Context_TypeDefinitionIndex = 43942;

	class UIActivityPinkRewardDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean allowTake; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 taskIndex; // 0x2C
		::System::Int32 activityId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPINKREWARDDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
