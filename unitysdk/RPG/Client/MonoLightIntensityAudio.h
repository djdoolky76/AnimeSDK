#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class GeneralAudioItem; }
namespace UnityEngine { class Light; }

#define RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_CTOR_OFFSET UNITYSDK_OFFSET(0xD844360)
#define RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_EAGEFEABFHI_OFFSET UNITYSDK_OFFSET(0xD8442F0)
#define RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_EMKFBOLCALG_OFFSET UNITYSDK_OFFSET(0xD844060)
#define RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_IGFOKEBDLID_OFFSET UNITYSDK_OFFSET(0xD844270)
#define RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_START_OFFSET UNITYSDK_OFFSET(0xD843F20)
#define RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_UPDATE_OFFSET UNITYSDK_OFFSET(0xD844130)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoLightIntensityAudio_TypeDefinitionIndex = 68608;

	class MonoLightIntensityAudio : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Light* _LightObject; // 0x18
		::System::Single LFBOFFNMACP; // 0x20
		::System::Boolean LFKFOKNFJFN; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::Client::GeneralAudioItem* _TurnOnAudio; // 0x28
		::RPG::Client::GeneralAudioItem* _TurnOffAudio; // 0x30
		// static const ::System::Object MNMKACKAKDF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_UPDATE_OFFSET))(this);
		}

		::System::Void IGFOKEBDLID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_IGFOKEBDLID_OFFSET))(this);
		}

		::System::Void EAGEFEABFHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_EAGEFEABFHI_OFFSET))(this);
		}

		::System::Void EMKFBOLCALG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLIGHTINTENSITYAUDIO_EMKFBOLCALG_OFFSET))(this, a1);
		}

	};
}
