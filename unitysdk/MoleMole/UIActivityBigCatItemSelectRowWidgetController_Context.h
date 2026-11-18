#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HGAJKHIMKJP;

#define MOLEMOLE_UIACTIVITYBIGCATITEMSELECTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19B88430)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBigCatItemSelectRowWidgetController_Context_TypeDefinitionIndex = 50124;

	class UIActivityBigCatItemSelectRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::HGAJKHIMKJP* itemData; // 0x28
		::System::Int32 RewardCount; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBIGCATITEMSELECTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
