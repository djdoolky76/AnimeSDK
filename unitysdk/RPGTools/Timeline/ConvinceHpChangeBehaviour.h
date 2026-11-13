#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline { class ConvinceHpChangeClip; }

#define RPGTOOLS_TIMELINE_CONVINCEHPCHANGEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EBB90)
#define RPGTOOLS_TIMELINE_CONVINCEHPCHANGEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1D8EB960)
#define RPGTOOLS_TIMELINE_CONVINCEHPCHANGEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1D8EB980)
#define RPGTOOLS_TIMELINE_CONVINCEHPCHANGEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1D8EB970)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ConvinceHpChangeBehaviour_TypeDefinitionIndex = 49075;

	class ConvinceHpChangeBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::ConvinceHpChangeClip* _Clip_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEHPCHANGEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::ConvinceHpChangeClip* get_Clip()
		{
			return ((::RPGTools::Timeline::ConvinceHpChangeClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEHPCHANGEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::ConvinceHpChangeClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ConvinceHpChangeClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEHPCHANGEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEHPCHANGEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

	};
}
