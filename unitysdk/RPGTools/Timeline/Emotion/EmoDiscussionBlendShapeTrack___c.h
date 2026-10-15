#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPETRACK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE8E4040)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPETRACK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE8E4070)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPETRACK___C__CREATETRACKMIXER_B__3_0_OFFSET UNITYSDK_OFFSET(0xE8E4080)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoDiscussionBlendShapeTrack___c_TypeDefinitionIndex = 48758;

	class EmoDiscussionBlendShapeTrack___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>**)UnitySDK::FromName("RPGTools.Timeline.Emotion", "<>c")->GetStaticField(0x6FBE0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPGTools.Timeline.Emotion", "<>c")->GetStaticField(0x6FBE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPETRACK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPETRACK___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateTrackMixer_b__3_0(::UnityEngine::Timeline::TimelineClip* a1, ::UnityEngine::Timeline::TimelineClip* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPETRACK___C__CREATETRACKMIXER_B__3_0_OFFSET))(this, a1, a2);
		}

	};
}
