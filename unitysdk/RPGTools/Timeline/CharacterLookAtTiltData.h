#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPGTOOLS_TIMELINE_CHARACTERLOOKATTILTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8CAB20)

namespace RPGTools::Timeline
{
	class CharacterLookAtTiltData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::Single TargetTilt; // 0x18
		::System::Boolean ForceSnap; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single OverrideBlendTime; // 0x20
		::System::Byte _padding1[0x4];
		::System::String* CurveName; // 0x28
		::UnityEngine::AnimationCurve* TiltCurve; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATTILTDATA_CTOR_OFFSET))(this);
		}

	};
}
