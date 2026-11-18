#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BICEDFLOFGB.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class ALAGDAJALHD;

#define MOLEMOLE_UIHOUSERHYTHMPLAYHOLDBEATITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16F0F680)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmPlayHoldBeatItemWidgetController_Context_TypeDefinitionIndex = 72799;

	class UIHouseRhythmPlayHoldBeatItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::ALAGDAJALHD* BeatHold; // 0x28
		::BICEDFLOFGB HoldTrigger; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMPLAYHOLDBEATITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
