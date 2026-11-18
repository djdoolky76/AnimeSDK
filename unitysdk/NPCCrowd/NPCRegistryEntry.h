#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/NPCCrowd/EDynamicUnloadPriority.h"
#include "unitysdk/System/ValueType.h"

class EGOJNNIFDJJ;
class GKMJINDLJMI;

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCRegistryEntry_TypeDefinitionIndex = 58189;

	struct alignas(8) NPCRegistryEntry
	{
		::Foundation::ViewObject::ViewObjectHandle viewObjectHandle; // 0x10
		::NPCCrowd::EDynamicUnloadPriority dynamicUnloadPriority; // 0x20
		::System::Boolean bIsBackStage; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 groupID; // 0x28
		::System::Single registerTime; // 0x2C
		::System::Single backStageStartTime; // 0x30
		::System::Single accumulatedFrontStageTime; // 0x34
		::System::Single frontStageEnterTime; // 0x38
		::System::Byte _padding1[0x4];
		::System::UInt64 registerOrderSeq; // 0x40
		::System::UInt64 backStageOrderSeq; // 0x48
		::GKMJINDLJMI* cachedBuilderComp; // 0x50
		::EGOJNNIFDJJ* cachedMemberComp; // 0x58
	};
}
