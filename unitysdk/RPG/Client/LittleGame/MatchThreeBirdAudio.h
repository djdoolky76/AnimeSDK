#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_MATCHTHREEBIRDAUDIO_CJCHJIHIMDH_OFFSET UNITYSDK_OFFSET(0xD46E760)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEBIRDAUDIO_CTOR_OFFSET UNITYSDK_OFFSET(0xD46E8C0)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEBIRDAUDIO_TRIGGERAPPEAREVENT_OFFSET UNITYSDK_OFFSET(0xD46E710)
#define RPG_CLIENT_LITTLEGAME_MATCHTHREEBIRDAUDIO_TRIGGERIDLESHOWEVENT_OFFSET UNITYSDK_OFFSET(0xD46E870)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MatchThreeBirdAudio_TypeDefinitionIndex = 76552;

	class MatchThreeBirdAudio : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* AppearEvent; // 0x18
		::System::String* IdleShowEvent; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEBIRDAUDIO_CTOR_OFFSET))(this);
		}

		::System::Void TriggerAppearEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEBIRDAUDIO_TRIGGERAPPEAREVENT_OFFSET))(this);
		}

		::System::Void TriggerIdleShowEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEBIRDAUDIO_TRIGGERIDLESHOWEVENT_OFFSET))(this);
		}

		::System::Void CJCHJIHIMDH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCHTHREEBIRDAUDIO_CJCHJIHIMDH_OFFSET))(this, a1);
		}

	};
}
