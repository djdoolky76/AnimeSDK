#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AdventureAudioManager; }

#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_CTOR_OFFSET UNITYSDK_OFFSET(0xD304820)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_FORCEPLAYBGM_OFFSET UNITYSDK_OFFSET(0xD304880)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_FORCESTOPBGM_OFFSET UNITYSDK_OFFSET(0xD3049B0)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_INIT_OFFSET UNITYSDK_OFFSET(0xD304830)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_PLAYBGM_OFFSET UNITYSDK_OFFSET(0xD304950)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_STOPBGM_OFFSET UNITYSDK_OFFSET(0xD304A90)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE__GETAUDIOMANAGER_OFFSET UNITYSDK_OFFSET(0xD304AE0)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE__PLAYBGM_OFFSET UNITYSDK_OFFSET(0xD3048D0)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE__STOPBGM_OFFSET UNITYSDK_OFFSET(0xD304A00)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakBGMUIState_TypeDefinitionIndex = 64593;

	class ChallengePeakBGMUIState : public ::System::Object
	{
	public:
		::System::Int32 _PlayCounter; // 0x10
		::System::Boolean _IsBGMPlayingState; // 0x14
		// static const ::System::String* _UI_BGM_STATE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_INIT_OFFSET))(this);
		}

		::System::Void ForcePlayBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_FORCEPLAYBGM_OFFSET))(this);
		}

		::System::Void PlayBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_PLAYBGM_OFFSET))(this);
		}

		::System::Void ForceStopBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_FORCESTOPBGM_OFFSET))(this);
		}

		::System::Void StopBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_STOPBGM_OFFSET))(this);
		}

		::System::Void _PlayBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBGMUISTATE__PLAYBGM_OFFSET))(this);
		}

		::System::Void _StopBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBGMUISTATE__STOPBGM_OFFSET))(this);
		}

		::RPG::Client::AdventureAudioManager* _GetAudioManager()
		{
			return ((::RPG::Client::AdventureAudioManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBGMUISTATE__GETAUDIOMANAGER_OFFSET))(this);
		}

	};
}
