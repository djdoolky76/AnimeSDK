#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CLEARACCESSORYPOSEVALIDITYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6CBC60)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryManager_ClearAccessoryPoseValidityJob_TypeDefinitionIndex = 52999;

	struct alignas(8) NPCAccessoryManager_ClearAccessoryPoseValidityJob
	{
		::Unity::Collections::NativeArray_1<::System::Byte> PoseValid; // 0x10

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CLEARACCESSORYPOSEVALIDITYJOB_EXECUTE_OFFSET))(this);
		}
	};
}
