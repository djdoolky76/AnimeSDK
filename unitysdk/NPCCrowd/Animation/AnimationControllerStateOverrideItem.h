#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERSTATEOVERRIDEITEM_ASSIGNTO_OFFSET UNITYSDK_OFFSET(0x11F9D2F0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERSTATEOVERRIDEITEM_HASANIMATION_OFFSET UNITYSDK_OFFSET(0x11F9D260)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERSTATEOVERRIDEITEM_ISSAMEITEM_OFFSET UNITYSDK_OFFSET(0x11F9D360)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERSTATEOVERRIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x11F9D3B0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationControllerStateOverrideItem_TypeDefinitionIndex = 43669;

	class AnimationControllerStateOverrideItem : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Int32 baseAnimationId; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* additionalAnimationIds; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERSTATEOVERRIDEITEM__CTOR_OFFSET))(this);
		}

		::System::Boolean HasAnimation(::System::Int32 animationId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERSTATEOVERRIDEITEM_HASANIMATION_OFFSET))(this, animationId);
		}

		::System::Void AssignTo(::NPCCrowd::Animation::AnimationControllerStateOverrideItem* other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerStateOverrideItem*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERSTATEOVERRIDEITEM_ASSIGNTO_OFFSET))(this, other);
		}

		::System::Boolean IsSameItem(::NPCCrowd::Animation::AnimationControllerStateOverrideItem* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerStateOverrideItem*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERSTATEOVERRIDEITEM_ISSAMEITEM_OFFSET))(this, other);
		}
	};
}
