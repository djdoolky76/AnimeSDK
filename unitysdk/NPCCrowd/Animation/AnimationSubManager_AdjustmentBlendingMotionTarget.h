#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/EnumAsFlag_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGMOTIONTARGET__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD266C0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingMotionTarget_TypeDefinitionIndex = 81154;

	struct alignas(8) AnimationSubManager_AdjustmentBlendingMotionTarget
	{
		static ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget* StaticGet_Default()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_AdjustmentBlendingMotionTarget_TypeDefinitionIndex)->GetStaticField(0xBD40);
		}
		::UnityEngine::NapTransformData GlobalTarget; // 0x10
		::System::Single DeltaAngle; // 0x40
		::System::Byte _padding0[0x4];
		::System::Double EndTimestamp; // 0x48
		::System::Boolean IsTriggered; // 0x50
		::System::Byte _padding1[0x3];
		::Foundation::EnumAsFlag_1<::System::Object*> Bones; // 0x54

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGMOTIONTARGET__CCTOR_OFFSET))();
		}
	};
}
