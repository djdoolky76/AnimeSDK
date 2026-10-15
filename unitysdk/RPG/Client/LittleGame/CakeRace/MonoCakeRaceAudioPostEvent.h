#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent.h"
namespace RPG::Client { class AudioManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xD4063B0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_CGEEMDBNGKC_OFFSET UNITYSDK_OFFSET(0xD406B20)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD406D00)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_DDFDKNBMMNL_OFFSET UNITYSDK_OFFSET(0xD406750)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_HKGFIGCGMFB_OFFSET UNITYSDK_OFFSET(0xD406920)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_LILGCKHMJII_OFFSET UNITYSDK_OFFSET(0xD4067D0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_LOGDICCEOHH_OFFSET UNITYSDK_OFFSET(0xD406C90)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD406A40)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xD406530)

namespace RPG::Client::LittleGame::CakeRace
{
	class MonoCakeRaceAudioPostEvent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* Animator; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* _AudioEventList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FDCGDJJDDOF; // 0x28
		::System::Int32 CLPKBAJPOOL; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean LILGCKHMJII(::RPG::Client::LittleGame::CakeRace::MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_LILGCKHMJII_OFFSET))(this, a1);
		}

		::System::Int32 DDFDKNBMMNL(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_DDFDKNBMMNL_OFFSET))(this, a1);
		}

		::System::Void HKGFIGCGMFB(::RPG::Client::LittleGame::CakeRace::MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_HKGFIGCGMFB_OFFSET))(this, a1);
		}

		::System::Void CGEEMDBNGKC(::RPG::Client::LittleGame::CakeRace::MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_CGEEMDBNGKC_OFFSET))(this, a1);
		}

		::RPG::Client::AudioManager* LOGDICCEOHH()
		{
			return ((::RPG::Client::AudioManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT_LOGDICCEOHH_OFFSET))(this);
		}

	};
}
