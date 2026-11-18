#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTAUDIOEFFECTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xFAA2210)
#define MOLEMOLE_CONFIG_ANIMATOREVENTAUDIOEFFECTENTRY_GET_MUTEFORCETRIGGER_OFFSET UNITYSDK_OFFSET(0xFAA21B0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTAUDIOEFFECTENTRY_SET_MUTEFORCETRIGGER_OFFSET UNITYSDK_OFFSET(0xFAA21C0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTAUDIOEFFECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xFAA2290)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventAudioEffectEntry_TypeDefinitionIndex = 67912;

	class AnimatorEventAudioEffectEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* actionMp; // 0x58
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x60
		::System::String* audioEventNameMp; // 0x68
		::System::String* audioEventName; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTAUDIOEFFECTENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_muteForceTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTAUDIOEFFECTENTRY_GET_MUTEFORCETRIGGER_OFFSET))(this);
		}

		::System::Void set_muteForceTrigger(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTAUDIOEFFECTENTRY_SET_MUTEFORCETRIGGER_OFFSET))(this, value);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTAUDIOEFFECTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
