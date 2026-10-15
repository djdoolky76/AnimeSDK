#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System { class Object; }

#define DONFNDKLPNB_CTOR_OFFSET UNITYSDK_OFFSET(0x11FF35D0)
#define DONFNDKLPNB_GET_TRACKTYPE_OFFSET UNITYSDK_OFFSET(0x11FF2AA0)
#define DONFNDKLPNB_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x11FF2B10)
#define DONFNDKLPNB_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x11FF2AC0)
#define DONFNDKLPNB_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x11FF30A0)
#define DONFNDKLPNB_SET_TRACKTYPE_OFFSET UNITYSDK_OFFSET(0x11FF2AB0)

inline static constexpr unsigned int DONFNDKLPNB_TypeDefinitionIndex = 48773;

	class DONFNDKLPNB : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPG::Client::MonoEmoPlayableGraph* IPKADGBKLEK; // 0x10
		::UnityEngine::Animations::AnimationLayerMixerPlayable MJODFJKEDHK; // 0x18
		::RPGTools::Timeline::Emotion::EmoTrackType _TrackType_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONFNDKLPNB_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::Emotion::EmoTrackType get_TrackType()
		{
			return ((::RPGTools::Timeline::Emotion::EmoTrackType(*)(::PVOID))((::PBYTE)hIl2Cpp + DONFNDKLPNB_GET_TRACKTYPE_OFFSET))(this);
		}

		::System::Void set_TrackType(::RPGTools::Timeline::Emotion::EmoTrackType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTrackType))((::PBYTE)hIl2Cpp + DONFNDKLPNB_SET_TRACKTYPE_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + DONFNDKLPNB_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + DONFNDKLPNB_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + DONFNDKLPNB_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

	};
