#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x174EB540)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x174EB5C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventTriggerAbilityEntry_TypeDefinitionIndex = 85853;

	class AnimatorEventTriggerAbilityEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* InitAbilitySpecialList; // 0x58
		::System::String* AbilityName; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
