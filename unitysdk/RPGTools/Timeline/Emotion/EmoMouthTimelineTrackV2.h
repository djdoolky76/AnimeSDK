#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/BaseEmoTimelineTrackV2.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_CCAKILLMFNP_OFFSET UNITYSDK_OFFSET(0xE8F0450)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_CTOR_OFFSET UNITYSDK_OFFSET(0xE8F05A0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_GET_DEFAULTCLIP_OFFSET UNITYSDK_OFFSET(0xE8F03F0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_GET_TRACKTYPE_OFFSET UNITYSDK_OFFSET(0xE8F03E0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_NIFEFPDKLMM_OFFSET UNITYSDK_OFFSET(0xE8F04B0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xE8F04F0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoMouthTimelineTrackV2_TypeDefinitionIndex = 48772;

	class EmoMouthTimelineTrackV2 : public ::RPGTools::Timeline::Emotion::BaseEmoTimelineTrackV2
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::Emotion::EmoTrackType get_TrackType()
		{
			return ((::RPGTools::Timeline::Emotion::EmoTrackType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_GET_TRACKTYPE_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* get_DefaultClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_GET_DEFAULTCLIP_OFFSET))(this);
		}

		::UnityEngine::AvatarMask* CCAKILLMFNP(::System::Int32 a1)
		{
			return ((::UnityEngine::AvatarMask*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_CCAKILLMFNP_OFFSET))(this, a1);
		}

		::System::Boolean NIFEFPDKLMM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_NIFEFPDKLMM_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_ONCREATECLIP_OFFSET))(this, a1);
		}

	};
}
