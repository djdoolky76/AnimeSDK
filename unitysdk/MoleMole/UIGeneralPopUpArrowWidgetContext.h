#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIGeneralPopUpArrowWidgetController_ArrowPosition.h"

#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x184CFEF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPopUpArrowWidgetContext_TypeDefinitionIndex = 56807;

	class UIGeneralPopUpArrowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsShowing; // 0x28
		::System::Byte _padding0[0x3];
		::MoleMole::UIGeneralPopUpArrowWidgetController_ArrowPosition Position; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
