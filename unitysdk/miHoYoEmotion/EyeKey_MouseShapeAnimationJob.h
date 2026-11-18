#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Animations/TransformStreamHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"

#define MIHOYOEMOTION_EYEKEY_MOUSESHAPEANIMATIONJOB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BA620)
#define MIHOYOEMOTION_EYEKEY_MOUSESHAPEANIMATIONJOB_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x8BA5A0)
#define MIHOYOEMOTION_EYEKEY_MOUSESHAPEANIMATIONJOB_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x8BA5E0)
#define MIHOYOEMOTION_EYEKEY_MOUSESHAPEANIMATIONJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x8BA590)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EyeKey_MouseShapeAnimationJob_TypeDefinitionIndex = 38064;

	struct alignas(8) EyeKey_MouseShapeAnimationJob
	{
		::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle> BoneHandler; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> OriginLocalPosition; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> OriginLocalRotation; // 0x30
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> RecordBoneHash; // 0x40
		::System::Byte _padding3[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> DeltaLocalPosition; // 0x50
		::System::Byte _padding4[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> DeltaLocalRotation; // 0x60
		::System::Byte _padding5[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> BoneHash; // 0x70

		::System::Void _ctor(::Il2CppArray<::UnityEngine::Animations::TransformStreamHandle>* boneHandlerList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Animations::TransformStreamHandle>*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_MOUSESHAPEANIMATIONJOB__CTOR_OFFSET))(this, boneHandlerList);
		}

		::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_MOUSESHAPEANIMATIONJOB_PROCESSANIMATION_OFFSET))(this, stream);
		}

		::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_MOUSESHAPEANIMATIONJOB_PROCESSROOTMOTION_OFFSET))(this, stream);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_MOUSESHAPEANIMATIONJOB_DISPOSE_OFFSET))(this);
		}
	};
}
