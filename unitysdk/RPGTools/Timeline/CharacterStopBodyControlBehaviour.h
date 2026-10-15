#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
namespace RPGTools::Timeline { class CharacterStopBodyControlData; }

#define RPGTOOLS_TIMELINE_CHARACTERSTOPBODYCONTROLBEHAVIOUR_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xE8CCC90)
#define RPGTOOLS_TIMELINE_CHARACTERSTOPBODYCONTROLBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8CCE30)

namespace RPGTools::Timeline
{
	class CharacterStopBodyControlBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterStopBodyControlData* Config; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPBODYCONTROLBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPBODYCONTROLBEHAVIOUR_CLJEBKODGHK_OFFSET))(this);
		}

	};
}
