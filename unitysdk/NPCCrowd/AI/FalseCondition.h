#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/CrowdConditionBase.h"
#include "unitysdk/NPCCrowd/AI/ConditionContext.h"

#define NPCCROWD_AI_FALSECONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0xED54530)
#define NPCCROWD_AI_FALSECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0xED54520)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int FalseCondition_TypeDefinitionIndex = 46144;

	class FalseCondition : public ::NPCCrowd::AI::CrowdConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FALSECONDITION__CTOR_OFFSET))(this);
		}

		::System::Boolean Check(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FALSECONDITION_CHECK_OFFSET))(this, context);
		}
	};
}
