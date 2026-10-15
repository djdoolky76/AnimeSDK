#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/BlendCurve.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPGTools::Timeline::Emotion { class EmoMouthBakedBlendShapes; }
namespace UnityEngine { class AnimationCurve; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHBAKEDBLENDSHAPESDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xE8F03A0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHBAKEDBLENDSHAPESDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8F0380)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHBAKEDBLENDSHAPESDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xE8F0250)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHBAKEDBLENDSHAPESDATA_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xE8F02F0)

namespace RPGTools::Timeline::Emotion
{
	class EmoMouthBakedBlendShapesData : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPGTools::Timeline::Emotion::BlendCurve Curve; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapes*>* BlendShapes; // 0x20
		static ::UnityEngine::AnimationCurve** StaticGet_s_EaseInOutCurve()
		{
			return (::UnityEngine::AnimationCurve**)UnitySDK::FromName("RPGTools.Timeline.Emotion", "EmoMouthBakedBlendShapesData")->GetStaticField(0x64EF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHBAKEDBLENDSHAPESDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHBAKEDBLENDSHAPESDATA_CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHBAKEDBLENDSHAPESDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHBAKEDBLENDSHAPESDATA_GET_LENGTH_OFFSET))(this);
		}

	};
}
