#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class MAAEMAHHFLI;

#define MOLEMOLE_UIZENKOVMISSIONICONROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x170D4290)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMissionIconRowWidgetController_Context_TypeDefinitionIndex = 48297;

	class UIZenkovMissionIconRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MAAEMAHHFLI* EventInfo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONICONROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
