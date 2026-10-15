#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }

#define RPG_CLIENT_AIRSHIPBIRDAUDIO_CJCHJIHIMDH_OFFSET UNITYSDK_OFFSET(0xC64C6D0)
#define RPG_CLIENT_AIRSHIPBIRDAUDIO_CTOR_OFFSET UNITYSDK_OFFSET(0xC64C7E0)
#define RPG_CLIENT_AIRSHIPBIRDAUDIO_TRIGGERLOADCARGOEVENT_OFFSET UNITYSDK_OFFSET(0xC64C4E0)
#define RPG_CLIENT_AIRSHIPBIRDAUDIO_TRIGGERUNLOADCARGOEVENT_OFFSET UNITYSDK_OFFSET(0xC64ABE0)

namespace RPG::Client
{
	class AirshipBirdAudio : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* loadCargoEvent; // 0x18
		::System::String* unloadCargoEvent; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDAUDIO_CTOR_OFFSET))(this);
		}

		::System::Void TriggerLoadCargoEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDAUDIO_TRIGGERLOADCARGOEVENT_OFFSET))(this);
		}

		::System::Void TriggerUnloadCargoEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDAUDIO_TRIGGERUNLOADCARGOEVENT_OFFSET))(this);
		}

		::System::Void CJCHJIHIMDH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDAUDIO_CJCHJIHIMDH_OFFSET))(this, a1);
		}

	};
}
