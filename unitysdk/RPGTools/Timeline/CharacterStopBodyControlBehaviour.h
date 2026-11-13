#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
namespace RPGTools::Timeline { class CharacterStopBodyControlData; }

#define RPGTOOLS_TIMELINE_CHARACTERSTOPBODYCONTROLBEHAVIOUR_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x1E3F00C0)
#define RPGTOOLS_TIMELINE_CHARACTERSTOPBODYCONTROLBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F0250)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStopBodyControlBehaviour_TypeDefinitionIndex = 48973;

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
