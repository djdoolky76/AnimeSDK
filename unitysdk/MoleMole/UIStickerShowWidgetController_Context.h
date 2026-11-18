#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D65770)

namespace MoleMole
{
	inline static constexpr unsigned int UIStickerShowWidgetController_Context_TypeDefinitionIndex = 58423;

	class UIStickerShowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 StickerID; // 0x28
		::System::Boolean DisableOpt; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Int32 StickerIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
