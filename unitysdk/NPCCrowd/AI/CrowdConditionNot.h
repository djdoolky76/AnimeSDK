#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/CrowdConditionBase.h"
#include "unitysdk/NPCCrowd/AI/ConditionContext.h"

#define NPCCROWD_AI_CROWDCONDITIONNOT_CHECK_OFFSET UNITYSDK_OFFSET(0x16B988F0)
#define NPCCROWD_AI_CROWDCONDITIONNOT__CTOR_OFFSET UNITYSDK_OFFSET(0x16B988E0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int CrowdConditionNot_TypeDefinitionIndex = 73733;

	class CrowdConditionNot : public ::NPCCrowd::AI::CrowdConditionBase
	{
	public:
		::NPCCrowd::AI::CrowdConditionBase* condition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_CROWDCONDITIONNOT__CTOR_OFFSET))(this);
		}

		::System::Boolean Check(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_CROWDCONDITIONNOT_CHECK_OFFSET))(this, context);
		}
	};
}
