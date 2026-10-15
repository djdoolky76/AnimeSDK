#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline::Audio { class WwiseExternalStopLoopSFXConfig; }

#define KBLKOHCBPHL_CTOR_OFFSET UNITYSDK_OFFSET(0xB31EA00)
#define KBLKOHCBPHL_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB31E810)
#define KBLKOHCBPHL_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB31E830)
#define KBLKOHCBPHL_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB31E820)

inline static constexpr unsigned int KBLKOHCBPHL_TypeDefinitionIndex = 48851;

	class KBLKOHCBPHL : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::Audio::WwiseExternalStopLoopSFXConfig* _Config_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLKOHCBPHL_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::Audio::WwiseExternalStopLoopSFXConfig* get_Config()
		{
			return ((::RPGTools::Timeline::Audio::WwiseExternalStopLoopSFXConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLKOHCBPHL_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPGTools::Timeline::Audio::WwiseExternalStopLoopSFXConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Audio::WwiseExternalStopLoopSFXConfig*))((::PBYTE)hIl2Cpp + KBLKOHCBPHL_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + KBLKOHCBPHL_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

	};
