#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERBEHAVIORTREEENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x19289A60)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERBEHAVIORTREEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19289AE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventTriggerBehaviorTreeEntry_TypeDefinitionIndex = 46843;

	class AnimatorEventTriggerBehaviorTreeEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Boolean Enable; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERBEHAVIORTREEENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERBEHAVIORTREEENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
