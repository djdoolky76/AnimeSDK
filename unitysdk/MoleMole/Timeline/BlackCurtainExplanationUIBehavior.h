#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_TIMELINE_BLACKCURTAINEXPLANATIONUIBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x131284E0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int BlackCurtainExplanationUIBehavior_TypeDefinitionIndex = 87124;

	class BlackCurtainExplanationUIBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean CanClick; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single BlackCurtainAlpha; // 0x14
		::System::Boolean EnableBlackCurtainFade; // 0x18
		::System::Byte _padding1[0x3];
		::System::Single TextAlpha; // 0x1C
		::System::Boolean EnableTextFade; // 0x20
		::System::Byte _padding2[0x7];
		::System::String* TextMapKey; // 0x28
		::System::Single BlendInTime; // 0x30
		::System::Byte _padding3[0x4];
		::UnityEngine::AnimationCurve* BlendInAlphaCurve; // 0x38
		::System::Single BlendOutTime; // 0x40
		::System::Byte _padding4[0x4];
		::UnityEngine::AnimationCurve* BlendOutAlphaCurve; // 0x48
		::System::Single TextBlendInTime; // 0x50
		::System::Byte _padding5[0x4];
		::UnityEngine::AnimationCurve* TextBlendInAlphaCurve; // 0x58
		::System::Single TextBlendOutTime; // 0x60
		::System::Byte _padding6[0x4];
		::UnityEngine::AnimationCurve* TextBlendOutAlphaCurve; // 0x68
		::System::Boolean isBlackTextAndWhiteCurtain; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BLACKCURTAINEXPLANATIONUIBEHAVIOR__CTOR_OFFSET))(this);
		}
	};
}
