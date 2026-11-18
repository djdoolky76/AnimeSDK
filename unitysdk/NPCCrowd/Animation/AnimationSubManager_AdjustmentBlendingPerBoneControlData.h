#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_CLAMPANGLE_OFFSET UNITYSDK_OFFSET(0x114C0920)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_GET_ISNOTNULL_OFFSET UNITYSDK_OFFSET(0x67E440)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_ISAPPLICABLE_OFFSET UNITYSDK_OFFSET(0x67E4B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_MAKE_OFFSET UNITYSDK_OFFSET(0x114C0AE0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_PROCESSCOMPENSATEROTATION_OFFSET UNITYSDK_OFFSET(0x67E590)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_PROCESS_OFFSET UNITYSDK_OFFSET(0x67E500)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x114C19A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x67E370)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingPerBoneControlData_TypeDefinitionIndex = 81207;

	struct alignas(8) AnimationSubManager_AdjustmentBlendingPerBoneControlData
	{
		static ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneControlData* StaticGet_Null()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneControlData*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_AdjustmentBlendingPerBoneControlData_TypeDefinitionIndex)->GetStaticField(0x14430);
		}
		// static const ::System::Single Epsilon; // 0x0
		// static const ::System::Single LargeEpsilon; // 0x0
		::UnityEngine::Vector3 _rotationAxis; // 0x10
		::System::Single _rotationAngle; // 0x1C
		::UnityEngine::Vector3 _translation; // 0x20
		::System::Object* _beginRatio; // 0x2C
		::System::Byte _padding0[0x8];
		::System::Object* _totalRatioReciprocal; // 0x3C

		::System::Void _ctor(::UnityEngine::Quaternion deltaRotation, ::UnityEngine::Vector3 deltaTranslation, ::System::Object* beginRatio, ::System::Object* totalRatio)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA__CTOR_OFFSET))(this, deltaRotation, deltaTranslation, beginRatio, totalRatio);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA__CCTOR_OFFSET))();
		}

		static ::System::Void ClampAngle(::System::Single& rotationAngle, ::UnityEngine::Vector3& rotationAxis)
		{
			return ((::System::Void(*)(::System::Single&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_CLAMPANGLE_OFFSET))(rotationAngle, rotationAxis);
		}

		::System::Boolean get_IsNotNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_GET_ISNOTNULL_OFFSET))(this);
		}

		::System::Boolean IsApplicable(::UnityEngine::NapTransformData totalMeshTransform, ::System::Single threshold)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NapTransformData, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_ISAPPLICABLE_OFFSET))(this, totalMeshTransform, threshold);
		}

		/*
		static ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneControlData Make(::UnityEngine::NapTransformData animationMeshTransform, ::UnityEngine::NapTransformData actualMeshTransform, ::System::Object* beginRatio, ::System::Object* endRatio, ::System::Int32 loopCount)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneControlData(*)(::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_MAKE_OFFSET))(animationMeshTransform, actualMeshTransform, beginRatio, endRatio, loopCount);
		}
		*/

		::UnityEngine::NapTransformData Process(::UnityEngine::NapTransformData meshOrigin, ::UnityEngine::NapTransformData animationMeshTransform, ::System::Object* ratio)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_PROCESS_OFFSET))(this, meshOrigin, animationMeshTransform, ratio);
		}

		::UnityEngine::Quaternion ProcessCompensateRotation(::System::Single deltaRatio, ::System::Single compensateAngle)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA_PROCESSCOMPENSATEROTATION_OFFSET))(this, deltaRatio, compensateAngle);
		}
	};
}
