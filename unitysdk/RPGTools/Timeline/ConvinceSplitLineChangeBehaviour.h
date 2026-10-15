#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline { class ConvinceSplitLineChangeClip; }

#define RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8D6B00)
#define RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8D68D0)
#define RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8D68F0)
#define RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8D68E0)

namespace RPGTools::Timeline
{
	class ConvinceSplitLineChangeBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::ConvinceSplitLineChangeClip* _Clip_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::ConvinceSplitLineChangeClip* get_Clip()
		{
			return ((::RPGTools::Timeline::ConvinceSplitLineChangeClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::ConvinceSplitLineChangeClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ConvinceSplitLineChangeClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

	};
}
