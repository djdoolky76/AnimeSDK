#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline { class ConvincePanelActiveClip; }

#define RPGTOOLS_TIMELINE_CONVINCEPANELACTIVEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8D6170)
#define RPGTOOLS_TIMELINE_CONVINCEPANELACTIVEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8D5F40)
#define RPGTOOLS_TIMELINE_CONVINCEPANELACTIVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8D5F60)
#define RPGTOOLS_TIMELINE_CONVINCEPANELACTIVEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8D5F50)

namespace RPGTools::Timeline
{
	class ConvincePanelActiveBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::ConvincePanelActiveClip* _Clip_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEPANELACTIVEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::ConvincePanelActiveClip* get_Clip()
		{
			return ((::RPGTools::Timeline::ConvincePanelActiveClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEPANELACTIVEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::ConvincePanelActiveClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ConvincePanelActiveClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEPANELACTIVEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEPANELACTIVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

	};
}
