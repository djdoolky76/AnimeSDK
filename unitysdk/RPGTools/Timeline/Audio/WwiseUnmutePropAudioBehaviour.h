#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline::Audio { class WwiseUnmutePropAudioClip; }

#define RPGTOOLS_TIMELINE_AUDIO_WWISEUNMUTEPROPAUDIOBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xF38DFB0)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEUNMUTEPROPAUDIOBEHAVIOUR_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xF38DC90)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEUNMUTEPROPAUDIOBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xF38DCB0)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEUNMUTEPROPAUDIOBEHAVIOUR_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xF38DCA0)

namespace RPGTools::Timeline::Audio
{
	inline static constexpr unsigned int WwiseUnmutePropAudioBehaviour_TypeDefinitionIndex = 49907;

	class WwiseUnmutePropAudioBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::Audio::WwiseUnmutePropAudioClip* _Owner_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEUNMUTEPROPAUDIOBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::Audio::WwiseUnmutePropAudioClip* get_Owner()
		{
			return ((::RPGTools::Timeline::Audio::WwiseUnmutePropAudioClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEUNMUTEPROPAUDIOBEHAVIOUR_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::RPGTools::Timeline::Audio::WwiseUnmutePropAudioClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Audio::WwiseUnmutePropAudioClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEUNMUTEPROPAUDIOBEHAVIOUR_SET_OWNER_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEUNMUTEPROPAUDIOBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

	};
}
