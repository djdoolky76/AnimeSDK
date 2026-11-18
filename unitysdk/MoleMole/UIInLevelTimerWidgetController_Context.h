#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGCPGOHHAIC.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x182E9980)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelTimerWidgetController_Context_TypeDefinitionIndex = 48212;

	class UIInLevelTimerWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::EGCPGOHHAIC LDdata; // 0x28

		::System::Void _ctor(::EGCPGOHHAIC LDdata)
		{
			return ((::System::Void(*)(::PVOID, ::EGCPGOHHAIC))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIMERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, LDdata);
		}
	};
}
