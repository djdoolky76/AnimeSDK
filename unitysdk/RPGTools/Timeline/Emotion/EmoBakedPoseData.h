#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/BlendCurve.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPGTools::Timeline::Emotion { class EmoBakedPose; }
namespace UnityEngine { class AnimationCurve; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOBAKEDPOSEDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xE8EA100)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBAKEDPOSEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8EA0F0)

namespace RPGTools::Timeline::Emotion
{
	class EmoBakedPoseData : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPGTools::Timeline::Emotion::BlendCurve Curve; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPGTools::Timeline::Emotion::EmoBakedPose*>* Poses; // 0x20
		static ::UnityEngine::AnimationCurve** StaticGet_s_EaseInOutCurve()
		{
			return (::UnityEngine::AnimationCurve**)UnitySDK::FromName("RPGTools.Timeline.Emotion", "EmoBakedPoseData")->GetStaticField(0x6F930);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBAKEDPOSEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBAKEDPOSEDATA_CCTOR_OFFSET))();
		}

	};
}
