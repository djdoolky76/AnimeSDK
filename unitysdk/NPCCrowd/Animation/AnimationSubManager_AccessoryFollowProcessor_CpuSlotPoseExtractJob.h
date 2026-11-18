#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Accessories/CpuAccessoryPoseBinding.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeMultiHashMap_2.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ACCESSORYFOLLOWPROCESSOR_CPUSLOTPOSEEXTRACTJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5C7510)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ACCESSORYFOLLOWPROCESSOR_CPUSLOTPOSEEXTRACTJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0xED638F0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AccessoryFollowProcessor_CpuSlotPoseExtractJob_TypeDefinitionIndex = 81256;

	struct alignas(8) AnimationSubManager_AccessoryFollowProcessor_CpuSlotPoseExtractJob
	{
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_Sources()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_AccessoryFollowProcessor_CpuSlotPoseExtractJob_TypeDefinitionIndex)->GetStaticField(0x490A0);
		}
		::Unity::Collections::NativeMultiHashMap_2<::System::UInt32, ::NPCCrowd::Accessories::CpuAccessoryPoseBinding> Bindings; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> RawSlotPose; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::System::Byte> PoseValid; // 0x30

		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::System::Int32& sourceIndex, ::System::Int32& localChunkIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ACCESSORYFOLLOWPROCESSOR_CPUSLOTPOSEEXTRACTJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, sourceIndex, localChunkIndex);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ACCESSORYFOLLOWPROCESSOR_CPUSLOTPOSEEXTRACTJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}
	};
}
