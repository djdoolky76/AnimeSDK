#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xE8A79E0)
#define RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xE8A7730)
#define RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8A7D30)
#define RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_FHPINBFJDLE_OFFSET UNITYSDK_OFFSET(0xE8A7CB0)
#define RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_NPFGHKBKGHH_OFFSET UNITYSDK_OFFSET(0xE8A7CF0)
#define RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xE8A7C50)

namespace RPGTools::Timeline::Audio
{
	inline static constexpr unsigned int BGMEmotionBehaviour_TypeDefinitionIndex = 48834;

	class BGMEmotionBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::System::Boolean IsUseStoryState; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* StoryState; // 0x28
		::System::String* EmotionState; // 0x30
		::System::String* SoundEffectState; // 0x38
		::System::Boolean IsResetWhenClipExit; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Boolean FHPINBFJDLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_FHPINBFJDLE_OFFSET))(this);
		}

		::System::Boolean NPFGHKBKGHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_NPFGHKBKGHH_OFFSET))(this);
		}

	};
}
