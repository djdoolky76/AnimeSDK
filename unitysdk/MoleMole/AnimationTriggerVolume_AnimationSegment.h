#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNLGDAJDDFD.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_ANIMATIONSEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x164F9BC0)

namespace MoleMole
{
	inline static constexpr unsigned int AnimationTriggerVolume_AnimationSegment_TypeDefinitionIndex = 63098;

	class AnimationTriggerVolume_AnimationSegment : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* targetObject; // 0x10
		::UnityEngine::AnimationClip* clip; // 0x18
		::System::Single length; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* stableKey; // 0x28
		::System::String* displayName; // 0x30
		::DNLGDAJDDFD playMode; // 0x38
		::System::Int32 volumeIndex; // 0x3C
		::System::Boolean onlyOnce; // 0x40
		::System::Boolean lastAnimation; // 0x41
		::System::Byte _padding1[0x2];
		::System::Single wrapUpTime; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_ANIMATIONSEGMENT__CTOR_OFFSET))(this);
		}
	};
}
