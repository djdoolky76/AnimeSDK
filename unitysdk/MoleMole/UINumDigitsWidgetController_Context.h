#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1797FD70)

namespace MoleMole
{
	inline static constexpr unsigned int UINumDigitsWidgetController_Context_TypeDefinitionIndex = 80396;

	class UINumDigitsWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* DigitImgFormat; // 0x28
		::System::Int32 Num; // 0x30
		::System::Boolean UseAnimation; // 0x34
		::System::Boolean HideLeadingZeros; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
