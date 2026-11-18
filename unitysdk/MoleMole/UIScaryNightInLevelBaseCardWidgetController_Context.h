#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class NGJGLFFBIFB;

#define MOLEMOLE_UISCARYNIGHTINLEVELBASECARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17DA15F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightInLevelBaseCardWidgetController_Context_TypeDefinitionIndex = 76288;

	class UIScaryNightInLevelBaseCardWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::NGJGLFFBIFB* Holder; // 0x28
		::System::Int32 HolderIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELBASECARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
