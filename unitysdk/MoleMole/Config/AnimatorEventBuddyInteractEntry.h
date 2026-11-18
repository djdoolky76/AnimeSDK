#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTBUDDYINTERACTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x174EAC70)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBUDDYINTERACTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x174EACF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventBuddyInteractEntry_TypeDefinitionIndex = 70838;

	class AnimatorEventBuddyInteractEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBUDDYINTERACTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBUDDYINTERACTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
