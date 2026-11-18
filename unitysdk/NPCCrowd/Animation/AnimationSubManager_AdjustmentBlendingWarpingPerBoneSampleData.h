#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONESAMPLEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x10DB7E10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONESAMPLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x651AC0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData_TypeDefinitionIndex = 81250;

	struct alignas(8) AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData
	{
		static ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData* StaticGet_Default()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData_TypeDefinitionIndex)->GetStaticField(0x106E0);
		}
		::UnityEngine::NapTransformData Transform; // 0x10
		::System::Object* CurveRatio; // 0x40

		::System::Void _ctor(::UnityEngine::NapTransformData meshTransform, ::System::Object* curveRatio)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapTransformData, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONESAMPLEDATA__CTOR_OFFSET))(this, meshTransform, curveRatio);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONESAMPLEDATA__CCTOR_OFFSET))();
		}
	};
}
