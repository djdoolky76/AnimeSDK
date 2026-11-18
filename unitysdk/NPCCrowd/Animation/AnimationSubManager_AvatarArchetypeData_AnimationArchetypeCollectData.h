#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AvatarArchetypeData_AnimationArchetypeCollectData_TypeDefinitionIndex = 81135;

	struct alignas(4) AnimationSubManager_AvatarArchetypeData_AnimationArchetypeCollectData
	{
		::System::Int32 AnimationArchetypeIndex; // 0x10
		::System::Int32 StartChunkIndex; // 0x14
		::System::Int32 ChunkCount; // 0x18
	};
}
