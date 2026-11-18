#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTDECREASEEPENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x174EAE40)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDECREASEEPENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x174EAEC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventDecreaseEpEntry_TypeDefinitionIndex = 76508;

	class AnimatorEventDecreaseEpEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Single Amount; // 0x58
		::System::Single Percentage; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDECREASEEPENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDECREASEEPENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
