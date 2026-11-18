#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1904B290)

namespace MoleMole
{
	inline static constexpr unsigned int UIMapZenkovCountDownWidgetController_Context_TypeDefinitionIndex = 69230;

	class UIMapZenkovCountDownWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 TargetTimeMs; // 0x28
		::System::Boolean ShowLock; // 0x2C
		::System::Boolean ShowIcon; // 0x2D
		::System::Boolean ShowBlink; // 0x2E
		::System::Boolean HideText; // 0x2F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
