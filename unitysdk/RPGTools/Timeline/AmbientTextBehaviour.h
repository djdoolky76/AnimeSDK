#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline { class AmbientTextClip; }

#define RPGTOOLS_TIMELINE_AMBIENTTEXTBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8AB440)
#define RPGTOOLS_TIMELINE_AMBIENTTEXTBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8AB380)
#define RPGTOOLS_TIMELINE_AMBIENTTEXTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8AB3A0)
#define RPGTOOLS_TIMELINE_AMBIENTTEXTBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8AB390)

namespace RPGTools::Timeline
{
	class AmbientTextBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::AmbientTextClip* _Clip_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AMBIENTTEXTBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::AmbientTextClip* get_Clip()
		{
			return ((::RPGTools::Timeline::AmbientTextClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AMBIENTTEXTBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::AmbientTextClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::AmbientTextClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AMBIENTTEXTBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AMBIENTTEXTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

	};
}
