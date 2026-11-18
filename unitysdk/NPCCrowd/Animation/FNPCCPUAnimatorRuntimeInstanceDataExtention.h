#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NPCCrowd/Animation/FNPCAnimatorRuntimeInstanceAnimClipData.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCPUAnimatorRuntimeInstanceData.h"

#define NPCCROWD_ANIMATION_FNPCCPUANIMATORRUNTIMEINSTANCEDATAEXTENTION_GETANIMCLIPDATA_OFFSET UNITYSDK_OFFSET(0x15F459F0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FNPCCPUAnimatorRuntimeInstanceDataExtention_TypeDefinitionIndex = 60378;

	class FNPCCPUAnimatorRuntimeInstanceDataExtention : public ::System::Object
	{
	public:
		static ::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData& GetAnimClipData(::NPCCrowd::Animation::FNPCCPUAnimatorRuntimeInstanceData& data, ::System::Int32 layerIdx)
		{
			return ((::NPCCrowd::Animation::FNPCAnimatorRuntimeInstanceAnimClipData&(*)(::NPCCrowd::Animation::FNPCCPUAnimatorRuntimeInstanceData&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FNPCCPUANIMATORRUNTIMEINSTANCEDATAEXTENTION_GETANIMCLIPDATA_OFFSET))(data, layerIdx);
		}
	};
}
