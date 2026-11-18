#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVRESULTPROROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13EACF60)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovResultProRowWidgetController_Context_TypeDefinitionIndex = 51855;

	class UIZenkovResultProRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean UseShortNotation; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 Num; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTPROROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
