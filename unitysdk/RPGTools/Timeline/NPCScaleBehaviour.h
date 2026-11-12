#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline { class NPCScaleClip; }

#define RPGTOOLS_TIMELINE_NPCSCALEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xF3EC7B0)
#define RPGTOOLS_TIMELINE_NPCSCALEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xF3EC630)
#define RPGTOOLS_TIMELINE_NPCSCALEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xF3EC650)
#define RPGTOOLS_TIMELINE_NPCSCALEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xF3EC640)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int NPCScaleBehaviour_TypeDefinitionIndex = 49246;

	class NPCScaleBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::NPCScaleClip* _Clip_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCSCALEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::NPCScaleClip* get_Clip()
		{
			return ((::RPGTools::Timeline::NPCScaleClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCSCALEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::NPCScaleClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::NPCScaleClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCSCALEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCSCALEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

	};
}
