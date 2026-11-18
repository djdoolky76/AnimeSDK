#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17864560)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetContext_TypeDefinitionIndex = 39446;

	class UIHollowMainBottomWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean TopUI; // 0x28
		::System::Boolean DontPlaySound; // 0x29
		::System::Byte _padding0[0x2];
		::System::Single PunishOverloadFadeOutTime; // 0x2C
		::System::Single StanimaValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
