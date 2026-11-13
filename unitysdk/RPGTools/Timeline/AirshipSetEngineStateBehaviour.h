#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAirshipWorkingState.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
class CommonShipEngineController;

#define RPGTOOLS_TIMELINE_AIRSHIPSETENGINESTATEBEHAVIOUR_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x1E3CEC20)
#define RPGTOOLS_TIMELINE_AIRSHIPSETENGINESTATEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3CEC80)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AirshipSetEngineStateBehaviour_TypeDefinitionIndex = 48867;

	class AirshipSetEngineStateBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::CommonShipEngineController* airshipEngine; // 0x20
		::EAirshipWorkingState workingState; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AIRSHIPSETENGINESTATEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AIRSHIPSETENGINESTATEBEHAVIOUR_CLJEBKODGHK_OFFSET))(this);
		}

	};
}
