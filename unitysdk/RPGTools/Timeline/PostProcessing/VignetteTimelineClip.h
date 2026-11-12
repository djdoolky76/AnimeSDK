#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xF4095E0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xF409740)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xF409550)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_GET_EASEINDURATION_OFFSET UNITYSDK_OFFSET(0xF4095A0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_GET_EASEOUTDURATION_OFFSET UNITYSDK_OFFSET(0xF4095C0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_SET_EASEINDURATION_OFFSET UNITYSDK_OFFSET(0xF4095B0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_SET_EASEOUTDURATION_OFFSET UNITYSDK_OFFSET(0xF4095D0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int VignetteTimelineClip_TypeDefinitionIndex = 49672;

	class VignetteTimelineClip
	{
	public:
		::System::Single _EaseInDuration_k__BackingField; // 0x28
		::System::Single _EaseOutDuration_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Single get_EaseInDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_GET_EASEINDURATION_OFFSET))(this);
		}

		::System::Void set_EaseInDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_SET_EASEINDURATION_OFFSET))(this, a1);
		}

		::System::Single get_EaseOutDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_GET_EASEOUTDURATION_OFFSET))(this);
		}

		::System::Void set_EaseOutDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_SET_EASEOUTDURATION_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

	};
}
