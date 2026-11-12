#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }

#define RPG_CLIENT_AIRSHIPAUDIO_AWAKE_OFFSET UNITYSDK_OFFSET(0xCFA5350)
#define RPG_CLIENT_AIRSHIPAUDIO_CTOR_OFFSET UNITYSDK_OFFSET(0xCFA5530)
#define RPG_CLIENT_AIRSHIPAUDIO_ECHGHPECCNG_OFFSET UNITYSDK_OFFSET(0xCFA5400)
#define RPG_CLIENT_AIRSHIPAUDIO_KOEFNIBHIIE_OFFSET UNITYSDK_OFFSET(0xCFA4F00)
#define RPG_CLIENT_AIRSHIPAUDIO_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCFA52C0)
#define RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPMOOREDSPEED_OFFSET UNITYSDK_OFFSET(0xCFA5220)
#define RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPMOVINGEVENT_OFFSET UNITYSDK_OFFSET(0xCFA4FA0)
#define RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPMOVINGSPEED_OFFSET UNITYSDK_OFFSET(0xCFA5190)
#define RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPTRANSITIONDOWNEVENT_OFFSET UNITYSDK_OFFSET(0xCFA50C0)
#define RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPTRANSITIONDOWNSTOPEVENT_OFFSET UNITYSDK_OFFSET(0xCFA5130)
#define RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPTRANSITIONUPEVENT_OFFSET UNITYSDK_OFFSET(0xCFA4FF0)
#define RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPTRANSITIONUPSTOPEVENT_OFFSET UNITYSDK_OFFSET(0xCFA5060)
#define RPG_CLIENT_AIRSHIPAUDIO_POSTEVENT_OFFSET UNITYSDK_OFFSET(0xCFA4DF0)
#define RPG_CLIENT_AIRSHIPAUDIO_UPDATEENABLED_OFFSET UNITYSDK_OFFSET(0xCFA4D20)
#define RPG_CLIENT_AIRSHIPAUDIO_UPDATE_OFFSET UNITYSDK_OFFSET(0xCFA53A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipAudio_TypeDefinitionIndex = 61070;

	class AirshipAudio : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single enableEventDistance; // 0x18
		::System::Single disableEventDistance; // 0x1C
		::System::String* stopAll; // 0x20
		::System::String* moving; // 0x28
		::System::String* moorUpStart; // 0x30
		::System::String* moorUpRunning; // 0x38
		::System::String* moorUpStop; // 0x40
		::System::String* moorDownStart; // 0x48
		::System::String* moorDownRunning; // 0x50
		::System::String* moorDownStop; // 0x58
		::System::String* moorRunningHorizontal; // 0x60
		::System::String* engineFloating; // 0x68
		::System::String* engineTransition; // 0x70
		::System::String* engineWorking; // 0x78
		::System::String* engineTransitionStop; // 0x80
		::System::String* engineWorkingStop; // 0x88
		::System::String* RTPC_movingSpeed; // 0x90
		::System::String* RTPC_mooredSpeed; // 0x98
		::System::String* RTPC_mooredSpeedHorizontal; // 0xA0
		::System::Boolean EnableCheckOcculasion; // 0xA8
		::System::Boolean EBCANNAPMFD; // 0xA9
		::System::Boolean CCDOFOHNECK; // 0xAA
		::System::Boolean AHHLKMOHIBJ; // 0xAB
		::System::Single HILOIBFHCKN; // 0xAC
		::System::Single PMNIOEMJIDP; // 0xB0
		::System::Single GGBAJJJLDPO; // 0xB4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_CTOR_OFFSET))(this);
		}

		::System::Boolean UpdateEnabled(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_UPDATEENABLED_OFFSET))(this, a1);
		}

		::System::Void PostAirshipMovingEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPMOVINGEVENT_OFFSET))(this);
		}

		::System::Void PostAirshipTransitionUpEvent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPTRANSITIONUPEVENT_OFFSET))(this, a1);
		}

		::System::Void PostAirshipTransitionUpStopEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPTRANSITIONUPSTOPEVENT_OFFSET))(this);
		}

		::System::Void PostAirshipTransitionDownEvent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPTRANSITIONDOWNEVENT_OFFSET))(this, a1);
		}

		::System::Void PostAirshipTransitionDownStopEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPTRANSITIONDOWNSTOPEVENT_OFFSET))(this);
		}

		::System::Void PostAirshipMovingSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPMOVINGSPEED_OFFSET))(this, a1);
		}

		::System::Void PostAirshipMooredSpeed(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_POSTAIRSHIPMOOREDSPEED_OFFSET))(this, a1, a2);
		}

		::System::Void PostEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_POSTEVENT_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_ONENABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_UPDATE_OFFSET))(this);
		}

		::System::Void KOEFNIBHIIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_KOEFNIBHIIE_OFFSET))(this);
		}

		::System::Void ECHGHPECCNG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPAUDIO_ECHGHPECCNG_OFFSET))(this, a1);
		}

	};
}
