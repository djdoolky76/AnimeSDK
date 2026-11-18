#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NPCCrowd/AI/ConditionContext.h"

namespace NPCCrowd::AI { class CrowdConditionGroup; }

#define NPCCROWD_AI_POPULATIONPOOLREF_CHECKCONDITIONS_OFFSET UNITYSDK_OFFSET(0x6CA730)
#define NPCCROWD_AI_POPULATIONPOOLREF_GETCLAMPEDWEIGHT_OFFSET UNITYSDK_OFFSET(0x6CA6E0)
#define NPCCROWD_AI_POPULATIONPOOLREF__CTOR_OFFSET UNITYSDK_OFFSET(0x6CA600)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PopulationPoolRef_TypeDefinitionIndex = 69901;

	struct alignas(8) PopulationPoolRef
	{
		::System::Int32 poolID; // 0x10
		::System::Single weight; // 0x14
		::NPCCrowd::AI::CrowdConditionGroup* conditionGroup; // 0x18

		::System::Void _ctor(::System::Int32 poolID, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONPOOLREF__CTOR_OFFSET))(this, poolID, weight);
		}

		::System::Single GetClampedWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONPOOLREF_GETCLAMPEDWEIGHT_OFFSET))(this);
		}

		::System::Boolean CheckConditions(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONPOOLREF_CHECKCONDITIONS_OFFSET))(this, context);
		}
	};
}
