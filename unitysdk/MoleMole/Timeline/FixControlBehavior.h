#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"

namespace MoleMole::Timeline { class FixParams; }

#define MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR_EEEPHBMCNEN_OFFSET UNITYSDK_OFFSET(0x162F87E0)
#define MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR_JEINNALOJDE_OFFSET UNITYSDK_OFFSET(0x162F87F0)
#define MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x162F8740)
#define MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x162F86D0)
#define MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x162F87A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FixControlBehavior_TypeDefinitionIndex = 89027;

	class FixControlBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::MoleMole::Timeline::FixParams* Params; // 0x18
		::System::Boolean isInit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void EEEPHBMCNEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR_EEEPHBMCNEN_OFFSET))(this);
		}

		::System::Void JEINNALOJDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR_JEINNALOJDE_OFFSET))(this);
		}
	};
}
