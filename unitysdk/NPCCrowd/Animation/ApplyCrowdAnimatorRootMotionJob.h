#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/GPUIAnimationClipData.h"
#include "unitysdk/NPCCrowd/Animation/GPUIRootMotion.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccess.h"

#define NPCCROWD_ANIMATION_APPLYCROWDANIMATORROOTMOTIONJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x594B60)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int ApplyCrowdAnimatorRootMotionJob_TypeDefinitionIndex = 55253;

	struct alignas(8) ApplyCrowdAnimatorRootMotionJob
	{
		::System::Single currentTime; // 0x10
		::System::Single lerpAmount; // 0x14
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> animationData; // 0x18
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> crowdAnimatorControllerData; // 0x28
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::GPUIAnimationClipData> clipDatas; // 0x38
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::GPUIRootMotion> rootMotions; // 0x48

		::System::Void Execute(::System::Int32 index, ::UnityEngine::Jobs::TransformAccess transformAccess)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Jobs::TransformAccess))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_APPLYCROWDANIMATORROOTMOTIONJOB_EXECUTE_OFFSET))(this, index, transformAccess);
		}
	};
}
