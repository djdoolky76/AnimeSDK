#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEWRITEBACKPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x594B30)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PoseWriteBackProcessor_ParallelJob_TypeDefinitionIndex = 81206;

	struct alignas(4) AnimationSubManager_PoseWriteBackProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_s_sources()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_PoseWriteBackProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x42780);
		}
		::System::Int32 frameCount; // 0x10

		::System::Void Execute(::System::Int32 animationIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSEWRITEBACKPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, animationIndex);
		}
	};
}
