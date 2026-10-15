#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class CKJKGHLKKIA;
namespace RPGTools::Timeline::Audio { class WwiseExternalAudioConfig; }
namespace System { class Object; }

#define PDGKDNIHOOO_CTOR_OFFSET UNITYSDK_OFFSET(0xC00BF50)
#define PDGKDNIHOOO_EDHLKCEAPEF_OFFSET UNITYSDK_OFFSET(0xC00BC70)
#define PDGKDNIHOOO_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC00B910)
#define PDGKDNIHOOO_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xC00B950)
#define PDGKDNIHOOO_GET_TRACKMIXER_OFFSET UNITYSDK_OFFSET(0xC00B930)
#define PDGKDNIHOOO_MGIKLDCODMM_OFFSET UNITYSDK_OFFSET(0xC00BAE0)
#define PDGKDNIHOOO_OLMEHOCJCGI_OFFSET UNITYSDK_OFFSET(0xC00BB50)
#define PDGKDNIHOOO_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xC00B970)
#define PDGKDNIHOOO_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xC00BF00)
#define PDGKDNIHOOO_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xC00BE70)
#define PDGKDNIHOOO_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC00B920)
#define PDGKDNIHOOO_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xC00B960)
#define PDGKDNIHOOO_SET_TRACKMIXER_OFFSET UNITYSDK_OFFSET(0xC00B940)

inline static constexpr unsigned int PDGKDNIHOOO_TypeDefinitionIndex = 48842;

	class PDGKDNIHOOO : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::Audio::WwiseExternalAudioConfig* _Config_k__BackingField; // 0x10
		::CKJKGHLKKIA* _TrackMixer_k__BackingField; // 0x18
		::System::Double _EndTime_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGKDNIHOOO_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::Audio::WwiseExternalAudioConfig* get_Config()
		{
			return ((::RPGTools::Timeline::Audio::WwiseExternalAudioConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGKDNIHOOO_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPGTools::Timeline::Audio::WwiseExternalAudioConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Audio::WwiseExternalAudioConfig*))((::PBYTE)hIl2Cpp + PDGKDNIHOOO_SET_CONFIG_OFFSET))(this, a1);
		}

		::CKJKGHLKKIA* get_TrackMixer()
		{
			return ((::CKJKGHLKKIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGKDNIHOOO_GET_TRACKMIXER_OFFSET))(this);
		}

		::System::Void set_TrackMixer(::CKJKGHLKKIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKJKGHLKKIA*))((::PBYTE)hIl2Cpp + PDGKDNIHOOO_SET_TRACKMIXER_OFFSET))(this, a1);
		}

		::System::Double get_EndTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGKDNIHOOO_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + PDGKDNIHOOO_SET_ENDTIME_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + PDGKDNIHOOO_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void MGIKLDCODMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGKDNIHOOO_MGIKLDCODMM_OFFSET))(this);
		}

		::System::Void OLMEHOCJCGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGKDNIHOOO_OLMEHOCJCGI_OFFSET))(this);
		}

		::System::Void EDHLKCEAPEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGKDNIHOOO_EDHLKCEAPEF_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + PDGKDNIHOOO_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + PDGKDNIHOOO_ONGRAPHSTOP_OFFSET))(this, a1);
		}

	};
