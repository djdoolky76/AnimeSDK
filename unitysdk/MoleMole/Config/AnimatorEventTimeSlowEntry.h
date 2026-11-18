#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTTIMESLOWENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1BA1B160)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTIMESLOWENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1B1E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventTimeSlowEntry_TypeDefinitionIndex = 79260;

	class AnimatorEventTimeSlowEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* TimeSlowKey; // 0x58
		::System::Boolean IsSelf; // 0x60
		::System::Byte _padding0[0x3];
		::System::Int32 targetting; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTIMESLOWENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTIMESLOWENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
