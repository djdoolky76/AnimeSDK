#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine::Unity { class SkeletonAnimation; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIRIGIDBODY_PLAYANIMATIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE7EF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRigidbody_PlayAnimationInfo_TypeDefinitionIndex = 91376;

	class UIRigidbody_PlayAnimationInfo : public ::System::Object
	{
	public:
		::UnityEngine::Animation* Target; // 0x10
		::Spine::Unity::SkeletonAnimation* SkeletalTarget; // 0x18
		::System::String* SkeletalAnimationName; // 0x20
		::System::String* SkeletalIdleName; // 0x28
		::System::String* ClipName; // 0x30
		::System::String* StartMusic; // 0x38
		::System::String* EndMusic; // 0x40
		::System::String* UIDisableMusic; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_PLAYANIMATIONINFO__CTOR_OFFSET))(this);
		}
	};
}
